/*
	Author: Waagheur

	Description:		
		Adds a Take event handler and an ace arsenal close event handler to client
		The event handlers check for the player's krak grande count to limit it to 5 (remove any excess)

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

if (not(isDedicated)) then {
	
	_nbKraks = count((magazines player) select {_x == "TIOW_sm_krak_grenade_mag"});
	for "_i" from 6 to _nbKraks do { 
		player removeMagazine "TIOW_sm_krak_grenade_mag"; 
	};
	
	player addEventHandler ["Take", {
		// params ["_unit", "_container", "_item"];
		
		_nbKraks = count((magazines player) select {_x == "TIOW_sm_krak_grenade_mag"});
		for "_i" from 6 to _nbKraks do { 
			player removeMagazine "TIOW_sm_krak_grenade_mag"; 
		};
	}];
	["ace_arsenal_displayClosed", 
		{
			_nbKraks = count((magazines player) select {_x == "TIOW_sm_krak_grenade_mag"});
			for "_i" from 6 to _nbKraks do { 
				player removeMagazine "TIOW_sm_krak_grenade_mag"; 
			};
		}
	] call CBA_fnc_addEventHandler;
	
};