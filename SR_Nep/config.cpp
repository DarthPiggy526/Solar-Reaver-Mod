#define _ARMA_

class CfgPatches
{
	class TSR_Nep
	{
		requiredAddons[] = {"A3_Air_F_Exp", "Neph_Cons_Jet"};
		requiredVersion = 0.1;
		units[] = {"TSR_Nep"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class VTOL_Neph_1;
	class TSR_Nep: VTOL_Neph_1
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Planes";
		displayName = "[TSR] Nephilim Jetfighter (retrofit)";
		weapons[] = {"Avenger_Mega_Bolter","Nephs_HB","TSRBMissile_6rnd","CMFlareLauncher","Laserdesignator_mounted"};
		magazines[] = {"AMBolter_Mag","Laserbatteries","TSRBMissile_6rnd_mag","TSRBMissile_6rnd_mag","TSRBMissile_6rnd_mag","TSRBMissile_6rnd_mag","168Rnd_CMFlare_Chaff_Magazine","Neph_Bolter_mag_120","Neph_Bolter_mag_120","Neph_Bolter_mag_120","Neph_Bolter_mag_120"};
		class Turrets{};
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class Mode_Burst;
class CannonCore;
class CfgWeapons
{
	class TIOW_Mars_HeavyBolter;
	class Nephs_HB: TIOW_Mars_HeavyBolter
	{
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "Twin-Linked Bolter";
		baseWeapon = "Nephs_HB";
		descriptionShort = "Twin-Linked Bolter.";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazineReloadTime = 3;
		magazines[] = {"Neph_Bolter_mag_120"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun3";
				positionName = "Right_bolt_beg";
				directionName = "Right_bolt_end";
			};
			class Effect2
			{
				effectName = "MachineGun3";
				positionName = "Left_bolt_beg";
				directionName = "Left_bolt_end";
			};
		};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",0.316228,1,10};
				closure2[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",0.316228,1.1,10};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"TIOW_BolterDeep_Shot_SoundSet","TIOW_BolterDeep_Tail_SoundSet","TIOW_BolterDeep_InteriorTail_SoundSet"};
				begin1[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",3.16228,1,1800};
				begin2[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",3.16228,1,1800};
				begin3[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",3.16228,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.125;
			dispersion = 0.006;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			minRange = 0;
			minRangeProbab = 0.25;
			midRange = 15;
			midRangeProbab = 0.25;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1;
		};
		showToPlayer = 0;
		burst = 5;
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 350;
		midRangeProbab = 0.9;
		maxRange = 550;
		maxRangeProbab = 0.9;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 550;
	};
	class TIOW_VMB_R;
	class Avenger_Mega_Bolter: TIOW_VMB_R
	{
		displayname = "Avenger Mega Bolter";
		descriptionShort = "Avenger Mega Bolter";
		selectionFireAnim = "cannon_muzzleflash";
		magazines[] = {"AMBolter_Mag"};
	};
	class missiles_DAR;
	class TSRBMissile_6rnd: missiles_DAR
	{
		displayname = "Blacksword Missile Launchers";
		descriptionShort = "6rnd Blacksword Missile Launchers";
		magazines[] = {"TSRBMissile_6rnd_mag"};
		magazineReloadTime = 10;
	};
};
class CfgMagazines
{
	class TIOW_VMB_Mag_x2000;
	class AMBolter_Mag: TIOW_VMB_Mag_x2000
	{
		displayname = "Avenger Mega Bolter Mag";
		ammo = "SE_Bolt_Rnd";
		count = 1000;
		descriptionShort = "Avenger Mega Bolter 1000Rnd";
	};
	class 6Rnd_LG_scalpel;
	class TSRBMissile_6rnd_mag: 6Rnd_LG_scalpel
	{
		author = "Bohemia Interactive";
		displayName = "Blacksword Missiles";
		count = 6;
		ammo = "TSRBMissile_6rnd_Rnd";
		descriptionShort = "Blacksword Missiles";
	};
	class TIOW_Mars_HeavyBolterMag_85rnd;
	class Neph_Bolter_mag_120: TIOW_Mars_HeavyBolterMag_85rnd
	{
		displayName = "Twin-Linked Bolter";
		ammo = "Neph_Bolt_Rnd";
		count = 120;
		descriptionShort = "Twin-Linked Bolter";
	};
};
class CfgAmmo
{
	class TIOW_IG_HeavyBolter_Rnd;
	class Neph_Bolt_Rnd: TIOW_IG_HeavyBolter_Rnd
	{
		cartridge = "";
		tracerStartTime = 0.1;
	};
	class AMBolter_Cons_Rnd: TIOW_IG_HeavyBolter_Rnd
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		hit = 220;
		explosive = 0.6;
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime = 0.175;
		waterFriction = -0.01;
		effectFly = "AmmoUnderwater";
	};
	class M_Scalpel_AT;
	class TSRBMissile_6rnd_Rnd: M_Scalpel_AT
	{
		effectsMissile = "BlackMissile_cons";
		airLock = 1;
		autoSeekTarget = 1;
		weaponLockSystem = "2 + 16 + 4 + 8";
		trackOversteer = 1;
		missileLockMaxDistance = 2000;
		weaponLockDelay = 1.5;
		irScanRangeMin = 100;
		irScanRangeMax = 7500;
		irScanGround = 1;
		laserLock = 1;
		irTarget = 1;
		laserScanner = 1;
		radarType = 4;
	};
};