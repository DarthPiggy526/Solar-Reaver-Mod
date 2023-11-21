/*
	Author: Waagheur

	Description:
		Adds a Take event handler and an ace arsenal close event handler to client
		The event handlers add a FiredMan event handler upon picking up an SR grav gun
		(used function : fn_grav_slow_main.sqf)

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (not(isDedicated)) then {

	_grav_weapons = [
		"SR_Steve_Grav_1"
	];
	
	{
		missionNamespace setVariable [format ["%1_handler",_x], -1];
	} forEach _grav_weapons;
	
    execVM "SR_Arsenal\functions\fn_grav_slow_main.sqf";
	player addEventHandler ["Take", {
		// params ["_unit", "_container", "_item"];
		
		execVM "SR_Arsenal\functions\fn_grav_slow_main.sqf";
	}];
	["ace_arsenal_displayClosed", {execVM "SR_Arsenal\functions\fn_grav_slow_main.sqf";}] call CBA_fnc_addEventHandler;
	
};