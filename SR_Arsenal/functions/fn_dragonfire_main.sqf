/*
	Author: Waagheur

	Description:
		Checks if the player is carrying a recorded SR dragonfire magazine.
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
	_magazines = [
		"SR_Trig_BoltgunMag_DF",
		"SR_Trig_Exitus_BoltgunMag_DF",
		"SR_Trig_BoltPistolMag_DF",
		"SR_Phob_BoltgunMag_DF",
		"SR_Phob_BoltPistolMag_DF",
		"SR_Phob_CombiBoltgunMag_DF",
		"SR_Phob_Atrox_BoltgunMag_DF"
	];
	*/

	if (("SR_Trig_BoltgunMag_DF" in (magazines player)) or ("SR_Trig_BoltgunMag_DF" in (primaryWeaponMagazine player))) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Trig_BoltgunMag_DF"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Trig_BoltgunMag_DF"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_magazine = (_this select 5);
				if (_magazine == "SR_Trig_BoltgunMag_DF") then {
					_projectile = (_this select 6);
					
					_projectile addEventHandler ["Explode", {
						// params ["_projectile"];
						
						[_this select 0] spawn {
							private _posATL = (_this select 0) modelToWorld [0,0,0]; 
						 
							// Fire 
							private _ps1 = "#particlesource" createVehicleLocal _posATL; 
							_ps1 setParticleParams [ 
							 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 
							 1, 1, [0, 0, 0], [0, 0, 0.5], 0, 2, 1, 3, [0.5, 8], 
							 [[1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
							 [0.25,1], 1, 1, "", "", _ps1]; 
							_ps1 setParticleRandom [0.2, [0.5, 0.5, 0.25], [0.125, 0.125, 0.125], 0.2, 0.2, [0, 0, 0, 0], 0, 0]; 
							_ps1 setDropInterval 0.05;
							_ps1 setParticleFire [40, 2.5, 0.1];
							
							sleep 2;
							
							deleteVehicle _ps1;
						};
						
					}];
					
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Trig_BoltgunMag_DF"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Trig_BoltgunMag_DF"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Trig_BoltgunMag_DF"], -1];
		};
	};
	
	
	
	if (("SR_Trig_Exitus_BoltgunMag_DF" in (magazines player)) or ("SR_Trig_Exitus_BoltgunMag_DF" in (primaryWeaponMagazine player))) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Trig_Exitus_BoltgunMag_DF"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Trig_Exitus_BoltgunMag_DF"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_magazine = (_this select 5);
				if (_magazine == "SR_Trig_Exitus_BoltgunMag_DF") then {
					_projectile = (_this select 6);
					
					_projectile addEventHandler ["Explode", {
						// params ["_projectile"];
						
						[_this select 0] spawn {
							private _posATL = (_this select 0) modelToWorld [0,0,0]; 
						 
							// Fire 
							private _ps1 = "#particlesource" createVehicleLocal _posATL; 
							_ps1 setParticleParams [ 
							 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 
							 1, 1, [0, 0, 0], [0, 0, 0.5], 0, 2, 1, 3, [0.5, 8], 
							 [[1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
							 [0.25,1], 1, 1, "", "", _ps1]; 
							_ps1 setParticleRandom [0.2, [0.5, 0.5, 0.25], [0.125, 0.125, 0.125], 0.2, 0.2, [0, 0, 0, 0], 0, 0]; 
							_ps1 setDropInterval 0.05;
							_ps1 setParticleFire [40, 2.5, 0.1];
							
							sleep 2;
							
							deleteVehicle _ps1;
						};
						
					}];
					
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Trig_Exitus_BoltgunMag_DF"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Trig_Exitus_BoltgunMag_DF"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Trig_Exitus_BoltgunMag_DF"], -1];
		};
	};
	
	
	
	if (("SR_Trig_BoltPistolMag_DF" in (magazines player)) or ("SR_Trig_BoltPistolMag_DF" in (primaryWeaponMagazine player))) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Trig_BoltPistolMag_DF"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Trig_BoltPistolMag_DF"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_magazine = (_this select 5);
				if (_magazine == "SR_Trig_BoltPistolMag_DF") then {
					_projectile = (_this select 6);
					
					_projectile addEventHandler ["Explode", {
						// params ["_projectile"];
						
						[_this select 0] spawn {
							private _posATL = (_this select 0) modelToWorld [0,0,0]; 
						 
							// Fire 
							private _ps1 = "#particlesource" createVehicleLocal _posATL; 
							_ps1 setParticleParams [ 
							 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 
							 1, 1, [0, 0, 0], [0, 0, 0.5], 0, 2, 1, 3, [0.5, 8], 
							 [[1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
							 [0.25,1], 1, 1, "", "", _ps1]; 
							_ps1 setParticleRandom [0.2, [0.5, 0.5, 0.25], [0.125, 0.125, 0.125], 0.2, 0.2, [0, 0, 0, 0], 0, 0]; 
							_ps1 setDropInterval 0.05;
							_ps1 setParticleFire [40, 2.5, 0.1];
							
							sleep 2;
							
							deleteVehicle _ps1;
						};
						
					}];
					
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Trig_BoltPistolMag_DF"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Trig_BoltPistolMag_DF"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Trig_BoltPistolMag_DF"], -1];
		};
	};
	
	
	
	if (("SR_Phob_BoltgunMag_DF" in (magazines player)) or ("SR_Phob_BoltgunMag_DF" in (primaryWeaponMagazine player))) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Phob_BoltgunMag_DF"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Phob_BoltgunMag_DF"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_magazine = (_this select 5);
				if (_magazine == "SR_Phob_BoltgunMag_DF") then {
					_projectile = (_this select 6);
					
					_projectile addEventHandler ["Explode", {
						// params ["_projectile"];
						
						[_this select 0] spawn {
							private _posATL = (_this select 0) modelToWorld [0,0,0]; 
						 
							// Fire 
							private _ps1 = "#particlesource" createVehicleLocal _posATL; 
							_ps1 setParticleParams [ 
							 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 
							 1, 1, [0, 0, 0], [0, 0, 0.5], 0, 2, 1, 3, [0.5, 8], 
							 [[1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
							 [0.25,1], 1, 1, "", "", _ps1]; 
							_ps1 setParticleRandom [0.2, [0.5, 0.5, 0.25], [0.125, 0.125, 0.125], 0.2, 0.2, [0, 0, 0, 0], 0, 0]; 
							_ps1 setDropInterval 0.05;
							_ps1 setParticleFire [40, 2.5, 0.1];
							
							sleep 2;
							
							deleteVehicle _ps1;
						};
						
					}];
					
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Phob_BoltgunMag_DF"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Phob_BoltgunMag_DF"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Phob_BoltgunMag_DF"], -1];
		};
	};
	
	
	
	if (("SR_Phob_BoltPistolMag_DF" in (magazines player)) or ("SR_Phob_BoltPistolMag_DF" in (primaryWeaponMagazine player))) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Phob_BoltPistolMag_DF"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Phob_BoltPistolMag_DF"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_magazine = (_this select 5);
				if (_magazine == "SR_Phob_BoltPistolMag_DF") then {
					_projectile = (_this select 6);
					
					_projectile addEventHandler ["Explode", {
						// params ["_projectile"];
						
						[_this select 0] spawn {
							private _posATL = (_this select 0) modelToWorld [0,0,0]; 
						 
							// Fire 
							private _ps1 = "#particlesource" createVehicleLocal _posATL; 
							_ps1 setParticleParams [ 
							 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 
							 1, 1, [0, 0, 0], [0, 0, 0.5], 0, 2, 1, 3, [0.5, 8], 
							 [[1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
							 [0.25,1], 1, 1, "", "", _ps1]; 
							_ps1 setParticleRandom [0.2, [0.5, 0.5, 0.25], [0.125, 0.125, 0.125], 0.2, 0.2, [0, 0, 0, 0], 0, 0]; 
							_ps1 setDropInterval 0.05;
							_ps1 setParticleFire [40, 2.5, 0.1];
							
							sleep 2;
							
							deleteVehicle _ps1;
						};
						
					}];
					
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Phob_BoltPistolMag_DF"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Phob_BoltPistolMag_DF"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Phob_BoltPistolMag_DF"], -1];
		};
	};
	
	
	
	if (("SR_Phob_CombiBoltgunMag_DF" in (magazines player)) or ("SR_Phob_CombiBoltgunMag_DF" in (primaryWeaponMagazine player))) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Phob_CombiBoltgunMag_DF"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Phob_CombiBoltgunMag_DF"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_magazine = (_this select 5);
				if (_magazine == "SR_Phob_CombiBoltgunMag_DF") then {
					_projectile = (_this select 6);
					
					_projectile addEventHandler ["Explode", {
						// params ["_projectile"];
						
						[_this select 0] spawn {
							private _posATL = (_this select 0) modelToWorld [0,0,0]; 
						 
							// Fire 
							private _ps1 = "#particlesource" createVehicleLocal _posATL; 
							_ps1 setParticleParams [ 
							 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 
							 1, 1, [0, 0, 0], [0, 0, 0.5], 0, 2, 1, 3, [0.5, 8], 
							 [[1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
							 [0.25,1], 1, 1, "", "", _ps1]; 
							_ps1 setParticleRandom [0.2, [0.5, 0.5, 0.25], [0.125, 0.125, 0.125], 0.2, 0.2, [0, 0, 0, 0], 0, 0]; 
							_ps1 setDropInterval 0.05;
							_ps1 setParticleFire [40, 2.5, 0.1];
							
							sleep 2;
							
							deleteVehicle _ps1;
						};
						
					}];
					
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Phob_CombiBoltgunMag_DF"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Phob_CombiBoltgunMag_DF"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Phob_CombiBoltgunMag_DF"], -1];
		};
	};
	
	
	
	if (("SR_Phob_Atrox_BoltgunMag_DF" in (magazines player)) or ("SR_Phob_Atrox_BoltgunMag_DF" in (primaryWeaponMagazine player))) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Phob_Atrox_BoltgunMag_DF"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Phob_Atrox_BoltgunMag_DF"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_magazine = (_this select 5);
				if (_magazine == "SR_Phob_Atrox_BoltgunMag_DF") then {
					_projectile = (_this select 6);
					
					_projectile addEventHandler ["Explode", {
						// params ["_projectile"];
						
						[_this select 0] spawn {
							private _posATL = (_this select 0) modelToWorld [0,0,0]; 
						 
							// Fire 
							private _ps1 = "#particlesource" createVehicleLocal _posATL; 
							_ps1 setParticleParams [ 
							 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 
							 1, 1, [0, 0, 0], [0, 0, 0.5], 0, 2, 1, 3, [0.5, 8], 
							 [[1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
							 [0.25,1], 1, 1, "", "", _ps1]; 
							_ps1 setParticleRandom [0.2, [0.5, 0.5, 0.25], [0.125, 0.125, 0.125], 0.2, 0.2, [0, 0, 0, 0], 0, 0]; 
							_ps1 setDropInterval 0.05;
							_ps1 setParticleFire [40, 2.5, 0.1];
							
							sleep 2;
							
							deleteVehicle _ps1;
						};
						
					}];
					
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Phob_Atrox_BoltgunMag_DF"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Phob_Atrox_BoltgunMag_DF"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Phob_Atrox_BoltgunMag_DF"], -1];
		};
	};
	
};