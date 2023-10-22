/*
	Author: Waagheur
	Description:
		Verifies if trauma can be cleared by checking if there is any small bruises, medium bruises or large bruises
	Parameter(s):
		None
	Returns:
		Can trauma be cleared (boolean)
	Examples:
		
*/

params ["_medic", "_patient"];

private _bruisesWounds = [];

{ { _bruisesWounds pushBack _x} forEach _x }
forEach ((toArray (_patient getVariable "ace_medical_OpenWounds")) select 1);
_bruisesWounds = _bruisesWounds select {(((_x select 0)) == 20) or (((_x select 0)) == 21) or (((_x select 0)) == 22)};

count (_bruisesWounds) > 0;
