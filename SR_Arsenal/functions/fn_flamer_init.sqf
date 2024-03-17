/*
	Author: Waagheur

	Description:
		Adds a Take event handler and an ace arsenal close event handler to client
		The event handlers add a FiredMan event handler upon picking up an SR flamer gun
		(used function : fn_flamer_main.sqf)

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (not(isDedicated)) then {

	_flamer_weapons = [
		"SR_TIOW_SM_Flamer"
	];
	
	{
		missionNamespace setVariable [format ["%1_handler",_x], -1];
	} forEach _flamer_weapons;
	
    execVM "SR_Arsenal\functions\fn_flamer_main.sqf";
	player addEventHandler ["Take", {
		// params ["_unit", "_container", "_item"];
		
		execVM "SR_Arsenal\functions\fn_flamer_main.sqf";
	}];
	["ace_arsenal_displayClosed", {execVM "SR_Arsenal\functions\fn_flamer_main.sqf";}] call CBA_fnc_addEventHandler;
	
};