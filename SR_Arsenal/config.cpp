class CfgPatches
{
	class SR_Arsenal
	{
		name="SR Arsenal Mod";
		author="Tengu";
		requiredVersion=0.0020000001;
		requiredAddons[]=
		{
			"TIOWSpaceMarines",
			"Seb_SM_Melee_Mod",
			"Steve_30K_weps",
			"Steve_30K_weps2",
			"Steve_30k_weps3",
			"Seb_SM_Melee_Mod",
			"TIOW_IQ_40k_weapons",
			"A3_Data_F",
			"A3_Characters_F",
			"A3_Anims_F"
		};
		weapons[]=
		{
			"SR_Master_Crafted_Ragefire_PlasmaGun_1",
			"SR_Master_Crafted_GodwynBoltgun_1",
			"SR_EC_GodwynBoltgun",
			"SR_Meltagun_1",
			"SR_Phobos_Shield",
			"SR_Tigrus_Shield",
			"SR_Lascut_Shield",
			"SR_Lascut"
		};
		magazines[]=
		{
			"SR_Meltagun_Mag",
			"Steve_30k_lascutter_Mag"
		};
		ammo[]=
		{
			"SR_Meltagun_Ammo",
			"SR_Lascutter_Round"
		};
		units[]={};
	};
};

class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class EC_BolterDeep_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"EC_BolterDeep_Closure_SoundShader",
			"EC_BolterDeep_closeShot_SoundShader",
			"EC_BolterDeep_midShot_SoundShader",
			"EC_BolterDeep_distShot_SoundShader"
		};
	};
	class EC_BolterDeep_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"EC_BolterDeep_tailTrees_SoundShader",
			"EC_BolterDeep_tailForest_SoundShader",
			"EC_BolterDeep_tailMeadows_SoundShader",
			"EC_BolterDeep_tailHouses_SoundShader"
		};
	};
	class EC_BolterDeep_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"EC_BolterDeep_tailInterior_SoundShader"
		};
	};
	class EC_BolterDeep_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"EC_BolterDeep_Closure_SoundShader",
			"EC_BolterDeep_silencerShot_SoundShader"
		};
	};
	class EC_BolterDeep_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"EC_BolterDeep_silencerTailTrees_SoundShader",
			"EC_BolterDeep_silencerTailForest_SoundShader",
			"EC_BolterDeep_silencerTailMeadows_SoundShader",
			"EC_BolterDeep_silencerTailHouses_SoundShader"
		};
	};
	class EC_BolterDeep_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"EC_BolterDeep_silencerTailInterior_SoundShader"
		};
	};
};

class CfgSoundShaders
{
	class EC_BolterDeep_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			},
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume=0.446684;
		range=5;
	};
	class EC_BolterDeep_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			},
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			},
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class EC_BolterDeep_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			},
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			},
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume=0.79432797;
		range=1800;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class EC_BolterDeep_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			},
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			},
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
		};
	};
	class EC_BolterDeep_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume="interior";
		range=500;
		limitation=0;
	};
	class EC_BolterDeep_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1800;
		limitation=1;
	};
	class EC_BolterDeep_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1800;
		limitation=1;
	};
	class EC_BolterDeep_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1800;
		limitation=1;
	};
	class EC_BolterDeep_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		limitation=1;
	};
	class EC_BolterDeep_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			},
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			},
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class EC_BolterDeep_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class EC_BolterDeep_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class EC_BolterDeep_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class EC_BolterDeep_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class EC_BolterDeep_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\SR_Arsenal\sound\EC_Bolter.wss",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
};

class CfgFunctions
{
	class SR
	{
		class Hack
		{
			file = "SR_Arsenal\functions";
			class ragefire_burst_cd {
				//file = "SR_Arsenal\functions\fn_ragefire_burst_cd.sqf";
			};
			class ragefire_burst_init {
				postInit	= 1;
				//file = "SR_Arsenal\functions\fn_ragefire_burst_init.sqf";
			};
		};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Single;
class Burst;
class FullAuto;
class TIOW_GodwynBoltgun_1;
class TIOW_SM_Ragefire_PlasmaGun;
class Steve_Phobos_Pistol;
class Steve_Phobos_Pistol_Banner;
class STEVE_30k_Tig_Pistol;
class STEVE_30k_Tig_Pistol_Banner;
class STEVE_TigrusExitusBoltgun_1;
class SR_Single;
class SR_FullAuto;
class SR_fullAutoFast;
class TIOW_Mars_HeavyBolter;
class TIOW_SM_MeltaGun_01;
class Steve_SM_LasCan_04;
class Dos_Melee_PS_Dos;
class Web_Melee_KnifeSM;
class Web_Melee_MOA;
class STEVE_PhobosShield_1;
class STEVE_TigrusShield_1;
class STEVE_LascutShield_1;
class TIOW_SM_LasCan_01;
class CfgWeapons
{
	class SR_Master_Crafted_Mars_HeavyBolter_1: TIOW_Mars_HeavyBolter
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Master_Crafted_Mars_HeavyBolter_1";
		displayName="[TSR] [Master Crafted] Mars Pattern Heavy Bolter";
		hiddenSelectionsTextures[]=
		{
			"\SR_Arsenal\textures\SR_Master_Crafted_Mars_HeavyBolter.paa"
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"RapidFire",
			"fullauto_medium"
		};
		class RapidFire: FullAuto
		{
			reloadTime=0.1;
			dispersion=0.03;
			textureType="fastAuto";
		};
	};
	class SR_Master_Crafted_Ragefire_PlasmaGun_1: TIOW_GodwynBoltgun_1
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		picture="\TIOW_SMWep\Icon\Ragefire_ca.paa";
		magazineWell[]={};
		baseWeapon="SR_Master_Crafted_Ragefire_PlasmaGun_1";
		magazines[]=
		{
			"TIOW_SM_Plasmagun_Mag",
			"TIOW_SM_Overcharge_Plasmagun_Mag"
		};
		author="Waagheur";
		displayName="[TSR] [Master Crafted] Ragefire Plasmagun";
		model="\TIOW_SMWep\Boltgun\Model\TIOW_SM_Plasmagun_01.p3d";
		rightHandIKCurve[]={1};
		LeftHandIKCurve[]={1};
		reloadAction="GestureReloadTIOW_GodwynBoltgun";
		handAnim[]=
		{
			"SpaceMarine_ManSkeleton",
			"\TIOW_SMWep\Anim\New_Boltgun.rtm"
		};
		modelOptics="\DKOK_Weapons\Type14_Optic.p3d";
		selectionFireAnim="zasleh";
		hiddenSelections[]=
		{
			"Camo",
			"BolterCamo"
		}; 
		hiddenSelectionsTextures[]=
		{
			"SR_Arsenal\textures\SR_Master_Crafted_PlasmaGun.paa",
			"TIOW_SMWep\Data\Textures\TIOW_Godwyn_Checker_co.paa"
		};
		class OpticsModes
		{
			class TWS
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.039999999;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.0625;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
				discreteDistanceInitIndex=2;
				distanceZoomMin=100;
				distanceZoomMax=1600;
				discretefov[]={0.0625,0.025};
				discreteInitIndex=0;
				modelOptics[]=
				{
					"\A3\Weapons_f\acc\reticle_tws_mg",
					"\A3\Weapons_f\acc\reticle_tws_mg_NFOW"
				};
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"TI",
					"NVG"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
			class Iron: TWS
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.15000001;
				opticsZoomMax=0.40000001;
				opticsZoomInit=0.5;
				memoryPointCamera="eye";
				visionMode[]={};
				discretefov[]={};
				distanceZoomMin=200;
				distanceZoomMax=200;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
			};
		};
		modes[]=
		{
			"Single",
			"Burst",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=1;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					0.316228,
					1.1,
					10
				};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Plasmagun_Shot_SoundSet",
					"Plasmagun_Tail_SoundSet",
					"Plasmagun_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"DKok_Weapons\sound\PlasmaGun1.wss",
							2.2387199,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"DKok_Weapons\sound\PlasmaGun1.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"DKok_Weapons\sound\PlasmaGun1.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"DKok_Weapons\sound\PlasmaGun1.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"DKok_Weapons\sound\PlasmaGun1.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime=0.33;
			burst = 3;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					1,
					1,
					10
				};
				closure2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					1,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					2.8183801,
					1,
					1200
				};
				begin2[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					2.8183801,
					1,
					1200
				};
				begin3[]=
				{
					"DKok_Weapons\sound\PlasmaGun1.wss",
					2.8183801,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"DKok_Weapons\sound\PlasmaGun1.wss",
							1.58489,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"DKok_Weapons\sound\PlasmaGun1.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"DKok_Weapons\sound\PlasmaGun1.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"DKok_Weapons\sound\PlasmaGun1.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"DKok_Weapons\sound\PlasmaGun1.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
				soundSetShot[]=
				{
					"Plasmagun_Shot_SoundSet",
					"Plasmagun_Tail_SoundSet",
					"Plasmagun_InteriorTail_SoundSet"
				};
			};
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
			aiRateOfFire=2.5999999;
			aiRateOfFireDistance=500;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=500;
			minRangeProbab=0.1;
			midRange=750;
			midRangeProbab=0.60000002;
			maxRange=1000;
			maxRangeProbab=0.050000001;
			aiRateOfFire=3.75;
			aiRateOfFireDistance=1000;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
	};
	class SR_Master_Crafted_GodwynBoltgun_1: TIOW_GodwynBoltgun_1
	{
		displayName="[TSR] [Master Crafted] Godwyn Boltgun";
		baseWeapon="SR_Master_Crafted_GodwynBoltgun_1";
		author="Tengu";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"SR_Arsenal\textures\SR_Master_Crafted_GodwynBoltgun_1_co.paa"
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto",
			"RapidFire",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\TIOW_SMWep\Sound\BolterDeep.wss",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\TIOW_SMWep\Sound\BolterDeep.wss",
					1,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\TIOW_SMWep\Sound\BolterDeep.wss",
					2.8183801,
					1,
					1200
				};
				begin2[]=
				{
					"\TIOW_SMWep\Sound\BolterDeep.wss",
					2.8183801,
					1,
					1200
				};
				begin3[]=
				{
					"\TIOW_SMWep\Sound\BolterDeep.wss",
					2.8183801,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\TIOW_SMWep\Sound\BolterDeep.wss",
							1.58489,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\TIOW_SMWep\Sound\BolterDeep.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\TIOW_SMWep\Sound\BolterDeep.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\TIOW_SMWep\Sound\BolterDeep.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\TIOW_SMWep\Sound\BolterDeep.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[]=
				{
					"TIOW_BolterDeep_Shot_SoundSet",
					"TIOW_BolterDeep_Tail_SoundSet",
					"TIOW_BolterDeep_InteriorTail_SoundSet"
				};
			};
			soundBurst=0;
			reloadTime=0.155;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.00034999999;
		};
		class RapidFire: FullAuto
		{
			reloadTime=0.08;
			dispersion=0.01;
			textureType="fastAuto";
		};
	};
	class SR_EC_GodwynBoltgun: SR_Master_Crafted_GodwynBoltgun_1
	{
		author="Tengu";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] Arkhona Boltgun";
		baseWeapon="SR_EC_GodwynBoltgun";
		descriptionShort="Eternal Crusade Boltgun";
		hiddenSelectionsTextures[]=
		{
			"\TIOW_IW\Textures\TIOW_IQ_BlackNoEagle_co.paa"
		};
		modes[]=
		{
			"SR_Single",
			"SR_Burst",
			"SR_FullAuto",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class SR_Single: Single
		{
			reloadTime=0.20999999;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					0.316228,
					1.1,
					10
				};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"EC_BolterDeep_Shot_SoundSet",
					"EC_BolterDeep_Tail_SoundSet",
					"EC_BolterDeep_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							2.2387199,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
		class SR_Burst: Burst
		{
			reloadTime=0.20999999;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					1,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					2.8183801,
					1,
					1200
				};
				begin2[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					2.8183801,
					1,
					1200
				};
				begin3[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					2.8183801,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1.58489,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
				soundSetShot[]=
				{
					"EC_BolterDeep_Shot_SoundSet",
					"EC_BolterDeep_Tail_SoundSet",
					"EC_BolterDeep_InteriorTail_SoundSet"
				};
			};
			soundBurst=0;
		};
		class SR_FullAuto: FullAuto
		{
			reloadTime=0.20999999;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					1,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					2.8183801,
					1,
					1200
				};
				begin2[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					2.8183801,
					1,
					1200
				};
				begin3[]=
				{
					"\SR_Arsenal\sound\EC_Bolter.wss",
					2.8183801,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1.58489,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\SR_Arsenal\sound\EC_Bolter.wss",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
				soundSetShot[]=
				{
					"EC_BolterDeep_Shot_SoundSet",
					"EC_BolterDeep_Tail_SoundSet",
					"EC_BolterDeep_InteriorTail_SoundSet"
				};
			};
		};
	};
	class SR_Meltagun_1: TIOW_SM_MeltaGun_01
	{
		author="Tengu";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] Meltagun";
		baseWeapon="SR_Meltagun_1";
		magazines[]=
		{
			"TIOW_Meltagun_Mag",
			"SR_Meltagun_Mag"
		};
	};
	class SR_Phobos_Shield: STEVE_PhobosShield_1
	{
		baseWeapon="SR_Phobos_Shield";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] MKIII Breacher Shield (Phobos)";
		armor=1000;
		passThrough=0.89999998;
	};
	class SR_Tigrus_Shield: STEVE_TigrusShield_1
	{
		baseWeapon="SR_Tigrus_Shield";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] MKIII Breacher Shield (Tigrus)";
		armor=1000;
		passThrough=0.89999998;
		hiddenSelections[]=
		{
			"30k_Camo",
			"Shield2_Camo"
		};
	};
	class SR_Lascut_Shield: STEVE_LascutShield_1
	{
		baseWeapon="SR_Lascut_Shield";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[TSR] MKIII Breacher Shield (Lascutter)";
		magazines[]=
		{
			"SR_Lascutter_Mag"
		};
		armor=1000;
		passThrough=0.89999998;
	};
	class SR_Lascut: SR_Lascut_Shield
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[TSR] Lascutter";
		baseWeapon="SR_Lascut";
		model="Steve_30K_weps2\Shields\models\LC_Alone.p3d";
		reloadAction="GestureReloadTIOW_GodwynBoltgun";
		handAnim[]=
		{
			"SpaceMarine_ManSkeleton",
			"\TIOW_SMWep\Anim\New_Boltgun.rtm"
		};
	};
};
class TIOW_Melta_Ammo;
class Steve_30k_Lascutter_Round;
class CfgAmmo
{
	class SR_Meltagun_Ammo: TIOW_Melta_Ammo
	{
		hit=1200;
		timeToLive=0.17;
	};
	class SR_Master_Crafted_Meltagun_Ammo: SR_Meltagun_Ammo
	{
		hit=1200;
		timeToLive=0.215;
	};
	class SR_Lascutter_Round: Steve_30k_Lascutter_Round
	{
		displayName="[TSR] lascutter Round";
		timeToLive=0.079999998;
	};
};
class TIOW_Meltagun_Mag;
class Steve_Trig_BoltPistolMag;
class Steve_Phob_BoltPistolMag;
class Steve_30k_lascutter_Mag;
class CfgMagazines
{
	class SR_Master_Crafted_Phobos_BoltPistol_Mag: Steve_Phob_BoltPistolMag
	{
		displayName="[TSR] Master Crafted Phobos Bolt Pistol Magazine 30 Rnd.";
		count=30;
		mass=15;
		descriptionShort="[TSR] Master Crafted Phobos Bolt Pistol Magazine 30 Rnd.";
		modelSpecialIsProxy=1;
	};
	class SR_Master_Crafted_Tigrus_BoltPistol_Mag: Steve_Trig_BoltPistolMag
	{
		displayName="[TSR] Master Crafted Tigrus Bolt Pistol Magazine 30 Rnd.";
		count=30;
		mass=15;
		descriptionShort="[TSR] Master Crafted Tigrus Bolt Pistol Magazine 30 Rnd.";
		modelSpecialIsProxy=1;
	};
	class SR_Meltagun_Mag: TIOW_Meltagun_Mag
	{
		author="Tengu";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		ammo="SR_Meltagun_Ammo";
		displayName="[TSR] Meltagun Ammo";
		initSpeed=1500;
		count=5;
		mass=40;
	};
	class SR_Master_Crafted_Meltagun_Mag: SR_Meltagun_Mag
	{
		ammo="SR_Master_Crafted_Meltagun_Ammo";
		displayName="[TSR] [Master Crafted] Meltagun Ammo";
	};
	class SR_Lascutter_Mag: Steve_30k_lascutter_Mag
	{
		displayName="[TSR] Lasscutter Core";
		descriptionShort="[TSR] Lasscutter Core";
		ammo="SR_Lascutter_Round";
		initSpeed=1500;
		count=10;
		mass=20;
	};
};
class cfgMods
{
	author="Tengu";
	timepacked="1675254557";
};
