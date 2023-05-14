class CfgPatches
{
	class SR_Vehicles
	{
		name="SR Vehicle Mod";
		author="Tengu";
		requiredVersion=0.0020000001;
		requiredAddons[]=
		{
			"SR_Core",
			"Steve_Ass_Ram",
			"TIOW_Razorback",
			"TIOW_SM_Fast_attack"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		units[]=
		{
			"TSR_StormEagle",
			"TSR_DropPod",
			"TSR_StormSpeeder",
			"TSR_TempSpeeder",
			"TSR_TyphoonSpeeder",
			"TSR_TornadoSpeeder",
			"TSR_Rhino",
			"TSR_Razorback_HB",
			"TSR_Razorback_LC",
			"TSR_Razorback_AC",
			"TSR_Predator",
			"TSR_Vindicator",
			"TSR_Ass_Bike_Bolter",
			"TSR_Ass_Bike_Plasma",
			"TSR_Atk_Bike_Bolt",
			"TSR_Atk_Bike_Melt"
		};
	};
};
class CfgVehicles
{
	class VTOL_SE_1;
	class HitPoints;
	class HitHull;
	class HitLAileron;
	class HitRAileron;
	class TIOW_Drop_Pod_UM;
	class TSR_StormEagle: VTOL_SE_1
	{
		armor=100;
		armorStructural=2;
		side=1;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Planes";
		displayName="[TSR] Storm Eagle";
		crew="TIOW_Tactical_IF_5";
		hiddenSelections[]=
		{
			"hull_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\Textures\SR_StormEagle_CO.paa"
		};
		radarRange=150000;
		canUseScanner=1;
		incomingMissileDetectionSystem="2+4+8+16";
		irScanToEyeFactor=1;
		irScanRangeMin=200;
		irScanRangeMax=10000;
		irScanGround=1;
		irTarget=1;
		irTargetSize=2;
		laserScanner=1;
		laserTarget=0;
		weaponLockSystem="2+4+8+16";
		nvScanner=1;
		radarTarget=1;
		radarTargetSize=2;
		radarType=4;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		showAllTargets=2;
		ace_cargo_space=20;
		ace_cargo_hasCargo=1;
		visualTarget=1;
		visualTargetSize=1;
		cost=10000000;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=66;
				explosionShielding=1;
				name="HitHull";
				passThrough=0.5;
				visual="Hit_Hull";
				radius=0.30000001;
				minimalHit=0.02;
				depends="Total";
				material=-1;
			};
			class HitGear: HitHull
			{
				armor=66;
				material=-1;
				name="gear";
				passThrough=0;
			};
			class HitLAileron: HitHull
			{
				armor=66;
				explosionShielding=3;
				name="HitRotor1";
				passThrough=0.1;
				visual="Hit_RotorL";
				radius=0.44999999;
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitRAileron: HitHull
			{
				armor=66;
				explosionShielding=3;
				name="HitRotor2";
				passThrough=0.1;
				visual="Hit_RotorR";
				radius=0.44999999;
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitLCRudder: HitLAileron
			{
			};
			class HitRRudder: HitRAileron
			{
			};
			class HitLCElevator: HitLAileron
			{
			};
			class HitRElevator: HitRAileron
			{
			};
			class HitEngine: HitHull
			{
				armor=66;
				explosionShielding=0.5;
				name="HitEngine";
				passThrough=0.1;
				visual="Hit_Engine";
				radius=0.2;
				minimalHit=0.0099999998;
				depends="HitLAileron*0.33";
			};
			class HitEngine2: HitHull
			{
				armor=66;
				explosionShielding=0.5;
				name="HitEngine2";
				passThrough=0.1;
				visual="Hit_Engine2";
				radius=0.2;
				minimalHit=0.0099999998;
				depends="HitRAileron*0.33";
			};
			class HitAvionics: HitHull
			{
				armor=66;
				explosionShielding=1;
				name="HitAvionics";
				passThrough=0.2;
				visual="Hit_Avionics";
				radius=0.2;
				depends="0";
			};
			class HitFuel: HitHull
			{
				armor=66;
				explosionShielding=0.5;
				name="HitFuel";
				passThrough=0.5;
				visual="Hit_Fuel";
				radius=0.2;
				minimalHit=0.0099999998;
				depends="0";
			};
		};
	};
	class TSR_DropPod: TIOW_Drop_Pod_UM
	{
		side=1;
		scope=2;
		scopeCurator=2;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Planes";
		crew="TIOW_Tactical_IF_1";
		displayName="[TSR] Drop Pod";
		hiddenSelections[]=
		{
			"Pod_Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_Vehicles\textures\SR_Drop_Pod_CO.paa"
		};
	};
	class TIOW_UM_Storm;
	class TSR_StormSpeeder: TIOW_UM_Storm
	{
		armor=100;
		armorStructural=2;
		side=1;
		scope=2;
		scopeCurator=2;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Helicopters";
		displayName="[TSR] Land Speeder Storm";
		crew="TIOW_Tactical_BT_1";
		hiddenSelections[]=
		{
			"LS_Hull"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_Vehicles\textures\SR_Speeder_Hull_CO.paa"
		};
		slingLoadMaxCargoMass=200000;
		maximumLoad=200000;
		class HitPoints
		{
			class HitEngine
			{
				armor=1;
				material=-1;
				name="HitEngine";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.1;
				radius=0.2;
			};
			class HitAvionics
			{
				explosionShielding=1;
				armor=66;
				material=51;
				name="avionics_hit";
				passThrough=1;
			};
			class HitEngine1: HitEngine
			{
				name="engine_1_hit";
				convexComponent="engine_1_hit";
			};
			class HitEngine2: HitEngine
			{
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
		};
	};
	class TIOW_UM_Temp;
	class TSR_TempSpeeder: TIOW_UM_Temp
	{
		armor=100;
		armorStructural=2;
		side=1;
		scope=2;
		scopeCurator=2;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Helicopters";
		displayName="[TSR] Land Speeder Tempest";
		crew="TIOW_Tactical_BT_1";
		hiddenSelections[]=
		{
			"LS_Hull"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_Vehicles\textures\SR_Tempest_Hull_CO.paa"
		};
		class HitPoints
		{
			class HitEngine
			{
				armor=1;
				material=-1;
				name="HitEngine";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.1;
				radius=0.2;
			};
			class HitAvionics
			{
				explosionShielding=1;
				armor=1;
				material=51;
				name="avionics_hit";
				passThrough=1;
			};
			class HitEngine1: HitEngine
			{
				name="engine_1_hit";
				convexComponent="engine_1_hit";
			};
			class HitEngine2: HitEngine
			{
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
		};
	};
	class TIOW_UM_Typhoon;
	class TSR_TyphoonSpeeder: TIOW_UM_Typhoon
	{
		armor=100;
		armorStructural=2;
		side=1;
		scope=2;
		scopeCurator=2;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Helicopters";
		displayName="[TSR] Land Speeder Typhoon";
		crew="TIOW_Tactical_SW_1";
		hiddenSelections[]=
		{
			"LS_Hull",
			"LS_Typhoon"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_Vehicles\textures\SR_Speeder_Hull_CO.paa",
			"TIOW_Speeder\Textures\Typhoon_BLK_CO.paa"
		};
	};
	class TIOW_UM_Tornado;
	class TSR_TornadoSpeeder: TIOW_UM_Tornado
	{
		armor=100;
		armorStructural=2;
		side=1;
		scope=2;
		scopeCurator=2;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Helicopters";
		displayName="[TSR] Land Speeder Tornado";
		crew="TIOW_Tactical_SW_1";
		hiddenSelections[]=
		{
			"LS_Hull"
		};
		hiddenSelectionsTextures[]=
		{
			"\SR_Vehicles\textures\SR_Speeder_Hull_CO.paa"
		};
	};
	class TIOW_SM_Rhino_UM;
	class TSR_Rhino: TIOW_SM_Rhino_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		side=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_APCs";
		displayName="[TSR] Rhino";
		crew="TIOW_Tactical_IF_1";
		hiddenSelections[]=
		{
			"CamoColor",
			"CamoParts",
			"CamoTracks"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\textures\SR_Rhino_CO.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_Rhino_Int_co.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_rhinotracks_co.paa"
		};
	};
	class TIOW_SM_Razorback_UM;
	class TSR_Razorback_HB: TIOW_SM_Razorback_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		side=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_APCs";
		displayName="[TSR] Razorback (HB)";
		crew="TIOW_Tactical_IF_1";
		hiddenSelections[]=
		{
			"CamoColor",
			"CamoParts",
			"CamoTracks"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\textures\SR_Rhino_CO.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_Rhino_Int_Co.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_Rhinotracks_co.paa"
		};
	};
	class TIOW_SM_Razorback_LC_UM;
	class TSR_Razorback_LC: TIOW_SM_Razorback_LC_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		side=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_APCs";
		displayName="[TSR] Razorback (LC)";
		crew="TIOW_Tactical_IF_1";
		hiddenSelections[]=
		{
			"CamoColor",
			"CamoParts",
			"CamoTracks",
			"Lascan"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\textures\SR_Rhino_CO.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_Rhino_Int_Co.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_Rhinotracks_co.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_RB_Las_co.paa"
		};
	};
	class TIOW_SM_Razorback_AC_UM;
	class TSR_Razorback_AC: TIOW_SM_Razorback_AC_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		side=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_APCs";
		displayName="[TSR] Razorback (AC)";
		crew="TIOW_Tactical_IF_1";
		hiddenSelections[]=
		{
			"CamoColor",
			"CamoParts",
			"CamoTracks",
			"AssaultCannon",
			"Lascan"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\textures\SR_Rhino_CO.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_Rhino_Int_Co.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_Rhinotracks_co.paa",
			"\TIOW_Razorback\Data\Textures\AssaultCannon_co.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_RB_Las_co.paa"
		};
	};
	class TIOW_SM_Predator_UM;
	class TSR_Predator: TIOW_SM_Predator_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		side=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Tanks";
		displayName="[TSR] Predator Destructor";
		crew="TIOW_Tactical_IF_1";
		hiddenSelections[]=
		{
			"CamoColor",
			"CamoParts",
			"CamoTracks"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\textures\SR_Rhino_CO.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_Rhino_Int_co.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_Rhinotracks_co.paa"
		};
	};
	class TIOW_SM_Vindicator_UM;
	class TSR_Vindicator: TIOW_SM_Vindicator_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		side=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Tanks";
		displayName="[TSR] Vindicator";
		crew="TIOW_Tactical_IF_1";
		hiddenSelections[]=
		{
			"CamoColor",
			"CamoParts",
			"CamoTracks"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\textures\SR_Rhino_CO.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_Rhino_Int_co.paa",
			"\TIOW_SM_Vehs\Data\Textures\TIOW_Rhinotracks_co.paa"
		};
	};
	class TIOW_SM_Whirlwind_Arty_UM;
	class TSR_Whirlwind_Arty: TIOW_SM_Whirlwind_Arty_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		side=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Artillery";
		displayName="[TSR] Whirlwind (Arty)";
		crew="TIOW_Tactical_BA_1";
		hiddenSelections[]=
		{
			"CamoColor",
			"CamoParts",
			"CamoTracks"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\textures\SR_Rhino_CO.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_Rhino_Int_Co.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_Rhinotracks_co.paa"
		};
	};
	class TIOW_SM_Whirlwind_AA_UM;
	class TSR_Whirlwind_AA: TIOW_SM_Whirlwind_AA_UM
	{
		side=1;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_AAs";
		displayName="[TSR] Whirlwind (AA)";
		crew="TIOW_Tactical_BA_1";
		hiddenSelections[]=
		{
			"CamoColor",
			"CamoParts",
			"CamoTracks"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\textures\SR_Rhino_CO.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_Rhino_Int_Co.paa",
			"\TIOW_Razorback\Data\Textures\TIOW_Rhinotracks_co.paa"
		};
	};
	class TIOW_Bike_Base;
	class TSR_Ass_Bike_Bolter: TIOW_Bike_Base
	{
		class EventHandlers
		{
			class SlowMode
			{
				init = "[(_this select 0)] spawn {_bike = (_this select 0);	while {true} do {_speed = (speed _bike);if (_speed > 100) then {_vel = velocityModelSpace _bike;_norm = vectorNormalized _vel;_bike setVelocityModelSpace [(_vel select 0) - (_norm select 0) * (_speed-100),(_vel select 1) - (_norm select 1) * (_speed-100), (_vel select 2) - (_norm select 2) * (_speed-100)];	};	sleep 0.5;	};	}; ";
			};
		};
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		side=1;
		displayName="[TSR] Assault Bike (Bolter)";
		crew="TIOW_Tactical_DA_1";
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Cars";
		hiddenSelections[]=
		{
			"Bike_Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\textures\SR_Bike_CO.paa"
		};
	};
	class TSR_Ass_Bike_Plasma: TSR_Ass_Bike_Bolter
	{
		class EventHandlers
		{
			class SlowMode
			{
				init = "[(_this select 0)] spawn {_bike = (_this select 0);	while {true} do {_speed = (speed _bike);if (_speed > 100) then {_vel = velocityModelSpace _bike;_norm = vectorNormalized _vel;_bike setVelocityModelSpace [(_vel select 0) - (_norm select 0) * (_speed-100),(_vel select 1) - (_norm select 1) * (_speed-100), (_vel select 2) - (_norm select 2) * (_speed-100)];	};	sleep 0.5;	};	}; ";
			};
		};
		displayName="[TSR] Assault Bike (Plasma)";
		model="\TIOW_SM_Fast_attack\Models\SM_Bike_Plasma.p3d";
		weapons[]=
		{
			"TIOW_SM_Bike_Plasma_1"
		};
		magazines[]=
		{
			"TIOW_SM_Bike_Plasma_Mag"
		};
	};
	class TIOW_Side_Car_Base;
	class TSR_Atk_Bike_Bolt: TIOW_Side_Car_Base
	{
		class EventHandlers
		{
			class SlowMode
			{
				init = "[(_this select 0)] spawn {_bike = (_this select 0);	while {true} do {_speed = (speed _bike);if (_speed > 100) then {_vel = velocityModelSpace _bike;_norm = vectorNormalized _vel;_bike setVelocityModelSpace [(_vel select 0) - (_norm select 0) * (_speed-100),(_vel select 1) - (_norm select 1) * (_speed-100), (_vel select 2) - (_norm select 2) * (_speed-100)];	};	sleep 0.5;	};	}; ";
			};
		};
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		side=1;
		displayName="[TSR] Attack Bike (Bolter)";
		crew="TIOW_Tactical_DA_1";
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Cars";
		hiddenSelections[]=
		{
			"Bike_Camo",
			"side_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\textures\SR_Bike_CO.paa",
			"TIOW_SM_Fast_attack\Textures\Side_Car_Black_CO.paa"
		};
	};
	class TIOW_Side_Car_Base_Melt;
	class TSR_Atk_Bike_Melt: TIOW_Side_Car_Base_Melt
	{
		class EventHandlers
		{
			class SlowMode
			{
				init = "[(_this select 0)] spawn {_bike = (_this select 0);	while {true} do {_speed = (speed _bike);if (_speed > 100) then {_vel = velocityModelSpace _bike;_norm = vectorNormalized _vel;_bike setVelocityModelSpace [(_vel select 0) - (_norm select 0) * (_speed-100),(_vel select 1) - (_norm select 1) * (_speed-100), (_vel select 2) - (_norm select 2) * (_speed-100)];	};	sleep 0.5;	};	}; ";
			};
		};
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		side=1;
		crew="TIOW_Tactical_DA_1";
		displayName="[TSR] Attack Bike (Melta)";
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Cars";
		hiddenSelections[]=
		{
			"Bike_Camo",
			"side_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\textures\SR_Bike_CO.paa",
			"TIOW_SM_Fast_attack\Textures\Side_Car_Black_CO.paa"
		};
	};
};
class cfgMods
{
	author="Tengu";
	timepacked="1683935215";
};
