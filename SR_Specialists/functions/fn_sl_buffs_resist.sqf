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
		
		(_this select 0) removeAllEventHandlers "HandleDamage"; 
		(_this select 0) setVariable [ 
            "ace_medical_handledamageehid", 
            (_this select 0) addEventHandler ["HandleDamage", {
				(_this set [2, (_this select 2)*0.5]); 
				_this call ace_medical_engine_fnc_handleDamage
			}] 
        ];
		
		
		
		sleep 60;
		
		
		
		player removeAllEventHandlers "HandleDamage"; 
		player setVariable [ 
            "ace_medical_handledamageehid", 
            player addEventHandler ["HandleDamage", {_this call ace_medical_engine_fnc_handleDamage}] 
        ];
		
	};
	
};