//Written by: Jenna
//
//
// Parameters:
// 1. _unit (Object)
// 2. _shieldstrength (number)
// 3. _recharge (bool)
//
// Used for imperial commandos, can be added to a unit init field to give a shield 
//
// Example :
// [bigbadboss,35,true] call knd_fnc_imperial_shield
//
// TODO: Adjust particle effects
//


params ["_unit", "_shieldstrength", "_recharge"];

// Startup, set object variables
_unit setvariable ["knd_imperial_shieldhealth",_shieldstrength,true];
_unit setvariable ["knd_imperial_shieldMaxhealth",_shieldstrength,true];
_unit setvariable ["knd_imperial_shieldrecharge",_recharge,true];

// Main "loop", refreshes every time the shield recharges
knd_impshield_HD = {
params ["_unit", "_shieldstrength", "_recharge"];

//Handledamage sucks, apparently, so we need to confirm locality
if !(local _unit) exitWith {};


//Begin by making ace damage not work.
_unit setvariable ["ace_medical_allowdamage", false];
_unit setVariable ['IMS_IsUnitInvicibleScripted',1,true];

_unit addEventHandler ["HandleDamage", {
	params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint", "_directHit"];
	0;
	//systemChat str _this;
	if (_hitPoint isEqualTo "" OR _hitPoint isEqualTo "ace_hdbracket") exitwith {}; // No structural, no bracket


[  [_unit] ,
{
	if !(hasInterface) exitwith {};
	params ["_unit"];
	 private _distort = "#particlesource" createVehicle (getPosATL _unit);
	_distort attachTo [_unit, [0,0,0], "spine3"];
	_distort setParticleParams [
	["\A3\data_f\blesk1",
	1, 
	0, 
	1], 
	"", 
	"SpaceObject", 
	1, 
	0.2, 
	[0, 0, 0], 
	[0, 0, 0], 
	0, 
	10,
	7.9, 
	0.005, 
	[0.01, 0.0075, 0.005], 
	[[0.01, 0.01, 0.01, 0.5], 
	[0.9, 0.8, 0.1, 1], 
	[0.5, 0.5, 0.5, 0]], 
	[0.08], 
	1, 
	0, 
	"", 
	"", 
	_distort
	];
	_distort setParticleRandom [0,[0,0,0],[0,0,0],0,0,[0, 0, 0, 0],1,0];
	_distort setParticleCircle [0,[0, 0, 0]];
	_distort setDropInterval 0.12; //0.08
	sleep 1;
	_distort setDropInterval 0.05;
	sleep 1;
	deleteVehicle _distort;
			
}
	] remoteexec ["spawn", 0]; // Normally, CfgRemoteExec can fuck this. It's only a particle effect, so I don't care.


// Yank some health away from the shield, based on damage taken
_shieldhealth = _unit getvariable "knd_imperial_shieldhealth";
_shieldhealth = _shieldhealth - _damage;
_unit setvariable ["knd_imperial_shieldhealth",_shieldhealth,true];

private _shieldpercent = _shieldstrength/ (_unit getvariable "knd_imperial_shieldMaxHealth");
_shieldpercent = _shieldpercent * 100;
private _shieldhint = "Shield Strength: " + (str _shieldpercent);
hint _shieldhint;
hintsilent _shieldhint;
[{hintsilent ""}, [], 2] call CBA_fnc_waitAndExecute;

// If the shield is broken, take away the HD eventhandler and re-enable ace damage

if (_shieldhealth <= 0) then {
	_recharge = _unit getvariable ["knd_imperial_shieldrecharge",true];
	_unit removeEventHandler [_thisEvent, _thisEventHandler];
	_unit setvariable ["ace_medical_allowdamage", true];
	_unit setVariable ['IMS_IsUnitInvicibleScripted',nil,true];

	// If the shield is set to recharge after being broken, queue up another iteration of the shield
	if (_recharge) then {
		_shieldstrength = _unit getVariable "knd_imperial_shieldMaxhealth";
		[{
			params ["_unit", "_shieldstrength", "_recharge"];

			// Check if the guy is still alive. If not, no need to bother.
			if (!alive _unit) exitwith {}; 


			_unit setvariable ["knd_imperial_shieldhealth",_shieldstrength];
			//systemchat "Recharging?";
			
			[_unit, _shieldstrength, _recharge] call knd_impshield_HD;}, [_unit, _shieldstrength, _recharge], 10] call CBA_fnc_waitAndExecute;
	};

};

}]
};

[_unit, _shieldstrength, _recharge] call knd_impshield_HD;


