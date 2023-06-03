/*
	Author: Waagheur

	Description:
		Adds a Fired event handler if the player is holding a master crafter ragefire plasma gun
		The Fired event handler counts the bullets fired in Burst mode with an SR mastercrafted ragefire plasma gun, after the last bullet, the magazine is emptied
		After a bit of time, if the magazine is empty, it reloads it to former levels, if it is not, it adds it to inventory

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

params [];

if (not(isDedicated)) then {
	if (((currentWeapon player) == "SR_Master_Crafted_Ragefire_PlasmaGun_1") and (SR_Arsenal_Ragefire_Take_Handler == -1)) then {
		SR_Arsenal_Ragefire_Take_Handler = player addEventHandler ["FiredMan", {
			// params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
			_weapon = (_this select 1);
			_mode = (_this select 3);
			_magazine = (_this select 5);
			
			if ((_weapon == "SR_Master_Crafted_Ragefire_PlasmaGun_1") and (_mode == "Burst")) then {
				if (SR_Arsenal_Ragefire_Clock >= 2) then {
					_ammo = player ammo _weapon;
					
					player setAmmo [_weapon, 0];
					
					[_ammo, _magazine] spawn {
						sleep 1.5;
						
						_weapon = currentWeapon player;
						if ((_weapon == "SR_Master_Crafted_Ragefire_PlasmaGun_1") and ((player ammo _weapon) == 0) and ((currentMagazine player) == (_this select 1))) then {
							player setAmmo [_weapon, (_this select 0)];
						}
						else {
							player addMagazine [(_this select 1), (_this select 0)];
						};
					};
					
					SR_Arsenal_Ragefire_Clock = 0;
				}
				else {
					SR_Arsenal_Ragefire_Clock = SR_Arsenal_Ragefire_Clock + 1;
				};
				
				//If we emptied the mag, reset the clock
				_ammo = player ammo _weapon;
				if (_ammo == 0) then {
					SR_Arsenal_Ragefire_Clock = 0;
				};
			};
		}];
	}
	else {
		SR_Arsenal_Ragefire_Take_Handler = -1;
		player removeEventHandler ["FiredMan", SR_Arsenal_Ragefire_Take_Handler];
	};
};