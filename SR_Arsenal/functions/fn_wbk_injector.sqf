/*
	Author: Waagheur

	Description:
		Injects a script into the SM_Skill_Crozius function from the IMS mod
		This injection should not produce any direct problems in the IMS mod
		However the injected script or the function itself could bug out if there are updates to the signature of the function
		The injected script extends the cooldown of the crozius ability

	Parameter(s):
		None




	Returns:
		Nothing

	Examples:
		
*/

[] spawn {
	
	sleep 10;
	
	
	
	
	// Crozius cooldown inject
	
	
	
	SM_Skill_Crozius_Clone = SM_Skill_Crozius;

	SM_Skill_Crozius = {
	
		_unit = _this;
	
	
	
		if (isNil { _unit getVariable "SM_CanUseSkill"}) then {
			_unit spawn {
				sleep 119;
				systemChat "Ignore the incoming message";
				for "_i" from 0 to 30 do {
					_this setVariable ["SM_CanUseSkill",1];
					sleep 0.1;
				};
				sleep 1678;
				systemChat "You are able to use skill once again";
				_this setVariable ["SM_CanUseSkill",nil];
			};
		};
	
	
	
		_unit spawn SM_Skill_Crozius_Clone;

	};
	
};
