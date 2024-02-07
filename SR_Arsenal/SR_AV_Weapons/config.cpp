class CfgPatches
{
	class SR_AV_Weapons
	{
		name="SR AV Arsenal Mod";
		author="Waagheur";
		requiredVersion=0.0020000001;
		requiredAddons[]=
		{
			"SR_Arsenal",
			"AVPack"
		};
		weapons[]=
		{
			"SR_AV_GodwynBolter",
			"SR_AV_GodwynBolter_Relic",
			"SR_AV_StalkerBolter",
			"SR_AV_StalkerBolter_Relic",
			"SR_AV_RagefirePlasmaGun",
			"SR_AV_RagefirePlasmaGun_Relic",
			"SR_AV_MarsHeavyBolter",
			"SR_AV_MarsHeavyBolter_Relic"
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
class AV_GodwynBolter;
class AV_GodwynBolter_Relic;

// Long Range Boltguns
class AV_StalkerBolter;
class AV_StalkerBolter_Relic;

// Plasma
class AV_RagefirePlasmaGun;
class AV_RagefirePlasmaGun_Relic;

// Heavy weapons
class AV_MarsHeavyBolter;
class AV_MarsHeavyBolter_Relic;

class Cfgweapons
{
	class SR_AV_GodwynBolter : AV_GodwynBolter
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_AV_GodwynBolter";
		displayName="[TSR] [AV] Godwyn Pattern Bolter";
	};
	
	class SR_AV_GodwynBolter_Relic : AV_GodwynBolter_Relic
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_AV_GodwynBolter_Relic";
		displayName="[TSR] [AV] Godwyn Pattern Relic Bolter";
	};
	
	class SR_AV_StalkerBolter : AV_StalkerBolter
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_AV_StalkerBolter";
		displayName="[TSR] [AV] Godwyn Pattern Stalker Bolter";
	};
	
	class SR_AV_StalkerBolter_Relic : AV_StalkerBolter_Relic
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_AV_StalkerBolter_Relic";
		displayName="[TSR] [AV] Godwyn Pattern Relic Stalker Bolter";
	};
	
	class SR_AV_RagefirePlasmaGun : AV_RagefirePlasmaGun
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_AV_RagefirePlasmaGun";
		displayName="[TSR] [AV] Ragefire Plasma Gun";
		plasmaCoolingMult = 0.5;
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
	
	class SR_AV_RagefirePlasmaGun_Relic : AV_RagefirePlasmaGun_Relic
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_AV_RagefirePlasmaGun_Relic";
		displayName="[TSR] [AV] Ragefire Relic Plasma Gun";
		plasmaCoolingMult = 0.5;
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
	
	class SR_AV_MarsHeavyBolter : AV_MarsHeavyBolter
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_AV_MarsHeavyBolter";
		displayName="[TSR] [AV] Mars Pattern Heavy Bolter";
	};
	
	class SR_AV_MarsHeavyBolter_Relic : AV_MarsHeavyBolter_Relic
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_AV_MarsHeavyBolter_Relic";
		displayName="[TSR] [AV] Mars Pattern Relic Heavy Bolter";
	};
};

