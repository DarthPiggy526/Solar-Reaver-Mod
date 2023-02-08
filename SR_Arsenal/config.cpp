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
	class SR_Master_Crafted_GodwynBoltgun_1: TIOW_GodwynBoltgun_1
	{
		displayName="[SR] [Master Crafted] Godwyn Boltgun";
		baseWeapon="SR_Master_Crafted_GodwynBoltgun_1";
		author="Tengu";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		hiddenSelectionsTextures[]=
		{
			"\SR_Arsenal\textures\SR_Master_Crafted_GodwynBoltgun_1_co.paa"
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto",
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
	};
	class SR_EC_GodwynBoltgun: SR_Master_Crafted_GodwynBoltgun_1
	{
		author="Tengu";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[SR] Arkhona Boltgun";
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
		displayName="[SR] Meltagun";
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
		displayName="[SR] MKIII Breacher Shield (Phobos)";
		armor=1000;
		passThrough=0.89999998;
	};
	class SR_Tigrus_Shield: STEVE_TigrusShield_1
	{
		baseWeapon="SR_Tigrus_Shield";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[SR] MKIII Breacher Shield (Tigrus)";
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
		displayName="[SR] MKIII Breacher Shield (Lascutter)";
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
		displayName="[SR] Lascutter";
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
		displayName="[SR] lascutter Round";
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
		displayName="[SR] Master Crafted Phobos Bolt Pistol Magazine 30 Rnd.";
		count=30;
		mass=15;
		descriptionShort="[SR] Master Crafted Phobos Bolt Pistol Magazine 30 Rnd.";
		modelSpecialIsProxy=1;
	};
	class SR_Master_Crafted_Tigrus_BoltPistol_Mag: Steve_Trig_BoltPistolMag
	{
		displayName="[SR] Master Crafted Tigrus Bolt Pistol Magazine 30 Rnd.";
		count=30;
		mass=15;
		descriptionShort="[SR] Master Crafted Tigrus Bolt Pistol Magazine 30 Rnd.";
		modelSpecialIsProxy=1;
	};
	class SR_Meltagun_Mag: TIOW_Meltagun_Mag
	{
		author="Tengu";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		ammo="SR_Meltagun_Ammo";
		displayName="[SR] Meltagun Ammo";
		initSpeed=1500;
		count=5;
		mass=40;
	};
	class SR_Master_Crafted_Meltagun_Mag: SR_Meltagun_Mag
	{
		ammo="SR_Master_Crafted_Meltagun_Ammo";
		displayName="[SR] [Master Crafted] Meltagun Ammo";
	};
	class SR_Lascutter_Mag: Steve_30k_lascutter_Mag
	{
		displayName="[SR] Lasscutter Core";
		descriptionShort="[SR] Lasscutter Core";
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
