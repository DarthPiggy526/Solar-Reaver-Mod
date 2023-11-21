/*
	Author: Waagheur

	Description:
		Checks if the player is carrying a recorded grav weapon.
		If so activates the FiredMan event handler to handle its slow
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
	_grenades = [
		"SR_Mag_Rad_Grenade",
		"SR_Mag_Stasis_Grenade",
		"SR_Mag_Tanglefoot_Grenade",
		"SR_Mag_Antigrav_Grenade",
		"SR_Mag_Vortex_Grenade"
	];
	*/

	if ("SR_Mag_Rad_Grenade" in (magazines player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_Rad_Grenade"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Mag_Rad_Grenade"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				
				_weapon = (_this select 1);
				if (_weapon == "Throw") then {
					_projectile = (_this select 6);
					if ((_this select 4) == "SR_Ammo_Rad_Grenade") then {
					
						// Add rad tick to hit targets
						_projectile addEventHandler ["HitExplosion", {
							// params ["_projectile", "_hitEntity", "_projectileOwner", "_hitSelections"];
							
							[_this select 1] spawn {
								// RAD DAMAGE FOR ACE AND VANILLA
								_i = 24;
								while {_i > 0} do {
									if ("ace_medical_engine" in activatedAddons) then {
										[(_this select 0), 0.5, "Body", "unknown"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
									}
									else {
										(_this select 0) setDamage ((damage (_this select 0)) + 0.1);
									};
									sleep 5;
									_i = _i - 1;
								};
								
							};
							
						}];
						
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_Rad_Grenade"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Mag_Rad_Grenade"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Mag_Rad_Grenade"], -1];
		};
	};
	
	if ("SR_Mag_Stasis_Grenade" in (magazines player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_Stasis_Grenade"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Mag_Stasis_Grenade"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "Throw") then {
					_projectile = (_this select 6);
					if ((_this select 4) == "SR_Ammo_Stasis_Grenade") then {
					
						// Generate stasis zone after some time
						[_projectile] spawn {
							
							sleep 5;
							_i = 20;
							while {_i > 0} do {
								
								_targ = getPos (_this select 0);
								_targs = (nearestObjects [_targ, ["AllVehicles"], 12]);
								{
									
									[_x, _i] spawn {
										
										[(_this select 0), false] remoteExec ["allowDamage", 0];
										
										_watch = createVehicle["Item_ItemWatch", (getPos (_this select 0)), [], 0, "CAN_COLLIDE"];
										_watch hideObjectGlobal true;
										_temp = getDir (_this select 0);
										(_this select 0) attachTo [_watch];
										(_this select 0) setDir _temp;
										
										sleep (_this select 1) * 3;
										
										[(_this select 0), true] remoteExec ["allowDamage", 0];
										deleteVehicle _watch;
										
									};
									
								}forEach _targs;
								sleep 3;
								_i = _i - 1;
							};
							
						};
						
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_Stasis_Grenade"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Mag_Stasis_Grenade"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Mag_Stasis_Grenade"], -1];
		};
	};
	
	if ("SR_Mag_Tanglefoot_Grenade" in (magazines player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_Tanglefoot_Grenade"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Mag_Tanglefoot_Grenade"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "Throw") then {
					_projectile = (_this select 6);
					if ((_this select 4) == "SR_Ammo_Tanglefoot_Grenade") then {
					
						// Generate slow zone after some time
						[_projectile] spawn {
							sleep 5;
							_i = 15;
							while {_i > 0} do {
								_targ = getPos (_this select 0);
								_targs = (nearestObjects [_targ, ["AllVehicles"], 12]);
								{
									[_x] spawn {
										if (!((_this select 0) iskindof "Man")) then {
											vel = (velocityModelSpace (_this select 0));
											(_this select 0) setVelocityModelSpace [(vel select 0) * 0.33, (vel select 1) * 0.33, (vel select 2) * 0.33];
										};
										
										[(_this select 0), ((getAnimSpeedCoef (_this select 0)) * 0.5)] remoteExec ["setAnimSpeedCoef", 0];
										
										sleep 10;
										
										[(_this select 0), ((getAnimSpeedCoef (_this select 0)) * 2)] remoteExec ["setAnimSpeedCoef", 0];
									};
								}forEach _targs;
								sleep 2;
								_i = _i - 1;
							};
						};
						
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_Tanglefoot_Grenade"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Mag_Tanglefoot_Grenade"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Mag_Tanglefoot_Grenade"], -1];
		};
	};
	
	if ("SR_Mag_Antigrav_Grenade" in (magazines player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_Antigrav_Grenade"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Mag_Antigrav_Grenade"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "Throw") then {
					_projectile = (_this select 6);
					if ((_this select 4) == "SR_Ammo_Antigrav_Grenade") then {
					
						// Generate antigrav zone after some time
						[_projectile] spawn {
							
							sleep 5;
							
							_i = 10;
							while {_i > 0} do {
								
								_targ = getPos (_this select 0);
								_targs = (nearestObjects [_targ, ["AllVehicles"], 12]);
								{
									
									[_x, _i] spawn {
										
										_watch = createVehicle["Item_ItemWatch", (getPos (_this select 0)), [], 0, "CAN_COLLIDE"];
										_watch hideObjectGlobal true;
										_temp = getDir (_this select 0);
										(_this select 0) attachTo [_watch];
										(_this select 0) setDir _temp;
										
										_eh = addMissionEventHandler ["EachFrame", {
											(_thisArgs select 0) setPosASL ((getPosASL (_thisArgs select 0)) vectorAdd [0,0,0.005]);
										},[_watch]];
										
										sleep 5;
										
										removeMissionEventHandler ["EachFrame", _eh];
										deleteVehicle _watch;
										
									};
									
								}forEach _targs;
								sleep 3;
								_i = _i - 1;
							
							};
							
						};
						
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_Antigrav_Grenade"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Mag_Antigrav_Grenade"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Mag_Antigrav_Grenade"], -1];
		};
	};
	
	if ("SR_Mag_Vortex_Grenade" in (magazines player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_Vortex_Grenade"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Mag_Vortex_Grenade"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "Throw") then {
					_projectile = (_this select 6);
					if ((_this select 4) == "SR_Ammo_Vortex_Grenade") then {
					
						// Generate Vortex after some time
						// Creates a gravity hole on rayend
						[_projectile] spawn {
							sleep 7.5;
							_targ = getPos (_this select 0);
							_targs = (nearestObjects [_targ, ["AllVehicles"], 20]);
							[_targ, _targs] spawn{
								sleep 0.5;
								_targ = (_this select 0);
								_targs = (_this select 1);
								_i = 60;
								while {_i > 0} do {
									_targs = (nearestObjects [_targ, ["AllVehicles"], 20]);
									{
										_vectdir = (getPosASL _x) vectorFromTo (AGLtoASL _targ);
										if ((getMass _x) == 0) then {
											[_x,[_vectdir vectorMultiply 1000*(1), [0,0,0]]] remoteExec ["addForce",0];
										}
										else{
											[_x,[_vectdir vectorMultiply 1000*(getMass _x)/250, [0,0,0]]] remoteExec ["addForce",0];
										};
										_x setUnconscious false;
									}forEach _targs;
									sleep 0.2;
									_i = _i - 1;
								};
								_targs = (nearestObjects [_targ, ["AllVehicles"], 20]); 
								{
									_vectdir = (AGLtoASL _targ) vectorFromTo (getPosASL _x);
									if ((getMass _x) == 0) then {
										[_x,[_vectdir vectorMultiply 100000*(1), [0,0,0]]] remoteExec ["addForce",0];
									}
									else{
										[_x,[_vectdir vectorMultiply 100000*(getMass _x)/250, [0,0,0]]] remoteExec ["addForce",0];
									};
									if (_x isKindOf "Man") then {
										if ("ace_medical_engine" in activatedAddons) then {
											[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
											[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
											[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
											[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
											[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
											[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
											[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
											[_x, 3, "Body", "punch"] remoteExec ["ace_medical_fnc_addDamageToUnit",0];
										}
										else {
											_x setDamage 1;
										};
									};
									sleep 0.1;
								}forEach _targs;
							};
						};
						
					};
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Mag_Vortex_Grenade"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Mag_Vortex_Grenade"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Mag_Vortex_Grenade"], -1];
		};
	};
	
};