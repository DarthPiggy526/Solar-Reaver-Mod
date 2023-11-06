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
	_grav_weapons = [
		"SR_Steve_Grav_1"
	];
	*/

	if ("SR_Steve_Grav_1" in (weapons player)) then {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Steve_Grav_1"], -1]) == -1) then {
			missionNamespace setVariable [format ["%1_handler","SR_Steve_Grav_1"], player addEventHandler ["FiredMan", {
				// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
				_weapon = (_this select 1);
				if (_weapon == "SR_Steve_Grav_1") then {
					_projectile = (_this select 6);
					
					// Generic indirect event handler for infantry
					_projectile addEventHandler ["HitExplosion", {
						// params ["_projectile", "_hitEntity", "_projectileOwner", "_hitSelections"];
						[_this select 1] spawn {
							(_this select 0) setAnimSpeedCoef ((getAnimSpeedCoef (_this select 0)) * 0.5);
							
							sleep 15;
							
							(_this select 0) setAnimSpeedCoef ((getAnimSpeedCoef (_this select 0)) * 2);
						};
						
					}];
					
					// Direct event handler for vehicles
					_projectile addEventHandler ["HitPart", {
						// params ["_projectile", "_hitEntity", "_projectileOwner", "_pos", "_velocity", "_normal", "_components", "_radius" ,"_surfaceType"];
						if (!((_this select 1) iskindof "Man")) then {
							vel = (velocityModelSpace (_this select 1));
							(_this select 1) setVelocityModelSpace [(vel select 0) * 0.33, (vel select 1) * 0.33, (vel select 2) * 0.33];
						};
					}];
				};
				
			}]];
		};
	}
	else {
		if ((missionNamespace getVariable [format ["%1_handler","SR_Steve_Grav_1"], -1]) != -1) then {
			player removeEventHandler ["FiredMan", (missionNamespace getVariable [format ["%1_handler","SR_Steve_Grav_1"], -1])];
			missionNamespace setVariable [format ["%1_handler","SR_Steve_Grav_1"], -1];
		};
	};
	
};