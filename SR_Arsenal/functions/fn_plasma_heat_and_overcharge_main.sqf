/*
	Author: Waagheur

	Description:
		Checks if the player is carrying a recorded plasma weapon.
		If so activates the FiredMan event handler to handle its overcharge and heat aswell as a heat display and reduction loop
		If not removes the FiredMan event handler (the heat display and reduction loop will remove itself)
		
	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

params [];

if (not(isDedicated)) then {
	
	/**	
	_plasma_weapons = [
		"SR_Master_Crafted_Ragefire_PlasmaGun_1", 
		"SR_Ragefire_Plasma_Gun",
		"SR_Ryza_Plasma_Gun_01", 
		"SR_Ryza_Plasma_Gun_02", 
		"SR_Ryza_Plasma_Gun_03", 
		"SR_Ryza_Plasma_Gun_04", 
		"TIOW_SM_Combi_Bolter_1", 
		"TIOW_SM_Combi_Bolter_2", 
		"TIOW_SM_Combi_Bolter_3",
		"STEVE_TigComb_Plasma_1"
	];

	if ("TIOW_Dos_SSW" in activatedAddons) then {
		_plasma_weapons = _plasma_weapons + [
			"SR_Relic_Plasma_Gun_1",
			"SR_Relic_Plasma_Gun_2",
			"SR_Relic_Plasma_Gun_3",
			"SR_Relic_Plasma_Gun_4",
			"SR_Relic_Plasma_Gun_5"
		];
	};
	
	if ("AVPack" in activatedAddons) then {
		_plasma_weapons = _plasma_weapons + [
			"SR_AV_RagefirePlasmaGun",
			"SR_AV_RagefirePlasmaGun_Relic"
		];
	}

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
	*/

	if ("SR_Master_Crafted_Ragefire_PlasmaGun_1" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Master_Crafted_Ragefire_PlasmaGun_1"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Master_Crafted_Ragefire_PlasmaGun_1"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Master_Crafted_Ragefire_PlasmaGun_1") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Master_Crafted_Ragefire_PlasmaGun_1' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Master_Crafted_Ragefire_PlasmaGun_1"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Master_Crafted_Ragefire_PlasmaGun_1" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Master_Crafted_Ragefire_PlasmaGun_1" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Master_Crafted_Ragefire_PlasmaGun_1" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"],0]) > 0) then {
							_text =
								"[TSR] [Master Crafted] Ragefire Plasmagun" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Master_Crafted_Ragefire_PlasmaGun_1"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Master_Crafted_Ragefire_PlasmaGun_1"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Master_Crafted_Ragefire_PlasmaGun_1"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Master_Crafted_Ragefire_PlasmaGun_1"], -1];
		};
	};
	
	if ("SR_Ragefire_Plasma_Gun" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ragefire_Plasma_Gun"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Ragefire_Plasma_Gun"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Ragefire_Plasma_Gun") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Ragefire_Plasma_Gun' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Ragefire_Plasma_Gun"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ragefire_Plasma_Gun" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ragefire_Plasma_Gun" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Ragefire_Plasma_Gun" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"],0]) > 0) then {
							_text =
								"[TSR] Ragefire Plasma Gun" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Ragefire_Plasma_Gun"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ragefire_Plasma_Gun"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Ragefire_Plasma_Gun"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Ragefire_Plasma_Gun"], -1];
		};
	};
    
	
	
	// DOS PLASMA GUNS
	
	if ("tiow_dos_ssw" in activatedAddons) then {
		
    if ("SR_Relic_Plasma_Gun_1" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_1"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Relic_Plasma_Gun_1"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Relic_Plasma_Gun_1") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Relic_Plasma_Gun_1' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_1"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_1" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_1" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Relic_Plasma_Gun_1" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"],0]) > 0) then {
							_text =
								"[TSR] Relic Plasmagun (Purple)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_1"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_1"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_1"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Relic_Plasma_Gun_1"], -1];
		};
	};
    
    if ("SR_Relic_Plasma_Gun_2" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_2"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Relic_Plasma_Gun_2"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Relic_Plasma_Gun_2") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Relic_Plasma_Gun_2' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_2"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_2" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_2" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Relic_Plasma_Gun_2" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"],0]) > 0) then {
							_text =
								"[TSR] Relic Plasmagun (Orange)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_2"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_2"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_2"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Relic_Plasma_Gun_2"], -1];
		};
	};
    
    if ("SR_Relic_Plasma_Gun_3" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_3"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Relic_Plasma_Gun_3"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Relic_Plasma_Gun_3") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Relic_Plasma_Gun_3' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_3"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_3" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_3" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Relic_Plasma_Gun_3" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"],0]) > 0) then {
							_text =
								"[TSR] Relic Plasmagun (Blue)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_3"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_3"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_3"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Relic_Plasma_Gun_3"], -1];
		};
	};
    
    if ("SR_Relic_Plasma_Gun_4" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_4"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Relic_Plasma_Gun_4"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Relic_Plasma_Gun_4") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Relic_Plasma_Gun_4' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_4"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_4" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_4" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Relic_Plasma_Gun_4" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"],0]) > 0) then {
							_text =
								"[TSR] Relic Plasmagun (Green)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_4"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_4"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_4"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Relic_Plasma_Gun_4"], -1];
		};
	};
    
    if ("SR_Relic_Plasma_Gun_5" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_5"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Relic_Plasma_Gun_5"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Relic_Plasma_Gun_5") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Relic_Plasma_Gun_5' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_5"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_5" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_5" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Relic_Plasma_Gun_5" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"],0]) > 0) then {
							_text =
								"[TSR] Relic Plasmagun (Red)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Relic_Plasma_Gun_5"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_5"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Relic_Plasma_Gun_5"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Relic_Plasma_Gun_5"], -1];
		};
	};
	
	};
	
	
	
	// AV PLASMA GUNS
	
	if ("avpack" in activatedAddons) then {
		
	if ("SR_AV_RagefirePlasmaGun" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_AV_RagefirePlasmaGun") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"], 
								(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"], 
								(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"], 
							(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_AV_RagefirePlasmaGun' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_5" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"], 
							(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_AV_RagefirePlasmaGun" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_AV_RagefirePlasmaGun" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"],0]) > 0) then {
							_text =
								"[TSR] Relic Plasmagun (Red)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun"], -1];
		};
	};
	
	if ("SR_AV_RagefirePlasmaGun_Relic" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun_Relic"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun_Relic"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_AV_RagefirePlasmaGun_Relic") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"], 
								(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"], 
								(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"], 
							(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_AV_RagefirePlasmaGun_Relic' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun_Relic"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Relic_Plasma_Gun_5" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"], 
							(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_AV_RagefirePlasmaGun_Relic" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_AV_RagefirePlasmaGun_Relic" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"],0]) > 0) then {
							_text =
								"[TSR] Relic Plasmagun (Red)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_AV_RagefirePlasmaGun_Relic"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun_Relic"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun_Relic"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_AV_RagefirePlasmaGun_Relic"], -1];
		};
	};
	
	};
	
	
	
	if ("SR_Ryza_Plasma_Gun_01" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_01"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_01"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Ryza_Plasma_Gun_01") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Ryza_Plasma_Gun_01' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_01"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Gun_01" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Gun_01" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Ryza_Plasma_Gun_01" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"],0]) > 0) then {
							_text =
								"[TSR] Ryza Thunderbolt Plasmagun (Black)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_01"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_01"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_01"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_01"], -1];
		};
	};
    
    if ("SR_Ryza_Plasma_Gun_02" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_02"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_02"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Ryza_Plasma_Gun_02") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Ryza_Plasma_Gun_02' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_02"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Gun_02" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Gun_02" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Ryza_Plasma_Gun_02" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"],0]) > 0) then {
							_text =
								"[TSR] Ryza Thunderbolt Plasmagun (Red)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_02"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_02"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_02"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_02"], -1];
		};
	};
    
    if ("SR_Ryza_Plasma_Gun_03" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_03"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_03"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Ryza_Plasma_Gun_03") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Ryza_Plasma_Gun_03' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_03"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Gun_03" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Gun_03" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Ryza_Plasma_Gun_03" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"],0]) > 0) then {
							_text =
								"[TSR] Ryza Thunderbolt Plasmagun (White)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_03"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_03"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_03"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_03"], -1];
		};
	};
    
    if ("SR_Ryza_Plasma_Gun_04" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_04"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_04"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Ryza_Plasma_Gun_04") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [_weapon, _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Ryza_Plasma_Gun_04' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_04"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Gun_04" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Gun_04" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Ryza_Plasma_Gun_04" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"],0]) > 0) then {
							_text =
								"[TSR] Ryza Thunderbolt Plasmagun (Stripes)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Gun_04"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_04"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_04"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Gun_04"], -1];
		};
	};
	
	if ("SR_Combi_Bolter_1" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_1"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Combi_Bolter_1"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if ((_this select 2) == "TIOW_SM_Under_Plas_1") then {
					_ammo = player ammo (_this select 2);
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [(_this select 2), _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_1"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_1"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_1"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_1"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_1"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_1"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_1"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'TIOW_SM_Under_Plas_1' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_1"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_1"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_1"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Combi_Bolter_1" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_1"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_1"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Combi_Bolter_1" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_1"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Combi_Bolter_1" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_1"],0]) > 0) then {
							_text =
								"[TSR] Bolter Combi-Plasma (Black)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_1"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_1"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_1"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Combi_Bolter_1"], -1];
		};
	};
	
	if ("SR_Combi_Bolter_2" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_2"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Combi_Bolter_2"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if ((_this select 2) == "TIOW_SM_Under_Plas_1") then {
					_ammo = player ammo (_this select 2);
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [(_this select 2), _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_2"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_2"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_2"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_2"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_2"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_2"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_2"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'TIOW_SM_Under_Plas_1' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_2"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_2"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_2"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Combi_Bolter_2" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_2"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_2"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Combi_Bolter_2" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_2"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Combi_Bolter_2" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_2"],0]) > 0) then {
							_text =
								"[TSR] Bolter Combi-Plasma (Red)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_2"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_2"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_2"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Combi_Bolter_2"], -1];
		};
	};
	
	if ("SR_Combi_Bolter_3" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_3"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Combi_Bolter_3"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if ((_this select 2) == "TIOW_SM_Under_Plas_1") then {
					_ammo = player ammo (_this select 2);
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [(_this select 2), _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_3"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_3"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_3"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_3"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_3"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_3"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_3"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'TIOW_SM_Under_Plas_1' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_3"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_3"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_3"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Combi_Bolter_3" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_3"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_3"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Combi_Bolter_3" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Combi_Bolter_3"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Combi_Bolter_3" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_3"],0]) > 0) then {
							_text =
								"[TSR] Bolter Combi-Plasma (White)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Combi_Bolter_3"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_3"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Combi_Bolter_3"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Combi_Bolter_3"], -1];
		};
	};
	
	if ("SR_Tig_Combi_Bolter" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Tig_Combi_Bolter"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Tig_Combi_Bolter"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if ((_this select 2) == "Steve_30k_Under_Plasma") then {
					_ammo = player ammo (_this select 2);
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 10 shots
						if (_ammo > 8) then {
							player setAmmo [(_this select 2), _ammo - 9];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Tig_Combi_Bolter"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Tig_Combi_Bolter"],0]) 
								+ ([30, 50] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Tig_Combi_Bolter"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Tig_Combi_Bolter"],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Tig_Combi_Bolter"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Tig_Combi_Bolter"],0]) 
							+ ([2, 5] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Tig_Combi_Bolter"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'Steve_30k_Under_Plasma' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Tig_Combi_Bolter"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Tig_Combi_Bolter"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Tig_Combi_Bolter"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Tig_Combi_Bolter" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Tig_Combi_Bolter"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Tig_Combi_Bolter"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Tig_Combi_Bolter" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Tig_Combi_Bolter"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Tig_Combi_Bolter" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Tig_Combi_Bolter"],0]) > 0) then {
							_text =
								"[TSR] Tigrus Pattern Combi-Plasma" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Tig_Combi_Bolter"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Tig_Combi_Bolter"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Tig_Combi_Bolter"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Tig_Combi_Bolter"], -1];
		};
	};
	
	if ("SR_Ryza_Plasma_Pistol" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				
				if (_weapon == "SR_Ryza_Plasma_Pistol") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 7 shots
						if (_ammo > 5) then {
							player setAmmo [_weapon, _ammo - 6];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmapistolRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"],0]) 
								+ ([40, 60] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"],0]) 
								+ ([4, 8] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"],0]) 
							+ ([4, 8] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Ryza_Plasma_Pistol' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Pistol" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Pistol" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Ryza_Plasma_Pistol" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"],0]) > 0) then {
							_text =
								"[TSR] Ryza Plasma Pistol (Shield)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol"], -1];
		};
	};
    
    if ("SR_Ryza_Plasma_Pistol_Banner" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol_Banner"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol_Banner"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				
				if (_weapon == "SR_Ryza_Plasma_Pistol_Banner") then {
					_ammo = player ammo _weapon;
					_projectile = (_this select 6);
					_mode = (_this select 3);
					if (_mode == "Overcharge") then {
						
						//Overcharge consummes 7 shots
						if (_ammo > 5) then {
							player setAmmo [_weapon, _ammo - 6];
							
							_position = getPosWorld _projectile;
							_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
							_velocity = velocity _projectile;
							
							deleteVehicle _projectile;
							
							_projectile = "SR_Overcharge_PlasmapistolRound" createVehicle [0,0,0];
							_projectile setPosWorld _position;
							_projectile setVectorDirAndUp _dirAndUp;
							_projectile setVelocityModelSpace [0, 1140, 0];
							
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"],0]) 
								+ ([40, 60] call BIS_fnc_randomInt)];
							
						}
						else { // Not enough ammo for overcharge, fire normally
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"], 
								(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"],0]) 
								+ ([4, 8] call BIS_fnc_randomInt)];
						};
					}
					else {
						// Regular shot, increase heat
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"],0]) 
							+ ([4, 8] call BIS_fnc_randomInt)];
					};
					
					// Check for overheat
					if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"],0]) > 100) then {
						[] spawn {
							overheat = player addAction ["Weapon lock on", 
								{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
								"'SR_Ryza_Plasma_Pistol_Banner' == (currentMuzzle player)"];
							while {(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"],0]) > 0} do {
								sleep 1;
							};
							player removeAction overheat;
						};
					};
				};
				
			}]];
			
			// Spawn cooler
			[] spawn {
				while {(missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol_Banner"], -1]) != -1} do {
					// Reduce heat if possible
					if (((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Pistol_Banner" >> "plasmaCoolingMult")) > 0) then {
						missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"], 
							(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"],0]) 
							- 2 * getNumber (configFile >> "CfgWeapons" >> "SR_Ryza_Plasma_Pistol_Banner" >> "plasmaCoolingMult")];
					}
					else {
						(missionNamespace setVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"],0])
					};
					
					// Display new heat if weapon is the current weapon
					if ("SR_Ryza_Plasma_Pistol_Banner" == (currentWeapon player)) then {
						if ((missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"],0]) > 0) then {
							_text =
								"[TSR] Ryza Plasma Pistol (Banner)" 
								+ "<br/>"
								+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat","SR_Ryza_Plasma_Pistol_Banner"],0]);
							10 cutText [
								format["<t align='right'>%1</t>",_text], 
							"PLAIN", 0, false, true];
						};
					};
					sleep 2;
				};
			};
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol_Banner"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol_Banner"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Ryza_Plasma_Pistol_Banner"], -1];
		};
	};
	
    
    
    
    
	/**
	Pseudo version of the system,
	Doesn't work because _x cannot be injected in the event handlers
	
	{
		if (_x in (weapons player)) then {
			if ((missionNamespace getVariable [format ["%1_handler",_x], -1]) == -1) then {
				missionNamespace setVariable [format ["%1_handler",_x], player addEventHandler ["FiredMan", {
					// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
					_weapon = (_this select 1);
					if (_weapon == _x) then {
						_ammo = player ammo _weapon;
						_projectile = (_this select 6);
						_mode = (_this select 3);
						if (_mode == "Overcharge") then {
							
							//Overcharge consummes 10 shots
							if (_ammo > 8) then {
								player setAmmo [_weapon, _ammo - 9];
								
								_position = getPosWorld _projectile;
								_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
								_velocity = velocity _projectile;
								
								deleteVehicle _projectile;
								
								_projectile = "SR_Overcharge_PlasmagunRound" createVehicle [0,0,0];
								_projectile setPosWorld _position;
								_projectile setVectorDirAndUp _dirAndUp;
								_projectile setVelocityModelSpace [0, 1140, 0];
								
								missionNamespace setVariable [format ["%1_heat",_x], 
									(missionNamespace getVariable [format ["%1_heat",_x],0]) 
									+ ([30, 50] call BIS_fnc_randomInt)];
								
							}
							else { // Not enough ammo for overcharge, fire normally
								// Regular shot, increase heat
								missionNamespace setVariable [format ["%1_heat",_x], 
									(missionNamespace getVariable [format ["%1_heat",_x],0]) 
									+ ([2, 5] call BIS_fnc_randomInt)];
							};
						}
						else {
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat",_x], 
								(missionNamespace getVariable [format ["%1_heat",_x],0]) 
								+ ([2, 5] call BIS_fnc_randomInt)];
						};
						
						// Check for overheat
						if ((missionNamespace getVariable [format ["%1_heat",_x],0]) > 100) then {
							[] spawn {
								overheat = player addAction ["Weapon lock on", 
									{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
									"'_x' == (currentMuzzle player)"];
								while {(missionNamespace getVariable [format ["%1_heat","_x"],0]) > 0} do {
									sleep 1;
								};
								player removeAction overheat;
							};
						};
					};
					
				}]];
				
				// Spawn cooler
				[_x] spawn {
					_x = (_this select 0);
					while {(missionNamespace getVariable [format ["%1_handler",_x], -1]) != -1} do {
						// Reduce heat if possible
						if (((missionNamespace getVariable [format ["%1_heat",_x],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> _x >> "plasmaCoolingMult")) > 0) then {
							missionNamespace setVariable [format ["%1_heat",_x], 
								(missionNamespace getVariable [format ["%1_heat",_x],0]) 
								- 2 * getNumber (configFile >> "CfgWeapons" >> _x >> "plasmaCoolingMult")];
						}
						else {
							(missionNamespace setVariable [format ["%1_heat",_x],0])
						};
						
						// Display new heat if weapon is the current weapon
						if (_x == (currentWeapon player)) then {
							if ((missionNamespace getVariable [format ["%1_heat",_x],0]) > 0) then {
								_text =
									_x 
									+ "<br/>"
									+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat",_x],0]);
								10 cutText [
									format["<t align='right'>%1</t>",_text], 
								"PLAIN", 0, false, true];
							};
						};
						sleep 2;
					};
				};
			};
		}
		else {
			if ((missionNamespace getVariable [format ["%1_handler",_x], -1]) != -1) then {
				player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler",_x], -1])];
				missionNamespace setVariable [format ["%1_handler",_x], -1];
			};
		}
	} forEach _plasma_weapons;
	
	{
		if (_x in (weapons player)) then {
			if ((missionNamespace getVariable [format ["%1_handler",_x], -1]) == -1) then {
				missionNamespace setVariable [format ["%1_handler",_x], player addEventHandler ["FiredMan", {
					// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
					_weapon = (_this select 1);
					
					if (_weapon == _x) then {
						_ammo = player ammo _weapon;
						_projectile = (_this select 6);
						_mode = (_this select 3);
						if (_mode == "Overcharge") then {
							
							//Overcharge consummes 7 shots
							if (_ammo > 5) then {
								player setAmmo [_weapon, _ammo - 6];
								
								_position = getPosWorld _projectile;
								_dirAndUp = [vectorDir _projectile, vectorUp _projectile];
								_velocity = velocity _projectile;
								
								deleteVehicle _projectile;
								
								_projectile = "SR_Overcharge_PlasmapistolRound" createVehicle [0,0,0];
								_projectile setPosWorld _position;
								_projectile setVectorDirAndUp _dirAndUp;
								_projectile setVelocityModelSpace [0, 1140, 0];
								
								missionNamespace setVariable [format ["%1_heat",_x], 
									(missionNamespace getVariable [format ["%1_heat",_x],0]) 
									+ ([40, 60] call BIS_fnc_randomInt)];
								
							}
							else { // Not enough ammo for overcharge, fire normally
								// Regular shot, increase heat
								missionNamespace setVariable [format ["%1_heat",_x], 
									(missionNamespace getVariable [format ["%1_heat",_x],0]) 
									+ ([4, 8] call BIS_fnc_randomInt)];
							};
						}
						else {
							// Regular shot, increase heat
							missionNamespace setVariable [format ["%1_heat",_x], 
								(missionNamespace getVariable [format ["%1_heat",_x],0]) 
								+ ([4, 8] call BIS_fnc_randomInt)];
						};
						
						// Check for overheat
						if ((missionNamespace getVariable [format ["%1_heat",_x],0]) > 100) then {
							[] spawn {
								overheat = player addAction ["Weapon lock on", 
									{hintSilent "Weapon overheating";}, [], 0, false, false, "DefaultAction", 
									"'_x' == (currentMuzzle player)"];
								while {(missionNamespace getVariable [format ["%1_heat","_x"],0]) > 0} do {
									sleep 1;
								};
								player removeAction overheat;
							};
						};
					};
					
				}]];
				
				// Spawn cooler
				[_x] spawn {
					_x = (_this select 0);
					while {(missionNamespace getVariable [format ["%1_handler",_x], -1]) != -1} do {
						// Reduce heat if possible
						if (((missionNamespace getVariable [format ["%1_heat",_x],0]) - 2 * getNumber (configFile >> "CfgWeapons" >> _x >> "plasmaCoolingMult")) > 0) then {
							missionNamespace setVariable [format ["%1_heat",_x], 
								(missionNamespace getVariable [format ["%1_heat",_x],0]) 
								- 2 * getNumber (configFile >> "CfgWeapons" >> _x >> "plasmaCoolingMult")];
						}
						else {
							(missionNamespace setVariable [format ["%1_heat",_x],0])
						};
						
						// Display new heat if weapon is the current weapon
						if (_x == (currentWeapon player)) then {
							if ((missionNamespace getVariable [format ["%1_heat",_x],0]) > 0) then {
								_text =
									_x 
									+ "<br/>"
									+ "Current heat : " + str(missionNamespace getVariable [format ["%1_heat",_x],0]);
								10 cutText [
									format["<t align='right'>%1</t>",_text], 
								"PLAIN", 0, false, true];
							};
						};
						sleep 2;
					};
				};
			};
		}
		else {
			if ((missionNamespace getVariable [format ["%1_handler",_x], -1]) != -1) then {
				player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler",_x], -1])];
				missionNamespace setVariable [format ["%1_handler",_x], -1];
			};
		}
	} forEach _plasma_pistol_weapons;
	
	*/
};