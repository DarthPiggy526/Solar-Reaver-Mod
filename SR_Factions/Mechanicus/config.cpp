class CfgPatches
{
	class TSR_Factions_Mechanicus
	{
		requiredAddons[]=
		{
			"SR_Core",
            "TIOW_Admech"
		};
		requiredVersion=0.1;
		units[]=
		{
            "TIOW_AM_Techpriest_O",
            "TIOW_AM_Ranger_O",
            "TIOW_AM_Ranger_Alpha_O",
            "TIOW_AM_Ranger_Arquebus_O",
            "TIOW_AM_Vanguard_O",
            "TIOW_AM_Vanguard_Plasma_O",
            "TIOW_AM_Vanguard_Rifle_O",
            "TIOW_AM_Vanguard_Alpha_O",
            "O_ScorpiusDisintegrator_base_O",
            "O_ScorpiusBelleros_base_O",
            "Archaeopter_O",
            "ArchaeopterFusilave_O"
		};
		weapons[]=
		{
		};
	};
};


class CfgFactionClasses
{
	class TSR_AdMech_O
	{
		displayName = "Adeptus Mechanicus";
		priority = 1;
		side = 0;
	};
};

class cfgVehicles{
    class TIOW_AM_Techpriest;
    class TIOW_AM_Ranger;
    class TIOW_AM_Ranger_Alpha;
    class TIOW_AM_Ranger_Arquebus;
    class TIOW_AM_Vanguard;
    class TIOW_AM_Vanguard_Plasma;
    class TIOW_AM_Vanguard_Rifle;
    class TIOW_AM_Vanguard_Alpha;
    class TIOW_AM_Techpriest_O: TIOW_AM_Techpriest
    	{
    		side = 0;
    		faction = "TSR_AdMech_O";
    	};
    class TIOW_AM_Ranger_O: TIOW_AM_Ranger
    	{
    		side = 0;
    		faction = "TSR_AdMech_O";
    	};
    class TIOW_AM_Ranger_Alpha_O: TIOW_AM_Ranger_Alpha
    	{
    		side = 0;
    		faction = "TSR_AdMech_O";
    	};
    class TIOW_AM_Ranger_Arquebus_O: TIOW_AM_Ranger_Arquebus
    	{
    		side = 0;
    		faction = "TSR_AdMech_O";
    	};
    class TIOW_AM_Vanguard_O: TIOW_AM_Vanguard
    	{
    		side = 0;
    		faction = "TSR_AdMech_O";
    	};
    class TIOW_AM_Vanguard_Plasma_O: TIOW_AM_Vanguard_Plasma
    	{
    		side = 0;
    		faction = "TSR_AdMech_O";
    	};
    class TIOW_AM_Vanguard_Rifle_O: TIOW_AM_Vanguard_Rifle
    	{
    		side = 0;
    		faction = "TSR_AdMech_O";
    	};
    class TIOW_AM_Vanguard_Alpha_O: TIOW_AM_Vanguard_Alpha
    	{
    		side = 0;
    		faction = "TSR_AdMech_O";
    	};


//class O_ScorpiusDisintegrator_base;
//class O_ScorpiusBelleros_base;
//class Archaeopter;
//class ArchaeopterFusilave;
//	class O_ScorpiusDisintegrator_base_O: O_ScorpiusDisintegrator_base
//	{
//        scope = 2;
//		scopeCurator = 2;
//		accuracy = 1000;
//		side = 0;
//		faction = "TSR_AdMech_O";
//		crew = "TIOW_AM_Techpriest_O";
//		typicalCargo[] = {"TIOW_AM_Techpriest_O"};
//	};
//	class O_ScorpiusBelleros_base_O: O_ScorpiusBelleros_base
//	{
//        scope = 2;
//		scopeCurator = 2;
//		accuracy = 0.5;
//		side = 0;
//		faction = "TSR_AdMech_O";
//		crew = "TIOW_AM_Techpriest_O";
//		typicalCargo[] = {"TIOW_AM_Techpriest_O"};
//	};
//	class Archaeopter_O: Archaeopter
//	{
//        scope = 2;
//		scopeCurator = 2;
//		accuracy = 0.5;
//		side = 0;
//		faction = "TSR_AdMech_O";
//		crew = "TIOW_AM_Techpriest_O";
//	};
//	class ArchaeopterFusilave_O: ArchaeopterFusilave
//	{
//        scope = 2;
//		scopeCurator = 2;
//		accuracy = 0.5;
//		side = 0;
//		faction = "TSR_AdMech_O";
//		crew = "TIOW_AM_Techpriest_O";
//	};
//};











class cfgGroups
{  
  class EAST
  {
    name="OPFOR";
    class TSR_AdMech_O
    {
      name="Adeptus Mechanicus";

      class Infantry
      {
        name="Infantry";

        class TSR_MOD_O_Ranger_Squad
        {
          name="Ranger Squad";
          faction="TSR_MOD_TSR_AD_MECH";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_AM_Ranger_Alpha_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_AM_Ranger_O";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_AM_Ranger_O";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_AM_Ranger_O";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_AM_Ranger_O";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="TIOW_AM_Ranger_O";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="TIOW_AM_Ranger_O";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
          class Unit7
          {
            side=0;
            vehicle="TIOW_AM_Ranger_Arquebus_O";
            rank="PRIVATE";
            position[]={20,-20,0};
          };
          class Unit8
          {
            side=0;
            vehicle="TIOW_AM_Ranger_Arquebus_O";
            rank="PRIVATE";
            position[]={-20,-20,0};
          };
        };
        class TSR_MOD_O_Vanguard_Squad
        {
          name="Vanguard Squad";
          faction="TSR_MOD_TSR_AD_MECH";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Alpha_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_O";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_O";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Rifle_O";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Rifle_O";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Plasma_O";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Plasma_O";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
          class Unit7
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_O";
            rank="PRIVATE";
            position[]={20,-20,0};
          };
          class Unit8
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_O";
            rank="PRIVATE";
            position[]={-20,-20,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

      };
      class Mechanized
      {
        name="Mechanized";

      };
      class Armored
      {
        name="Armored";

      };
      class SpecOps
      {
        name="Special Forces";

        class TSR_MOD_O_Sniper_Squad
        {
          name="Sniper Squad";
          faction="TSR_MOD_TSR_AD_MECH";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_AM_Ranger_Alpha_O";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_AM_Ranger_Arquebus_O";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_AM_Ranger_Arquebus_O";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_AM_Ranger_Arquebus_O";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_AM_Ranger_Arquebus_O";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="TIOW_AM_Ranger_Arquebus_O";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="TIOW_AM_Ranger_Arquebus_O";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
        };
      };
      class Support
      {
        name="Support Infantry";

        class TSR_MOD_O_Plasma_Squad
        {
          name="Plasma Squad";
          faction="TSR_MOD_TSR_AD_MECH";
          side=0;
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          class Unit0
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Alpha_O";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Plasma_O";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Plasma_O";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Plasma_O";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Plasma_O";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Plasma_O";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Plasma_O";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
          class Unit7
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Plasma_O";
            rank="PRIVATE";
            position[]={20,-20,0};
          };
          class Unit8
          {
            side=0;
            vehicle="TIOW_AM_Vanguard_Plasma_O";
            rank="PRIVATE";
            position[]={-20,-20,0};
          };
        };
      };
      class Airborne
      {
        name="Airborne";

      };
      class Air
      {
        name="Air";

      };
    };
  };
};

