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
		[(_this select 0), ((getAnimSpeedCoef (_this select 0)) * 1.5)] remoteExec ["setAnimSpeedCoef", 0];
		
		sleep 60;
		
		[(_this select 0), ((getAnimSpeedCoef (_this select 0)) * 0.666)] remoteExec ["setAnimSpeedCoef", 0];
	};
	
};