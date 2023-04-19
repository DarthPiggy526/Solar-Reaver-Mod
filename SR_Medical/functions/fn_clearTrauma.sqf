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

private _bruisesWounds = ((_patient getVariable "ace_medical_OpenWounds") select {((_x select 0) == 20) or ((_x select 0) == 21) or ((_x select 0) == 22)});

// Stop treatment if there are no wounds that can be stitched remaining
if (_bruisesWounds isEqualTo []) exitWith {false};

// Not enough time has elapsed to stitch a wound
if (_totalTime - _elapsedTime > (count _bruisesWounds - 1) * 1) exitWith {true};

private _openWounds = (_patient getVariable "ace_medical_OpenWounds");

// Remove the first bruise wound from the wounds
private _treatedWound = _openWounds deleteAt (_openWounds find (_bruisesWounds select 0));
_treatedWound params ["_treatedID", "_treatedBodyPartN", "_treatedAmountOf", "", "_treatedDamageOf"];

// Clear trauma
private _bodyPartDamage = _patient getVariable ["ace_medical_bodyPartDamage", []];
private _newDamage = ((_bodyPartDamage select _treatedBodyPartN) - _treatedDamageOf);
if (_newDamage < 0.5) then {
	_newDamage = 0;
};
_bodyPartDamage set [_treatedBodyPartN, _newDamage];
_patient setVariable ["ace_medical_bodyPartDamage", _bodyPartDamage, true];

_patient setVariable ["ace_medical_OpenWounds", _openWounds, true];