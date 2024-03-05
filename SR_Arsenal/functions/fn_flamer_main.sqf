/*
	Author: Waagheur

	Description:
		Checks if the player is carrying a recorded flamer weapon.
		If so activates the FiredMan event handler to handle its fire
		If not removes the FiredMan event handler
		
	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

params [];

if (not(isDedicated)) then {
	
	/**	
	_flamer_weapons = [
		"SR_TIOW_SM_Flamer"
	];
	*/

	if ("SR_TIOW_SM_Flamer" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Flamer"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_TIOW_SM_Flamer"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_TIOW_SM_Flamer") then {
					_projectile = (_this select 6);
					
					deleteVehicle _projectile;
					
					[getPosASL player, player weaponDirection currentWeapon player] spawn {

						_pos = (_this select 0) vectorAdd ((_this select 1) vectorMultiply 5) vectorAdd [0.0, 0.0, 0.5];
						
						private _ps1 = "#particlesource" createVehicleLocal _pos; 
						_ps1 setPosASL _pos;
						_ps1 setParticleParams [ 
						 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 
						 1, 1, [0, 0, 2], [0, 0, 0], 0, 1.275, 1, 0, [4], 
						 [[1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
						 [0.25,1], 1, 1, "", "", _ps1]; 
						
						_ps1 setDropInterval 0.5;
						_ps1 setParticleFire [1, 3, 1];
						
						sleep 0.1;
						
						for "_i" from 0 to 19 do {
							if (!(lineIntersects [_pos, _pos vectorAdd ((_this select 1) vectorMultiply 2), _ps1])
								&& !(terrainIntersect [_pos, _pos vectorAdd ((_this select 1) vectorMultiply 2)])) then {
								_pos = _pos vectorAdd ((_this select 1) vectorMultiply 2);
								_ps1 setPosASL _pos;
							};
							
							_units = allUnits inAreaArray [(getPos _ps1) vectorAdd [0,0,-1], 3, 3, 0, false, 3];
							{
								for "_j" from 0 to 2 do {
									_bodyPart = ["head","body","hand_r","hand_l","leg_r","leg_l"] selectRandomWeighted [0.5,1,1,1,1,1];
									[_x, 0.5, _bodyPart, "burn"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
								};
							} forEach _units;
							sleep 0.5;
						};
						
						deleteVehicle _ps1;
						
					};
					
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Flamer"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_TIOW_SM_Flamer"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_TIOW_SM_Flamer"], -1];
		};
	};
	
};