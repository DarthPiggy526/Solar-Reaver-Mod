/*
	Author: Waagheur

	Description:
		Adds a Take event handler and an ace arsenal close event handler to client
		The event handlers adds a FiredMan event handler upon picking up an SR Dragonfire Magazine
		(used function : fn_dragonfire_main.sqf)

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (not(isDedicated)) then {

	_magazines = [
		"SR_Trig_BoltgunMag_DF",
		"SR_Trig_Exitus_BoltgunMag_DF",
		"SR_Trig_BoltPistolMag_DF",
		"SR_Phob_BoltgunMag_DF",
		"SR_Phob_BoltPistolMag_DF",
		"SR_Phob_CombiBoltgunMag_DF",
		"SR_Phob_Atrox_BoltgunMag_DF"
	];
	
	{
		missionNamespace setVariable [format ["%1_handler",_x], -1];
	} forEach _magazines;
	
    execVM "SR_Arsenal\functions\fn_dragonfire_main.sqf";
	player addEventHandler ["Take", {
		// params ["_unit", "_container", "_item"];
		
		execVM "SR_Arsenal\functions\fn_dragonfire_main.sqf";
	}];
	["ace_arsenal_displayClosed", {execVM "SR_Arsenal\functions\fn_dragonfire_main.sqf";}] call CBA_fnc_addEventHandler;
	
};