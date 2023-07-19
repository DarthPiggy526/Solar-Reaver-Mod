/*
	Author: Waagheur
	Description:
		Calculates the time it will take to clear trauma
		Trauma clearing takes 5 second per bruise
	Parameter(s):
		None
	Returns:
		Trauma treatment time (integer)
	Examples:
		
*/

params ["_medic", "_patient"];

({((_x select 0) == 20) or ((_x select 0) == 21) or ((_x select 0) == 22)} count (_patient getVariable "ace_medical_OpenWounds")) * 2.5;
