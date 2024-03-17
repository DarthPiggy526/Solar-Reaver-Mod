/*
	Author: Waagheur

	Description:
		

	Parameter(s):
		params ['_entity'];




	Returns:
		Nothing

	Examples:
		
*/

params ['_entity'];

if (isServer) then {
	_entity addMagazineTurret ["SmokeLauncherMag", [-1], 3];
    _entity addWeaponTurret ["SmokeLauncher", [-1]];
};

0 = _entity addEventHandler ["Fired", {
    params ["_vehicle", "_weapon"];
    if (_weapon != "SmokeLauncher") exitWith {};

    private _config = configFile >> "CfgVehicles" >> typeof _vehicle;
    private _count = getNumber (_config >> "smokeLauncherGrenadeCount");

    if (_count > 0) exitWith {};

    _count = 8;
    private _velocity = 14;
    private _position = visiblePositionASL _vehicle;
    private _direction = direction _vehicle;
    private _angle = 120;

    private _deltaDir = _angle / _count;
    private _arc = _deltaDir * (_count - 1);

    private _initDist = (boundingBox _vehicle select 1 select 2) - (boundingBox _vehicle select 0 select 2);

    private _Vdir = 30;
    private _vH = _velocity * cos _Vdir;
    private _vV = _velocity * sin _Vdir;
    private _pH = _initDist * cos _Vdir;
    private _pV = _initDist * sin _Vdir;

    private _shells = [];
    for "_i" from 0 to (_count - 1) do {
        private _Hdir = _i * _deltaDir + _direction - _arc/2;
        private _Gvel = [_vH * sin _Hdir, _vH * cos _Hdir, _vV];

        private _shell = "SmokeShellVehicle" createVehicleLocal [0,0,0];
        _shell setPosASL (_position vectorAdd [_pH * sin _Hdir, _pH * cos _Hdir, _pV]);
        _shell setVectorUp vectorNormalized _Gvel;
        _shell setVelocity _Gvel;
        _shells pushBack _shell;
    };

    _shells spawn {
        sleep 0.7;
        private _sources = [];

        isNil {
            {
                private _source1 = "#particlesource" createVehicleLocal ASLToAGL getPosASl _x;
                _source1 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 7, 48, 1], "", "Billboard", 1, 10, [0, 0, 0],
                [0, 0, 0.5], 0, 1.277, 1, 0.025, [0.5, 8, 12, 15], [[1, 1, 1, 0.7],[1, 1, 1, 0.5], [1, 1, 1, 0.25], [1, 1, 1, 0]],
                [0.2], 1, 0.04, "", "", _x];
                _source1 setParticleRandom [2, [0.3, 0.3, 0.3], [1.5, 1.5, 1], 20, 0.2, [0, 0, 0, 0.1], 0, 0, 360];
                _source1 setDropInterval 0.2;

                private _source2 = "#particlesource" createVehicleLocal ASLToAGL getPosASl _x;
                _source2 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 7, 0], "", "Billboard", 1, 5, [0, 0, 0],
                [0, 0, 0.5], 0, 1.277, 1, 0.025, [0.5, 8, 12, 15], [[1, 1, 1, 1],[1, 1, 1, 1], [1, 1, 1, 0.5], [1, 1, 1, 0]],
                [0.2], 1, 0.04, "", "", _x];
                _source2 setParticleRandom [2, [0.3, 0.3, 0.3], [1.5, 1.5, 1], 20, 0.2, [0, 0, 0, 0.1], 0, 0, 360];
                _source2 setDropInterval 0.15;

                _sources append [_source1, _source2];
            } forEach _this;
        };

        sleep (55+random 3);

        isNil {
            {deleteVehicle _x} forEach _sources;
        };
    };
}];
