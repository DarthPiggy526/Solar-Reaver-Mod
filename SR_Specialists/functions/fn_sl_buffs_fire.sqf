/*
	Author: Waagheur

	Description:
		

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (hasInterface) then {
	
	[(_this select 0)] spawn {
		(_this select 0) setUnitRecoilCoefficient ((unitRecoilCoefficient (_this select 0)) * 0.25);
		handle = 
			(_this select 0) addEventHandler ["FiredMan", {
				params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
			
				_projectile setVelocity ((velocity _projectile) apply { _x * 1.2 });
				
				_projectile addEventHandler ["HitPart", {
					params ["_projectile", "_hitEntity", "_projectileOwner", "_pos", "_velocity", "_normal", "_components", "_radius" ,"_surfaceType"];
				
					[_hitEntity, 
						(getNumber (configfile >> "CfgAmmo" >> (typeOf _projectile) >> "Hit")) * 0.005
					, "body", "bullet"] call ace_medical_fnc_addDamageToUnit;
				}];
			}];

		sleep 60;
		
		(_this select 0) setUnitRecoilCoefficient ((unitRecoilCoefficient (_this select 0)) * 4);
		player removeEventHandler ["FiredMan", handle];
	};
	
};