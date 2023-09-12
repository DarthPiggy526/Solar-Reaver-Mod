class CfgPatches
{
	class Tengu_Factions_CSM_TS
	{
		requiredAddons[]=
		{
			"TIOWSpaceMarines",
      "Steve_30k_Units",
      "Seb_SM_Melee_Mod"
		};
		requiredVersion=0.1;
		units[]=
		{
      "Tengu_WBKMelee_TS_Hammer",
      "Tengu_WBKMelee_TS_CSwordShd",
      "Tengu_WBKMelee_TS_CSword",
      "Tengu_WBKMelee_TS_PSword"
		};
		weapons[]=
		{
		};
	};
};

class cfgGroups
{  
  class EAST
  {
    class TIOW_ChaosSpaceMarines
    {
      class TIOW_CSM_TS_Squads
      {
        class Tengu_Additional_Units_O_TS_Breacher_Squad
        {
          name="Breacher Squad";
          faction="TIOW_CSM_TS_Squads";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="STEVE_30k_MK3_Sheild_TS";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="STEVE_30k_MK4_Sheild_TS";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="STEVE_30k_MK4_Sheild_TS";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="STEVE_30k_MK4_Sheild_TS";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="STEVE_30k_MK4_Sheild_TS";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
        };
        class Tengu_Additional_Units_O_TS_Chosen
        {
          name="Chosen";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_Sergeant_TS_1";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact_TS";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact_TS";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_Plasmagunner_TS_5";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="STEVE_30k_MK4_Rotor_TS";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact_TS";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact2_TS";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
          class Unit7
          {
            side=0;
            vehicle="STEVE_30k_MK4_Melt_TS";
            rank="PRIVATE";
            position[]={20,-20,0};
          };
          class Unit8
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact_TS";
            rank="PRIVATE";
            position[]={-20,-20,0};
          };
          class Unit9
          {
            side=0;
            vehicle="TIOW_Tactical_TS_7";
            rank="PRIVATE";
            position[]={25,-25,0};
          };
        };
        class Tengu_Additional_Units_O_TS_Chosen_CQC
        {
          name="Chosen CQC";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_Sergeant_TS_1";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="STEVE_30k_MK3_HF_TS";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="STEVE_30k_MK3_HF_TS";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact_TS";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact_TS";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact_TS";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact_TS";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
          class Unit7
          {
            side=0;
            vehicle="TIOW_Meltagunner_TS_3";
            rank="PRIVATE";
            position[]={20,-20,0};
          };
          class Unit8
          {
            side=0;
            vehicle="STEVE_30k_MK4_Rotor_TS";
            rank="PRIVATE";
            position[]={-20,-20,0};
          };
          class Unit9
          {
            side=0;
            vehicle="TIOW_Tactical_TS_1_Chaos";
            rank="PRIVATE";
            position[]={25,-25,0};
          };
        };
        class Tengu_Additional_Units_O_TS_Chosen_Volkite
        {
          name="Chosen Volkite";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_Sergeant_TS_1";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="STEVE_30k_MK4_Volkite_TS";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="STEVE_30k_MK4_Volkite_TS";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="STEVE_30k_MK3_Volkite_TS";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
        };
        class Tengu_Additional_Units_O_TS_Armoured_Column
        {
          name="Armoured Column";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_SM_Predator_TS";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_SM_Razorback_TS";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_SM_Razorback_TS";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
        class Tengu_Additional_Units_O_TS_Rhino_w_Troops
        {
          name="Rhino w/ Troops";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_SM_Rhino_TS";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
					class Unit1
					{
						side = 0;
						vehicle = "TIOW_Sergeant_TS_1";
						rank = "SERGEANT";
						position[] = {15,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TIOW_Meltagunner_TS_3";
						rank = "CORPORAL";
						position[] = {15,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TIOW_HeavyBolter_TS_4";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_5";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_4";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_3";
						rank = "PRIVATE";
						position[] = {20,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_1_Chaos";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_1_Chaos";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_1";
						rank = "PRIVATE";
						position[] = {20,-15,0};
					};
        };
        class Tengu_Additional_Units_O_TS_Assault_Bikes
        {
          name="Assault Bikes";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_Bike_TS_3";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_Bike_TS_3";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_Bike_TS_3";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_Bike_TS_3";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class Tengu_Additional_Units_O_TS_Drop_Pod_Filled
        {
          name="Drop Pod (Filled)";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_Drop_Pod_TS";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
					class Unit1
					{
						side = 0;
						vehicle = "TIOW_Sergeant_TS_1";
						rank = "SERGEANT";
						position[] = {15,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TIOW_Meltagunner_TS_3";
						rank = "CORPORAL";
						position[] = {15,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TIOW_HeavyBolter_TS_4";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_5";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_4";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_3";
						rank = "PRIVATE";
						position[] = {20,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_1_Chaos";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_1_Chaos";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "TIOW_Tactical_TS_1";
						rank = "PRIVATE";
						position[] = {20,-15,0};
					};
        };
        class Tengu_Additional_Units_O_TS_Land_Speeder_HB
        {
          name="Land Speeder (HB)";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_TS_Storm";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_HeavyBolter_TS_4";
            rank="PRIVATE";
            position[]={10,0,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_HeavyBolter_TS_4";
            rank="PRIVATE";
            position[]={10,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_HeavyBolter_TS_4";
            rank="PRIVATE";
            position[]={15,0,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_HeavyBolter_TS_4";
            rank="PRIVATE";
            position[]={15,-5,0};
          };
        };
        class Tengu_Additional_Units_O_TS_Recon_Squad_Small
        {
          name="Recon Squad (Small)";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
          class Unit0
          {
            side=0;
            vehicle="STEVE_30k_MK3_Tact2_TS";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact2_TS";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact2_TS";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
        };
        class Tengu_Additional_Units_O_TS_Recon_Squad
        {
          name="Recon Squad";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
          class Unit0
          {
            side=0;
            vehicle="STEVE_30k_MK3_Tact2_TS";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact2_TS";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact2_TS";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact2_TS";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact2_TS";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="STEVE_30k_MK4_Tact2_TS";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
        };
        class Tengu_Additional_Units_O_TS_Havoc_Squad_HB
        {
          name="Havoc Squad (HB)";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
          class Unit0
          {
            side=0;
            vehicle="STEVE_30k_MK4_SgtPlas_TS";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_HeavyBolter_TS_4";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_HeavyBolter_TS_4";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_HeavyBolter_TS_4";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_Tactical_TS_1";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="TIOW_Tactical_TS_1";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
        };
        class Tengu_Additional_Units_O_TS_Havoc_Squad_Mixed
        {
          name="Havoc Squad (Mixed)";
          faction="TIOW_CSM_TS_Squads";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_support.paa";
          class Unit0
          {
            side=0;
            vehicle="STEVE_30k_MK4_SgtPlas_TS";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_HeavyBolter_TS_4";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_Tactical_TS_1";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_Tactical_TS_1";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="STEVE_30k_MK4_Las_TS";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="STEVE_30k_MK3_AutoCan_TS";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
        };
      };
    };
  };
};


class WBK_melee_chaos_chaplain;
class cfgVehicles {
	class Tengu_WBKMelee_TS_Hammer: WBK_melee_chaos_chaplain
	{
		faction = "TIOW_ChaosSpaceMarines";
		editorSubcategory = "WBK_MeleeAi_SPACE_MARINES";
		author = "WebKnight";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "(Thousand Sons) Captain, Thunder Hammer";
		cost = 200000;
		camouflage = 1.5;
		sensitivity = 5;
		threat[] = {1,1,0.8};
		uniformClass = "TIOW_Mk4PowerArmor_1_TS";
		backpack = "TIOW_Chaos2Powerpack_TS";
		weapons[] = {"Web_Melee_ThunderHammer_chaos","Throw","Put"};
		magazines[] = {};
		items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
		linkedItems[] = {"TIOW_ChaosLimbs_TS","TIOW_MK4Helmet_TS","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
	};
	class Tengu_WBKMelee_TS_CSwordShd: Tengu_WBKMelee_TS_Hammer
	{
		displayName = "(Thousand Sons) Shield, Chainsword";
		weapons[] = {"Web_Melee_Chain_Test","Throw","Put"};
	};
	class Tengu_WBKMelee_TS_CSword: Tengu_WBKMelee_TS_Hammer
	{
		displayName = "(Thousand Sons) Chainsword";
		weapons[] = {"Web_Melee_Chain_Sword_5","Throw","Put"};
	};
	class Tengu_WBKMelee_TS_PSword: Tengu_WBKMelee_TS_Hammer
	{
		displayName = "(Thousand Sons) Power sword";
		weapons[] = {"Web_Melee_PS_4","Throw","Put"};
	};
};