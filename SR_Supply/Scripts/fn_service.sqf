/*
Function: arca_aircraft_fnc_service
 
Description:
    Services the given aircraft.
 
Arguments:
    _target - Aircraft
	_player - The player servicing
	_actionParams - Unused
 
Return Value:
    None
 
Example:
    (begin example)
        [LAAT2, player] call arca_aircraft_fnc_service;
    (end)
 
Author:
	Mokka
*/
#define SEARCH_RADIUS 15
#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})
 
params ["_target", "_player", ["_actionParams", []]];
 
private _repairOnly = {
	private _repairOnlyVar = _x getVariable ["arca_aircraft_repairOnly", false];
	private _repairOnlyCfg = GET_NUMBER(configFile >> "CfgVehicles" >> (typeOf _x) >> "arca_aircraft_repairOnly", 0) isEqualTo 1;
 
	(_repairOnlyVar || _repairOnlyCfg)
} count (_target nearObjects SEARCH_RADIUS);
 
_repairOnly = _repairOnly > 0;
 
private _serviceTime = [45, 15] select _repairOnly;
 
[_target,false] remoteExec ["engineOn",_target];
 
["Starting Vehicle Service!"] call ace_common_fnc_displayTextStructured;
 
[
	_serviceTime,
	[_target, _player, _repairOnly],
	{
		params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
		_args params ["_target", "_player", "_repairOnly"];
 
		[_player, _target] call ace_repair_fnc_doFullRepair;
 
		if (!_repairOnly) then {
			[objNull, _target] call ace_rearm_fnc_rearmEntireVehicleSuccess;
			["ace_common_setFuel", [_target, 1], _target] call CBA_fnc_targetEvent;
		};
 
		["Vehicle Service Complete!",2] call ace_common_fnc_displayTextStructured;

		private _canService = {
			private _canServiceVar = _x getVariable ["arca_aircraft_canService", false];
			private _canServiceCfg = GET_NUMBER(configFile >> "CfgVehicles" >> (typeOf _x) >> "arca_aircraft_canService", 0) isEqualTo 1;
			
			if ((alive _x) && {_canServiceVar || _canServiceCfg}) then {deleteVehicle _x;};
			} count (_target nearObjects SEARCH_RADIUS);
	},
	{
		["Vehicle Service Aborted!"] call ace_common_fnc_displayTextStructured;
	},
	"Servicing Vehicle...",
	{
		params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
		_args params ["_target", "_player", "_repairOnly"];
 
		if (isEngineOn _target) then {
			[_target,false] remoteExec ["engineOn",_target];
			["Please keep engine turned Off!"] call ace_common_fnc_displayTextStructured;
		};
 
		true
	}
] call ACE_common_fnc_progressBar;