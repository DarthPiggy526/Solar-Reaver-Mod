/*
Function: arca_aircraft_fnc_canService

Description:
    Checks whether given aircraft can be serviced by player.

Arguments:
    _target - Aircraft
    _player - The player to check for
    _actionParams - Unused

Return Value:
    canService?

Example:
    (begin example)
        [LAAT2, player] call arca_aircraft_fnc_canService;
    (end)

Author:
    Mokka
*/
#define SEARCH_RADIUS 15
#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})

params ["_target", "_player", ["_actionParams", []]];

private _canService = {
    private _canServiceVar = _x getVariable ["arca_aircraft_canService", false];
    private _canServiceCfg = GET_NUMBER(configFile >> "CfgVehicles" >> (typeOf _x) >> "arca_aircraft_canService", 0) isEqualTo 1;

    ((alive _x) && {_canServiceVar || _canServiceCfg})
} count (_target nearObjects SEARCH_RADIUS);

((_canService > 0) && {(_player getVariable ["ACE_isEngineer",0]) isEqualTo 2})