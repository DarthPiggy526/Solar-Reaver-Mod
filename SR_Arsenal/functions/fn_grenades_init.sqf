/*
	Author: Waagheur

	Description:
		Adds a Take event handler and an ace arsenal close event handler to client
		The event handlers adds a FiredMan event handler upon picking up an SR grenade
		(used function : fn_grenades_main.sqf)

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (not(isDedicated)) then {

	_grenades = [
		"SR_Mag_Rad_Grenade",
		"SR_Mag_Stasis_Grenade",
		"SR_Mag_Tanglefoot_Grenade",
		"SR_Mag_Antigrav_Grenade",
		"SR_Mag_Vortex_Grenade"
	];
	
	{
		missionNamespace setVariable [format ["%1_handler",_x], -1];
	} forEach _grenades;
	
    execVM "SR_Arsenal\functions\fn_grenades_main.sqf";
	player addEventHandler ["Take", {
		// params ["_unit", "_container", "_item"];
		
		execVM "SR_Arsenal\functions\fn_grenades_main.sqf";
	}];
	["ace_arsenal_displayClosed", {execVM "SR_Arsenal\functions\fn_grenades_main.sqf";}] call CBA_fnc_addEventHandler;
	
};