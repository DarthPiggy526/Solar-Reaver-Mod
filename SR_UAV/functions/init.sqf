#include "itc_land_onLoad_RscGunnerSightSPH.sqf"
#include "itc_land_onLoad_RscGunnerSightBasic.sqf"
#include "itc_land_onLoad_RscAltGunnerSightSPH.sqf"
#include "itc_land_onLoad_RscGunnerSightMLRS.sqf"
#include "itc_land_onLoad_RscGunnerSightZamakMRLi.sqf"
#include "itc_land_onLoad_RscIGS_SPH.sqf"
#include "itc_land_onLoad_RscOptics_UAV_gunner.sqf"
#include "itc_land_onLoad_RscOptics_GLTD_gunner.sqf"
#include "itc_land_onLoad_RscOptics_strider_commander.sqf"

["vehicle", {
    params ["_player", "_newVehicle"];
    if (count (currentWeapon _player) > 0) exitWith {};
    if (isNull _newVehicle) exitWith {};
    private _sightEvent = _newVehicle getVariable "ITC_Land_SightEvent";
    if (isNil "_sightEvent") exitWith {};

    //Restore sight display
    [_sightEvent, []] call CBA_fnc_localEvent;
}, true] call CBA_fnc_addPlayerEventHandler;


// Adds actions to pack tarantulas.
_action = ["PackTarantulaB", "Repack Tarantula", "", {[_target,_player] call SR_UAV_fnc_Pack}, {true}] call ace_interact_menu_fnc_createAction;
["SR_B_Tarantula_Sentry", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
_action = ["PackTarantulaO", "Repack Tarantula", "", {[_target,_player] call SR_UAV_fnc_Pack}, {true}] call ace_interact_menu_fnc_createAction;
["SR_O_Tarantula_Sentry", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
_action = ["PackTarantulaI", "Repack Tarantula", "", {[_target,_player] call SR_UAV_fnc_Pack}, {true}] call ace_interact_menu_fnc_createAction;
["SR_I_Tarantula_Sentry", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
