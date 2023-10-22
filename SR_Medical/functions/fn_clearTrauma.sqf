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

private _bruisesWounds = [];
{ { _bruisesWounds pushBack _x} forEach _x }
forEach ((toArray (_patient getVariable "ace_medical_OpenWounds")) select 1);
_bruisesWounds = _bruisesWounds select {(((_x select 0)) == 20) or (((_x select 0)) == 21) or (((_x select 0)) == 22)};

// Stop treatment if there are no bruises that can be healed remaining, also remove bodyPart damage
if (count (_bruisesWounds) == 0) exitWith {	false; };

// Not enough time has elapsed to stitch a wound
if (_totalTime - _elapsedTime > (count _bruisesWounds - 1) * 1) exitWith {true};

private _openWounds = (_patient getVariable "ace_medical_OpenWounds");


// Remove the first bruise wound from the wounds
private _bool = false;
{ 
	{
		if ((((_x select 0)) == 20) or (((_x select 0)) == 21) or (((_x select 0)) == 22)) then {
			_bool = true;
			_y deleteAt _forEachIndex;
			break;
		};
	} forEach (_y);
	if ((count _y) == 0) then {
		_openWounds deleteAt _x;
	};
	if (_bool) then {
		break;
	};
} forEach (_openWounds);

private _bruisesWounds = [];
{ { _bruisesWounds pushBack _x} forEach _x }
forEach ((toArray (_patient getVariable "ace_medical_OpenWounds")) select 1);
_bruisesWounds = _bruisesWounds select {(((_x select 0)) == 20) or (((_x select 0)) == 21) or (((_x select 0)) == 22)};

if (count (_bruisesWounds) == 0) then {	_patient setVariable ["ace_medical_bodyPartDamage", [0,0,0,0,0,0], true]; };

true
