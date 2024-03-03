class CfgPatches
{
	class SR_DOS_SKINS_Weapons
	{
		name="SR DOS SKINS Arsenal Mod";
		author="Tengu";
		requiredVersion=0.0020000001;
		requiredAddons[]=
		{
			"SR_Arsenal",
			"TIOW_Dos_SSW",
			"TIOW_IQ_40k_weapons"
		};
		weapons[]=
		{
			"SR_TIOW_IQBoltgun_1",
			"SR_TIOW_IQBoltgun_2",
			"SR_Dos_Con_Base",
			"SR_Dos_Relic_1",
			"SR_Dos_Relic_2",
			"SR_Dos_Relic_3",
			"SR_Dos_Relic_4",
			"SR_Dos_Relic_5",
			"SR_Dos_Relic_6",
			"SR_Relic_Plasma_Gun_1",
            "SR_Relic_Plasma_Gun_2",
            "SR_Relic_Plasma_Gun_3",
            "SR_Relic_Plasma_Gun_4",
            "SR_Relic_Plasma_Gun_5",
			"SR_DOS_SM_MeltaGun_01",
			"SR_Dos_Relc_HB"
			
		};
		magazines[]=
		{
			
		};
		ammo[]=
		{
			
		};
		units[]={};
		
		skipWhenMissingDependencies = 1;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Single;
class Burst;
class FullAuto;

class SR_Single;
class SR_FullAuto;
class SR_fullAutoFast;

// Boltguns
class TIOW_IQBoltgun_1;
class TIOW_IQBoltgun_2;

class Dos_Con_Base;
class Dos_Relic_1;
class Dos_Relic_2;
class Dos_Relic_3;
class Dos_Relic_4;
class Dos_Relic_5;
class Dos_Relic_6;

// Plasma
class Dos_Reli_Plas_1;
class Dos_Reli_Plas_2;
class Dos_Reli_Plas_3;
class Dos_Reli_Plas_4;
class Dos_Reli_Plas_5;

// Melta
class DOS_SM_MeltaGun_01;

// Heavy weapons
class Dos_Relc_HB;

class Cfgweapons
{
	class SR_Dos_Con_Base : Dos_Con_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Dos_Con_Base";
		displayName="[TSR] [Dos] Consecrators Bolter";
	};
	
	class SR_Dos_Relic_1 : Dos_Relic_1
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Dos_Relic_1";
		displayName="[TSR] [Dos] Relic Bolter";
	};
	
	class SR_Dos_Relic_2 : Dos_Relic_2
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Dos_Relic_2";
		displayName="[TSR] [IH] Relic Bolter";
	};
	
	class SR_Dos_Relic_3 : Dos_Relic_3
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Dos_Relic_3";
		displayName="[TSR] [SAL] Relic Bolter";
	};
	
	class SR_Dos_Relic_4 : Dos_Relic_4
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Dos_Relic_4";
		displayName="[TSR] [Con] Relic Bolter";
	};
	
	class SR_Dos_Relic_5 : Dos_Relic_5
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Dos_Relic_5";
		displayName="[TSR] [SDW] Relic Bolter";
	};
	
	class SR_Dos_Relic_6 : Dos_Relic_6
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Dos_Relic_6";
		displayName="[TSR] [LIB] Bolter";
	};
	
	
	
	class SR_Relic_Plasma_Gun_1: Dos_Reli_Plas_1
	{
		displayName = "[TSR] Relic Plasmagun (Purple)";
		baseWeapon = "SR_Relic_Plasma_Gun_1";
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
	
    class SR_Relic_Plasma_Gun_2: Dos_Reli_Plas_2
	{
		displayName = "[TSR] Relic Plasmagun (Orange)";
		baseWeapon = "SR_Relic_Plasma_Gun_2";
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
	
    class SR_Relic_Plasma_Gun_3: Dos_Reli_Plas_3
	{
		displayName = "[TSR] Relic Plasmagun (Blue)";
		baseWeapon = "SR_Relic_Plasma_Gun_3";
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
	
    class SR_Relic_Plasma_Gun_4: Dos_Reli_Plas_4
	{
		displayName = "[TSR] Relic Plasmagun (Green)";
		baseWeapon = "SR_Relic_Plasma_Gun_4";
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
	
    class SR_Relic_Plasma_Gun_5: Dos_Reli_Plas_5
	{
		displayName = "[TSR] Relic Plasmagun (Red)";
		baseWeapon = "SR_Relic_Plasma_Gun_5";
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
	
	
	
	class SR_DOS_SM_MeltaGun_01 : DOS_SM_MeltaGun_01
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_DOS_SM_MeltaGun_01";
		displayName="[TSR] [DOS] Meltagun";
	};
	
	
	
	class SR_Dos_Relc_HB : Dos_Relc_HB
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Dos_Relc_HB";
		displayName="[TSR] [Dos] Relic Mars Pattern Heavy Bolter";
	};
};

