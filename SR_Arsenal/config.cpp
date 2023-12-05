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
			"Steve_30K_weps",
			"Steve_30K_weps_New",
			"Steve_30K_weps2",
			"Steve_30k_weps3",
			"TIOW_IQ_40k_weapons",
			"TIOW_Dos_Weps",
			"A3_Data_F",
			"A3_Characters_F",
			"A3_Anims_F",
			"Project_Primaris_Dos_Weapons",
			"Seb_SM_Melee_Mod"
		};
		weapons[]=
		{
			"SR_Master_Crafted_Mars_HeavyBolter_1",
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
            "SR_Relic_Plasma_Gun_1",
            "SR_Relic_Plasma_Gun_2",
            "SR_Relic_Plasma_Gun_3",
            "SR_Relic_Plasma_Gun_4",
            "SR_Relic_Plasma_Gun_5",
			"SR_Ryza_Plasma_Gun_01",
			"SR_Ryza_Plasma_Gun_02",
			"SR_Ryza_Plasma_Gun_03",
			"SR_Ryza_Plasma_Gun_04",
			"SR_Ryza_Plasma_Pistol",
            "SR_Ryza_Plasma_Pistol_Banner",
			"SR_Combi_Bolter_1",
			"SR_Combi_Bolter_2",
			"SR_Combi_Bolter_3",
			
			"Throw"
		};
		magazines[]=
		{
			"SR_Meltagun_Mag",
			"Steve_30k_lascutter_Mag",
			"SR_LasFusil_Mag",
			
			"SR_SM_Grav_Mag",
			"SR_Volkite_Cav_Mag",
			"SR_Volkite_Charger_Mag",
			"SR_Volkite_Can_Mag_1",
			"SR_Volkite_PistolMag",
			
			"SR_Mag_Rad_Grenade",
			"SR_Mag_Stasis_Grenade",
			"SR_Mag_Tanglefoot_Grenade",
			"SR_Mag_Antigrav_Grenade",
			"SR_Mag_Vortex_Grenade"
		};
		ammo[]=
		{
			"SR_Meltagun_Ammo",
			"SR_Lascutter_Round",
			"SR_LasFusil_Rnd",
			"SR_PlasmagunRound",
			"SR_Overcharge_PlasmagunRound",
			"SR_Overcharge_PlasmapistolRound",
			
			"SR_SM_Grav_Mag_Rnd",
			"SR_Volkite_Cav_Rnd",
			"SR_Volkite_Charger_Rnd",
			"SR_Volkite_Culv_Rnd",
			
			"SR_Ammo_Rad_Grenade",
			"SR_Ammo_Stasis_Grenade",
			"SR_Ammo_Tanglefoot_Grenade",
			"SR_Ammo_Antigrav_Grenade",
			"SR_Ammo_Vortex_Grenade"
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
		volumeFactor = 1;
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
		volumeFactor = 0.6;
	};
	class EC_BolterDeep_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"EC_BolterDeep_tailInterior_SoundShader"
		};
		volumeFactor = 0.6;
	};
	class EC_BolterDeep_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"EC_BolterDeep_Closure_SoundShader",
			"EC_BolterDeep_silencerShot_SoundShader"
		};
		volumeFactor = 0.6;
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
		volumeFactor = 0.4;
	};
	class EC_BolterDeep_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"EC_BolterDeep_silencerTailInterior_SoundShader"
		};
		volumeFactor = 0.4;
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
			class grav_slow_main {
				//file = "SR_Arsenal\functions\fn_grav_slow_main.sqf";
			};
			class grav_slow_init {
				postInit 	= 1;
				//file = "SR_Arsenal\functions\fn_grav_slow_init.sqf";
			};
			class grenades_main {
				//file = "SR_Arsenal\functions\fn_grenades_main.sqf";
			};
			class grenades_init {
				postInit 	= 1;
				//file = "SR_Arsenal\functions\fn_grenades_init.sqf";
			};
			class dragonfire_main {
				//file = "SR_Arsenal\functions\fn_dragonfire_main.sqf";
			};
			class dragonfire_init {
				postInit 	= 1;
				//file = "SR_Arsenal\functions\fn_dragonfire_init.sqf";
			};
			class wbk_injector {
				postInit    = 1;
				//file = "SR_Arsenal\functions\fn_wbk_injector.sqf";
			}
		};
	};
};

#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"

class cfgMods
{
	author="Tengu";
	timepacked="1675254557";
};
