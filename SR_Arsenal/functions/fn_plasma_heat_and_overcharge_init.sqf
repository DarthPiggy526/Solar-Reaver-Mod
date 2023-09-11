/*
	Author: Waagheur

	Description:
		Adds a Take event handler and an ace arsenal close event handler to client
		The event handlers adds a FiredMan event handler upon picking up an SR plasma gun or pistol
		aswell a a display and heat reduction loop
		(used function : fn_plasma_heat_and_overcharge_main.sqf)

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (not(isDedicated)) then {

	_plasma_weapons = [
		"SR_Master_Crafted_Ragefire_PlasmaGun_1", 
		"SR_Ragefire_Plasma_Gun",
        "SR_Relic_Plasma_Gun_1",
        "SR_Relic_Plasma_Gun_2",
        "SR_Relic_Plasma_Gun_3",
        "SR_Relic_Plasma_Gun_4",
        "SR_Relic_Plasma_Gun_5",
		"SR_Ryza_Plasma_Gun_01", 
		"SR_Ryza_Plasma_Gun_02", 
		"SR_Ryza_Plasma_Gun_03", 
		"SR_Ryza_Plasma_Gun_04", 
		"TIOW_SM_Combi_Bolter_1", 
		"TIOW_SM_Combi_Bolter_2", 
		"TIOW_SM_Combi_Bolter_3",
		"STEVE_TigComb_Plasma_1"
	];

	_plasma_muzzles = [
		"SR_Master_Crafted_Ragefire_PlasmaGun_1", 
		"SR_Ragefire_Plasma_Gun", 
		"SR_Ryza_Plasma_Gun", 
		"SR_Ryza_Plasma_Pistol",
		"TIOW_SM_Under_Plas_1",
		"Steve_30k_Under_Plasma"
	];

	_plasma_pistol_weapons = [
		"SR_Ryza_Plasma_Pistol",
        "SR_Ryza_Plasma_Pistol_Banner"
	];
	
	{
		missionNamespace setVariable [format ["%1_heat",_x], 0];
		missionNamespace setVariable [format ["%1_handler",_x], -1];
	} forEach _plasma_weapons;
	{
		missionNamespace setVariable [format ["%1_heat",_x], 0];
		missionNamespace setVariable [format ["%1_handler",_x], -1];
	} forEach _plasma_pistol_weapons;
	
    execVM "SR_Arsenal\functions\fn_plasma_heat_and_overcharge_main.sqf";
	player addEventHandler ["Take", {
		// params ["_unit", "_container", "_item"];
		
		execVM "SR_Arsenal\functions\fn_plasma_heat_and_overcharge_main.sqf";
	}];
	["ace_arsenal_displayClosed", {execVM "SR_Arsenal\functions\fn_ragefire_burst_cd.sqf";}] call CBA_fnc_addEventHandler;
};