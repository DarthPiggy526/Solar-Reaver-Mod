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
			"Steve_30K_weps_New",
			"Steve_30K_weps2",
			"Steve_30k_weps3",
			"Seb_SM_Melee_Mod",
			"TIOW_IQ_40k_weapons",
			"TIOW_Dos_Weps",
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
			"SR_Lascut",
			"SR_LasFusil",
			"SR_Ragefire_PlasmaGun_1",
			"SR_Ryza_Plasma_Gun",
			"SR_Ryza_Plasma_Pistol",
			"SR_Combi_Bolter_1",
			"SR_Combi_Bolter_2",
			"SR_Combi_Bolter_3"
		};
		magazines[]=
		{
			"SR_Meltagun_Mag",
			"Steve_30k_lascutter_Mag",
			"SR_LasFusil_Mag"
		};
		ammo[]=
		{
			"SR_Meltagun_Ammo",
			"SR_Lascutter_Round",
			"SR_LasFusil_Rnd",
			"SR_PlasmagunRound",
			"SR_Overcharge_PlasmagunRound",
			"SR_Overcharge_PlasmapistolRound"
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
	

	class SR_LasFusil_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SR_LasFusil_Closure_SoundShader","SR_LasFusil_closeShot_SoundShader","SR_LasFusil_midShot_SoundShader","SR_LasFusil_distShot_SoundShader"};
	};
	class SR_LasFusil_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"SR_LasFusil_tailTrees_SoundShader","SR_LasFusil_tailForest_SoundShader","SR_LasFusil_tailMeadows_SoundShader","SR_LasFusil_tailHouses_SoundShader"};
	};
	class SR_LasFusil_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SR_LasFusil_tailInterior_SoundShader"};
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

		class SR_LasFusil_Closure_SoundShader
	{
		samples[] = {{"\SR_Arsenal\sound\LasFusil.wss",1},{"\SR_Arsenal\sound\LasFusil.wss",1}};
		volume = 0.446684;
		range = 5;
	};
	class SR_LasFusil_closeShot_SoundShader
	{
		samples[] = {{"\SR_Arsenal\sound\LasFusil.wss",1},{"\SR_Arsenal\sound\LasFusil.wss",1},{"\SR_Arsenal\sound\LasFusil.wss",1}};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class SR_LasFusil_midShot_SoundShader
	{
		samples[] = {{"\SR_Arsenal\sound\LasFusil.wss",1},{"\SR_Arsenal\sound\LasFusil.wss",1},{"\SR_Arsenal\sound\LasFusil.wss",1}};
		volume = 0.794328;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class SR_LasFusil_distShot_SoundShader
	{
		samples[] = {{"\SR_Arsenal\sound\LasFusil.wss",1},{"\SR_Arsenal\sound\LasFusil.wss",1},{"\SR_Arsenal\sound\LasFusil.wss",1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class SR_LasFusil_tailInterior_SoundShader
	{
		samples[] = {{"\SR_Arsenal\sound\LasFusil.wss",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class SR_LasFusil_tailTrees_SoundShader
	{
		samples[] = {{"\SR_Arsenal\sound\LasFusil.wss",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class SR_LasFusil_tailForest_SoundShader
	{
		samples[] = {{"\SR_Arsenal\sound\LasFusil.wss",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class SR_LasFusil_tailMeadows_SoundShader
	{
		samples[] = {{"\SR_Arsenal\sound\LasFusil.wss",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class SR_LasFusil_tailHouses_SoundShader
	{
		samples[] = {{"\SR_Arsenal\sound\LasFusil.wss",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
};

class TIOW_LascannonBeam_flametrail;
class CfgCloudlets
{
		//	color[] = {{0.15,0.5,0,1},{0,1,0.2,1},{0,0.34,0.04,1}};
		//	emissiveColor[] = {{100,100,100,255},{0,0,0,0}};
		//	colorCoef[] = {1.2,1.2,1.2,1.2};

	class SR_LasFusil_Beam: TIOW_LascannonBeam_flametrail
	{
		interval = 8e-05;
		lifeTime = 0.17000002;
		color[] = {{0.15,0.5,0,1},{0,1,0.2,1},{0,0.34,0.04,1}};
		emissiveColor[] = {{100,100,100,255},{0,0,0,0}};
		colorCoef[] = {1.2,1.2,1.2,1.2};
		size[] = {0.06,0.06,0.06};
		sizeCoef = 1.5;



//		color[] = {{0.15,0.5,0,1},{0,1,0.2,1},{0,0.34,0.04,1}};
//		emissiveColor[] = {{100,100,100,255},{0,0,0,0}};
//		colorCoef[] = {1.2,1.2,1.2,1.2};
	};


};

class SR_LasFusil_Beam
{
	class Light1
	{
		simulation = "light";
		type = "FiredLightMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = -1;
	};
	class SR_LasFusil_Beam_Light
	{
		simulation = "light";
		type = "SmallFireLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 10;
	};
	class SR_LasFusil_Beam
	{
		simulation = "particles";
		type = "SR_LasFusil_Beam";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = -1;
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
			class plasma_heat_and_overcharge_main {
				//file = "SR_Arsenal\functions\fn_plasma_heat_and_overcharge_main.sqf";
			};
			class plasma_heat_and_overcharge_init {
				postInit 	= 1;
				//file = "SR_Arsenal\functions\fn_plasma_heat_and_overcharge_init.sqf";
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
class Steve_Ryza_Plasma_01;
class Steve_Ryza_Pistol;
class TIOW_SM_Combi_Bolter_1;
class TIOW_SM_Combi_Bolter_2;
class TIOW_SM_Combi_Bolter_3;
class STEVE_TigComb_Plasma_1_New;
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
		plasmaCoolingMult = 1.2;
		picture="\TIOW_SMWep\Icon\Ragefire_ca.paa";
		magazineWell[]={};
		baseWeapon="SR_Master_Crafted_Ragefire_PlasmaGun_1";
		magazines[]=
		{
			"TIOW_SM_Plasmagun_Mag"
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
			"Overcharge",
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
		class Overcharge: Mode_SemiAuto
		{
			reloadTime=2;
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
					"SR_Arsenal\sound\Overcharge.wss",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
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
					"SR_Arsenal\sound\Overcharge.wss",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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




//	class SR_LasFusil: TIOW_GodwynBoltgun_1
//	{
//		scope = 2;
//		scopecurator = 2;
//		scopearsenal = 2;
//		author = "Tengu";
//		displayName = "[TSR] LasFusil";
//		picture = "TIOW_Dos_Weps\Textures\Las_icon_ca.paa";
//		model = "TIOW_Dos_Weps\Models\SM_Las.p3d";
//		descriptionShort = "LasFusil Sniper Rifle";
//		hiddenSelections[] = {"camo"};
//		hiddenSelectionsTextures[] = {"SR_Arsenal\textures\SR_LasFusil.paa"};
//		reloadAction = "WH_Bolter_reload_SM";
//		reloadMagazineSound[] = {"WBK_Improved40KWeapons\sounds\Bolter_reload.wav",2.51189,1,25};
//		reloadSound[] = {"WBK_Improved40KWeapons\sounds\Bolter_reload.wav",2.51189,1,25};
//		rightHandIKCurve[] = {1};
//		LeftHandIKCurve[] = {1};
//		handAnim[] = {"SpaceMarine_ManSkeleton","TIOW_Dos_Weps\anim\LasCan.rtm"};
//		magazines[] = {"SR_LasFusil_Mag"};
//		class GunParticles
//		{
//			class FirstEffect
//			{
//				effectName = "MachineGunCloud";
//				positionName = "nabojnicestart";
//				directionName = "nabojniceend";
//			};
//		};
//		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
//		class Single: Mode_SemiAuto
//		{
//			reloadTime = 3;
//			recoil = "recoil_pistol_light";
//			recoilProne = "recoil_prone_pistol_light";
//			dispersion = 0.00035;
//			minRange = 2;
//			minRangeProbab = 0.5;
//			midRange = 200;
//			midRangeProbab = 0.7;
//			maxRange = 400;
//			maxRangeProbab = 0.3;
//			soundContinuous = 0;
//			soundBurst = 0;
//			sounds[] = {"StandardSound"};
//			class BaseSoundModeType
//			{
//				closure1[] = {"\SR_Arsenal\sound\LasFusil.wss",0.316228,1,10};
//				closure2[] = {"\SR_Arsenal\sound\LasFusil.wss",0.316228,1.1,10};
//				soundClosure[] = {};
//			};
//			class StandardSound: BaseSoundModeType
//			{
//				soundSetShot[] = {"SR_LasFusil_Shot_SoundSet"};
//				begin1[] = {"\SR_Arsenal\sound\LasFusil.wss",3.16228,1,1800};
//				begin2[] = {"\SR_Arsenal\sound\LasFusil.wss",3.16228,1,1800};
//				begin3[] = {"\SR_Arsenal\sound\LasFusil.wss",3.16228,1,1800};
//				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
//				class SoundTails
//				{
//					class TailInterior
//					{
//						sound[] = {"\SR_Arsenal\sound\LasFusil.wss",2.23872,1,1800};
//						frequency = 1;
//						volume = "interior";
//					};
//					class TailTrees
//					{
//						sound[] = {"\SR_Arsenal\sound\LasFusil.wss",1,1,1800};
//						frequency = 1;
//						volume = "(1-interior/1.4)*trees";
//					};
//					class TailForest
//					{
//						sound[] = {"\SR_Arsenal\sound\LasFusil.wss",1,1,1800};
//						frequency = 1;
//						volume = "(1-interior/1.4)*forest";
//					};
//					class TailMeadows
//					{
//						sound[] = {"\SR_Arsenal\sound\LasFusil.wss",1,1,1800};
//						frequency = 1;
//						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
//					};
//					class TailHouses
//					{
//						sound[] = {"\SR_Arsenal\sound\LasFusil.wss",1,1,1800};
//						frequency = 1;
//						volume = "(1-interior/1.4)*houses";
//					};
//				};
//			};
//		};
//		class single_medium_optics1: Single
//		{
//			requiredOpticType = 1;
//			showToPlayer = 0;
//			minRange = 2;
//			minRangeProbab = 0.2;
//			midRange = 450;
//			midRangeProbab = 0.7;
//			maxRange = 500;
//			maxRangeProbab = 0.2;
//			aiRateOfFire = 2.6;
//			aiRateOfFireDistance = 500;
//		};
//		class single_far_optics2: single_medium_optics1
//		{
//			requiredOpticType = 2;
//			showToPlayer = 0;
//			minRange = 500;
//			minRangeProbab = 0.1;
//			midRange = 750;
//			midRangeProbab = 0.6;
//			maxRange = 1000;
//			maxRangeProbab = 0.05;
//			aiRateOfFire = 3.75;
//			aiRateOfFireDistance = 1000;
//		};
//		aiDispersionCoefY = 3;
//		aiDispersionCoefX = 2;
//	};


	class SR_LasFusil: TIOW_GodwynBoltgun_1
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "[TSR] LasFusil";
		//picture = "Steve_30K_weps\Icons\Las_Can_Icon.paa";
		//model = "Steve_30K_weps\Cannons\Models\Las_Cannon.p3d";
		picture = "TIOW_Dos_Weps\Textures\Las_icon_ca.paa";
		model = "TIOW_Dos_Weps\Models\SM_Las.p3d";
		baseWeapon = "SR_LasFusil";
		descriptionShort = "[TSR] LasFusil Sniper";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SR_Arsenal\textures\SR_LasFusil.paa"};
		magazines[] = {"SR_LasFusil_Mag"};
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 3;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			dispersion = 0.00035;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"\SR_Arsenal\sound\LasFusil.wss",0.316228,1,10};
				closure2[] = {"\SR_Arsenal\sound\LasFusil.wss",0.316228,1.1,10};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SR_LasFusil_Shot_SoundSet","SR_LasFusil_Tail_SoundSet","SR_LasFusil_InteriorTail_SoundSet"};
				begin1[] = {"\SR_Arsenal\sound\LasFusil.wss",3.16228,1,1800};
				begin2[] = {"\SR_Arsenal\sound\LasFusil.wss",3.16228,1,1800};
				begin3[] = {"\SR_Arsenal\sound\LasFusil.wss",3.16228,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"\SR_Arsenal\sound\LasFusil.wss",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"\SR_Arsenal\sound\LasFusil.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"\SR_Arsenal\sound\LasFusil.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"\SR_Arsenal\sound\LasFusil.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"\SR_Arsenal\sound\LasFusil.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
			aiRateOfFire = 2.6;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 750;
			midRangeProbab = 0.6;
			maxRange = 1000;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3.75;
			aiRateOfFireDistance = 1000;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
	};
	class SR_Ragefire_Plasma_Gun : TIOW_SM_Ragefire_PlasmaGun
	{
		displayName = "[TSR] Ragefire Plasma Gun";
		baseWeapon = "SR_Ragefire_Plasma_Gun";
		plasmaCoolingMult = 1;
		magazines[]=
		{
			"TIOW_SM_Plasmagun_Mag"
		};
		modes[]=
		{
			"Single",
			"Overcharge",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Overcharge: Mode_SemiAuto
		{
			reloadTime=2;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			textureType="fastAuto";
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
					"SR_Arsenal\sound\Overcharge.wss",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
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
					"SR_Arsenal\sound\Overcharge.wss",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
	};
	class SR_Ryza_Plasma_Gun : Steve_Ryza_Plasma_01
	{
		displayName = "[TSR] Ryza Thunderbolt Plasmagun";
		baseWeapon = "SR_Ryza_Plasma_Gun";
		plasmaCoolingMult = 1;
		magazines[]=
		{
			"TIOW_SM_Plasmagun_Mag"
		};
		modes[]=
		{
			"Single",
			"Overcharge",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Overcharge: Mode_SemiAuto
		{
			reloadTime=2;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			textureType="fastAuto";
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
					"SR_Arsenal\sound\Overcharge.wss",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
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
					"SR_Arsenal\sound\Overcharge.wss",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
	};
	class SR_Ryza_Plasma_Pistol : Steve_Ryza_Pistol
	{
		displayName = "[TSR] Ryza Plasma Pistol (Banner/Shield)";
		baseWeapon = "SR_Ryza_Plasma_Pistol";
		plasmaCoolingMult = 1;
		magazines[]=
		{
			"Steve_SM_PlasmaPistol_Mag"
		};
		modes[]=
		{
			"Single",
			"Overcharge",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Overcharge: Mode_SemiAuto
		{
			reloadTime=2;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			textureType="fastAuto";
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
					"SR_Arsenal\sound\Overcharge.wss",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
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
					"SR_Arsenal\sound\Overcharge.wss",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
							"SR_Arsenal\sound\Overcharge.wss",
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
	};
	class SR_Combi_Bolter_1 : TIOW_SM_Combi_Bolter_1
	{
		displayName = "[TSR] Bolter Combi-Plasma (Black)";
		baseWeapon = "SR_Combi_Bolter_1";
		plasmaCoolingMult = 0.8;
		class TIOW_SM_Under_Plas_1: SR_Ragefire_Plasma_Gun
		{
			displayName="Combi-Plasma";
			scope=1;
			scopeCurator=1;
			scopeArsenal=1;
			useModelOptics=1;
			muzzlePos="usti granatometu";
			muzzleEnd="konec granatometu";
			cameraDir="UGL look";
			memoryPointCamera="UGL eye";
			magazines[]=
			{
				"TIOW_CombiPlas_Mag"
			};
		};
	};
	class SR_Combi_Bolter_2 : TIOW_SM_Combi_Bolter_2
	{
		displayName = "[TSR] Bolter Combi-Plasma (Red)";
		baseWeapon = "SR_Combi_Bolter_2";
		plasmaCoolingMult = 0.8;
		class TIOW_SM_Under_Plas_1: SR_Ragefire_Plasma_Gun
		{
			displayName="Combi-Plasma";
			scope=1;
			scopeCurator=1;
			scopeArsenal=1;
			useModelOptics=1;
			muzzlePos="usti granatometu";
			muzzleEnd="konec granatometu";
			cameraDir="UGL look";
			memoryPointCamera="UGL eye";
			magazines[]=
			{
				"TIOW_CombiPlas_Mag"
			};
		};
	};
	class SR_Combi_Bolter_3 : TIOW_SM_Combi_Bolter_3
	{
		displayName = "[TSR] Bolter Combi-Plasma (White)";
		baseWeapon = "SR_Combi_Bolter_3";
		plasmaCoolingMult = 0.8;
		class TIOW_SM_Under_Plas_1: SR_Ragefire_Plasma_Gun
		{
			displayName="Combi-Plasma";
			scope=1;
			scopeCurator=1;
			scopeArsenal=1;
			useModelOptics=1;
			muzzlePos="usti granatometu";
			muzzleEnd="konec granatometu";
			cameraDir="UGL look";
			memoryPointCamera="UGL eye";
			magazines[]=
			{
				"TIOW_CombiPlas_Mag"
			};
		};
	};
	class SR_Tig_Combi_Bolter : STEVE_TigComb_Plasma_1_New
	{
		displayName = "[TSR] Tigrus Pattern Combi-Plasma";
		baseWeapon = "SR_Tig_Combi_Bolter";
		plasmaCoolingMult = 0.8;
		class Steve_30k_Under_Plasma: SR_Ryza_Plasma_Gun
		{
			displayName="Combi-Plasma";
			scope=1;
			scopeCurator=1;
			scopeArsenal=1;
			useModelOptics=1;
			muzzlePos="usti granatometu";
			muzzleEnd="konec granatometu";
			cameraDir="UGL look";
			memoryPointCamera="UGL eye";
			magazines[]=
			{
				"TIOW_CombiPlas_Mag"
			};
			magazineWell[]=
			{
				""
			};
		};
	};


// textureType="fastAuto";


	
};

class TIOW_SM_Plasmagun_Mag;
class Steve_SM_PlasmaPistol_Mag;
class TIOW_CombiPlas_Mag;
class Steve_30k_CombiPlas_Mag;
class TIOW_Melta_Ammo;
class Steve_30k_Lascutter_Round;
class TIOW_LemanRuss_Lascannon_Rnd;
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
	class SR_LasFusil_Rnd: TIOW_LemanRuss_Lascannon_Rnd
	{
		hit = 100;
		explosionEffects = "TIOW_BoltRoundRoundExplosion";
		effectFly = "SR_LasFusil_Beam";
		indirectHit = 1;
		indirectHitRange = 0.4;
		caliber = 3;
	};
	class Sh_120mm_HE;
	class SR_PlasmagunRound: Sh_120mm_HE // B_20mm
	{
		hit = 80;
		typicalSpeed = 1050;
		indirectHit = 25;
		indirectHitRange = 2;
		warheadName = "HE";
		caliber = 1.4;
		explosive = 0.65;
		ACE_caliber = 20;
		ACE_bulletLength = 102;
		ACE_bulletMass = 102.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1050};
		ACE_barrelLengths[] = {728.98};
	};
	class SR_Overcharge_PlasmagunRound: SR_PlasmagunRound // B_40mm_APFSDS
	{
		// Origin : 350
		hit = 240; // hit - indirectHit = actual hit
		// Origin : 200
		indirectHit = 80;
		// Origin : 2.5
		indirectHitRange = 5;
		typicalSpeed = 1140;
		warheadName = "AP";
		caliber = 8;
		explosive = 0.65;
		ACE_caliber = 40;
		ACE_bulletLength = 365;
		// Origin : 930
		ACE_bulletMass = 300;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1140};
		ACE_barrelLengths[] = {728.98};
	};
	class SR_Overcharge_PlasmapistolRound: SR_PlasmagunRound // B_40mm_APFSDS
	{
		// Origin : 350
		hit = 200; // hit - indirectHit = actual hit
		// Origin : 200
		indirectHit = 60;
		// Origin : 2.5
		indirectHitRange = 3;
		typicalSpeed = 1140;
		warheadName = "AP";
		caliber = 8;
		explosive = 0.65;
		ACE_caliber = 40;
		ACE_bulletLength = 365;
		// Origin : 930
		ACE_bulletMass = 250;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1140};
		ACE_barrelLengths[] = {728.98};
	};
};

class TIOW_Meltagun_Mag;
class Steve_Trig_BoltPistolMag;
class Steve_Phob_BoltPistolMag;
class Steve_30k_lascutter_Mag;
class TIOW_30rnd_GodwynBoltgunMag;
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
	class SR_LasFusil_Mag: TIOW_30rnd_GodwynBoltgunMag
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "[TSR] LasFusil Flask";
		count = 15;
		mass = 25;
		descriptionShort = "[TSR] LasFusil Flask";
		picture = "\TIOW_SMWep\Icon\RagefireMag_ca.paa";
		ammo = "SR_LasFusil_Rnd";
		initSpeed = 1000;
		maxLeadSpeed = 150;
		tracersEvery = 1;
	};
};

class cfgMods
{
	author="Tengu";
	timepacked="1675254557";
};
