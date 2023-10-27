/*
	Author: Waagheur
	Description:
		Progressively removes bruises off the patient, removing the damage at the same time
	Parameter(s):
		0: Arguments <ARRAY>
			0: Medic (not used) <OBJECT>
			1: Patient <OBJECT>
		1: Elapsed Time <NUMBER>
		2: Total Time <NUMBER>
	Returns:
		Continue Treatment (boolean)
	Examples:
		
*/

params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_medic", "_patient"];

// Count bruises
private _bruisesWounds = [];
{ { _bruisesWounds pushBack _x} forEach _x }
forEach ((toArray (_patient getVariable "ace_medical_OpenWounds")) select 1);
_bruisesWounds = _bruisesWounds select {(((_x select 0)) == 20) or (((_x select 0)) == 21) or (((_x select 0)) == 22)};

// Stop treatment if there are no bruises that can be healed remaining, also remove bodyPart damage
if (count (_bruisesWounds) == 0) exitWith {	false; };

// Not enough time has elapsed to stitch a wound
if (_totalTime - _elapsedTime > (count _bruisesWounds - 1) * 2.5) exitWith { true; };

private _openWounds = (_patient getVariable "ace_medical_OpenWounds");

// Remove the first bruise wound from the wounds
private _damage = 0;
{ 
	{
		// If the wound is a bruise
		if ((((_x select 0)) == 20) or (((_x select 0)) == 21) or (((_x select 0)) == 22)) then {
			// Store the damage to remove it from the limb
			_damage = (_x select 3);
			// Remove the wound, it seems to update the patient's variable automatically?
			_y deleteAt _forEachIndex;
			break;
		};
	} forEach (_y);
	// If there are no more wounds on the limb, remove it from the hashMap
	if ((count _y) == 0) then {
		_openWounds deleteAt _x;
	};
	// If we found a bruise on the limb and removed it, remove the damage and break
	if (_damage > 0) then {
		private _bodyPartDamage = _patient getVariable ["ace_medical_bodyPartDamage", []];

		switch (_x) do {
			case "head": { _bodyPartDamage set [0, ((_bodyPartDamage select 0) - _damage) max 0]; };
			case "body": { _bodyPartDamage set [1, ((_bodyPartDamage select 1) - _damage) max 0]; };
			case "leftarm": { _bodyPartDamage set [2, ((_bodyPartDamage select 2) - _damage) max 0]; };
			case "rightarm": { _bodyPartDamage set [3, ((_bodyPartDamage select 3) - _damage) max 0]; };
			case "leftleg": { _bodyPartDamage set [4, ((_bodyPartDamage select 4) - _damage) max 0]; };
			case "rightleg": { _bodyPartDamage set [5, ((_bodyPartDamage select 5) - _damage) max 0]; };
		};

		// Maybe not necessary
		_patient setVariable ["ace_medical_bodyPartDamage", _bodyPartDamage, true];
		
		break;
	};
} forEach (_openWounds);

// Maybe not necessary
_patient setVariable ["ace_medical_OpenWounds", _openWounds, true];

true
