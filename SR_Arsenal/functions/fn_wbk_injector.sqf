/*
	Author: Waagheur

	Description:
		Injects scripts into the WBK_CreateDamage and the createDeathS functions from the IMS mod
		This injection should not produce any direct problems in the IMS mod
		However the injected scripts or the functions themselves could bug out if there are updates to the signature of the functions
		The injected scripts set on fire the targets hit with an SR_Magma_Claw
		
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
	
	
	
	// Magma Claw Injects
	
	
	
	WBK_CreateDamage_Clone_SR = WBK_CreateDamage;

	WBK_CreateDamage = {
	
		_unit = _this select 0; 
		_unitToPlay = _unit; 
		_damageApply = _this select 1; 
		_killer = _this select 2;
	
	
	
		[_unit, _damageApply, _killer] spawn WBK_CreateDamage_Clone_SR;
	
	
	
		if ((currentWeapon player) == "SR_Magma_Claw") then {

			[_unit] spawn {
				private _posATL = (_this select 0) modelToWorld [0,0,0]; 
			 
				// Fire 
				private _ps1 = "#particlesource" createVehicleLocal _posATL; 
				_ps1 setParticleParams [ 
				 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 
				 1, 1, [0, 0, 0], [0, 0, 0.5], 0, 1, 1, 3, [0.5,1.5], 
				 [[1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
				 [0.25,1], 1, 1, "", "", _ps1]; 
				_ps1 setParticleRandom [0.2, [0.5, 0.5, 0.25], [0.125, 0.125, 0.125], 0.2, 0.2, [0, 0, 0, 0], 0, 0]; 
				_ps1 setDropInterval 0.05;
				_ps1 setParticleFire [40, 0.5, 0.1]; 
				 
				// Smoke 
				private _ps2 = "#particlesource" createVehicleLocal _posATL; 
				_ps2 setParticleParams [ 
				 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 7, 1, 1], "", "Billboard", 
				 1, 5, [0, 0, 1], [0, 0, 1.5], 0, 1, 1, 0.5, [1.75,2,3,4.5], // timerPeriod → size 
				 [[1,1,1,0], [1,1,1,0.5], [1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
				 [0.5,0.5], 0, 0, "", "", _ps2]; 
				_ps2 setParticleRandom [0.5, [1, 1, 0.4], [0, 0, 0.5], 0, 0.125, [0, 0, 0, 0], rad 30, 0]; 
				_ps2 setDropInterval 0.1; 
				
				_ps1 attachTo [(_this select 0),[0,0,-0.5], "head"];
				_ps2 attachTo [(_this select 0),[0,0,-0.5], "head"];
				
				sleep 2;
				
				deleteVehicle _ps1;
				deleteVehicle _ps2;
			};
		
		};

	};
	
	createDeathS_Clone_SR = createDeathS;

	createDeathS = {
	
		_unit = _this select 0;
		_killer = _this select 1;
	
	
	
		[_unit, _killer] spawn createDeathS_Clone_SR;
	


		if ((currentWeapon player) == "SR_Magma_Claw") then {

			[_unit] spawn {
				private _posATL = (_this select 0) modelToWorld [0,0,0]; 
			 
				// Fire 
				private _ps1 = "#particlesource" createVehicleLocal _posATL; 
				_ps1 setParticleParams [ 
				 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 10, 32], "", "Billboard", 
				 1, 1, [0, 0, 0], [0, 0, 0.5], 0, 1, 1, 3, [0.5,1.5], 
				 [[1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
				 [0.25,1], 1, 1, "", "", _ps1]; 
				_ps1 setParticleRandom [0.2, [0.5, 0.5, 0.25], [0.125, 0.125, 0.125], 0.2, 0.2, [0, 0, 0, 0], 0, 0]; 
				_ps1 setDropInterval 0.05;
				_ps1 setParticleFire [40, 0.5, 0.1]; 
				 
				// Smoke 
				private _ps2 = "#particlesource" createVehicleLocal _posATL; 
				_ps2 setParticleParams [ 
				 ["\A3\Data_F\ParticleEffects\Universal\Universal", 16, 7, 1, 1], "", "Billboard", 
				 1, 5, [0, 0, 1], [0, 0, 1.5], 0, 1, 1, 0.5, [1.75,2,3,4.5], // timerPeriod → size 
				 [[1,1,1,0], [1,1,1,0.5], [1,1,1,0.4], [1,1,1,0.2], [1,1,1,0]], 
				 [0.5,0.5], 0, 0, "", "", _ps2]; 
				_ps2 setParticleRandom [0.5, [1, 1, 0.4], [0, 0, 0.5], 0, 0.125, [0, 0, 0, 0], rad 30, 0]; 
				_ps2 setDropInterval 0.1; 
				
				_ps1 attachTo [(_this select 0),[0,0,-0.5], "head"];
				_ps2 attachTo [(_this select 0),[0,0,-0.5], "head"];
				
				sleep 2;
				
				deleteVehicle _ps1;
				deleteVehicle _ps2;
			};
			
		};

	};
	
	
	
	
	// Crozius cooldown inject
	
	
	
	SM_Skill_Crozius_Clone_SR = SM_Skill_Crozius;

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
	
	
	
		_unit spawn SM_Skill_Crozius_Clone_SR;

	};
	
};