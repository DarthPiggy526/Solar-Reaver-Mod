class CfgPatches
{
	class TSR_Factions_Tau
	{
		requiredAddons[]=
		{
			"SR_Core"
		};
		requiredVersion=0.1;
		units[]=
		{
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
    name="OPFOR";
    class TSR_Tau_Viorla
    {
      name="Tau - Vior'la";

      class Infantry
      {
        name="Infantry";

        class TSR_Tau_ViorLa_Firewarrior_Squad
        {
          name="Fire Warrior Squad";
          faction="TSR_Tau_-_Viorla";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="TIOW_Strike_VL_Lead_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
          class Unit7
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={20,-20,0};
          };
          class Unit8
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={-20,-20,0};
          };
          class Unit9
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={25,-25,0};
          };
        };
        class TSR_Tau_ViorLa_Pathfinder_Squad
        {
          name="Pathfinder Squad";
          faction="TSR_Tau_-_Vior'la";
          icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Lead_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Ion_O";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_O";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_O";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_O";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_O";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
          class Unit7
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_O";
            rank="PRIVATE";
            position[]={20,-20,0};
          };
          class Unit8
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_O";
            rank="PRIVATE";
            position[]={-20,-20,0};
          };
          class Unit9
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_O";
            rank="PRIVATE";
            position[]={25,-25,0};
          };
        };
        class TSR_Tau_ViorLa_Breacher_Squad
        {
          name="Breacher Squad";
          faction="TSR_Tau_-_Vior'la";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="TIOW_Breacher_VL_Lead_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_Breacher_VL_Exp_O";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_Breacher_VL_Exp_O";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_Breacher_VL_Exp_O";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_Breacher_VL_O";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="TIOW_Breacher_VL_O";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="TIOW_Breacher_VL_O";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
          class Unit7
          {
            side=0;
            vehicle="TIOW_Breacher_VL_O";
            rank="PRIVATE";
            position[]={20,-20,0};
          };
          class Unit8
          {
            side=0;
            vehicle="TIOW_Breacher_VL_O";
            rank="PRIVATE";
            position[]={-20,-20,0};
          };
          class Unit9
          {
            side=0;
            vehicle="TIOW_Breacher_VL_O";
            rank="PRIVATE";
            position[]={25,-25,0};
          };
        };
        class TSR_Tau_ViorLa_Veteran_Squad
        {
          name="Veteran Squad";
          faction="TSR_Tau_-_Vior'la";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="TIOW_Strike_VL_Officer_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Ion_O";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Ion_O";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
          class Unit7
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={20,-20,0};
          };
          class Unit8
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={-20,-20,0};
          };
          class Unit9
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={25,-25,0};
          };
        };
        class TSR_Tau_ViorLa_Heavy_Weapon_Squad
        {
          name="Heavy Weapon Squad";
          faction="TSR_Tau_-_Vior'la";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Lead_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Ion_O";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Ion_O";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Ion_O";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Ion_O";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Ion_O";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Ion_O";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
          class Unit7
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={20,-20,0};
          };
          class Unit8
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={-20,-20,0};
          };
          class Unit9
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={25,-25,0};
          };
        };
        class TSR_Tau_ViorLa_Guevesa_Squad
        {
          name="Guevesa Squad";
          faction="TSR_Tau_-_Vior'la";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="IC_CAD_GuevesaW_B";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="IC_CAD_GuevesaW_B";
            rank="PRIVATE";
            position[]={5,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="IC_CAD_GuevesaW_B";
            rank="PRIVATE";
            position[]={-5,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="IC_CAD_GuevesaW_B";
            rank="PRIVATE";
            position[]={10,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="IC_CAD_GuevesaW_B";
            rank="PRIVATE";
            position[]={-10,-10,0};
          };
          class Unit5
          {
            side=0;
            vehicle="IC_CAD_GuevesaW_B";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit6
          {
            side=0;
            vehicle="IC_CAD_GuevesaW_B";
            rank="PRIVATE";
            position[]={-15,-15,0};
          };
          class Unit7
          {
            side=0;
            vehicle="IC_CAD_GuevesaW_B";
            rank="PRIVATE";
            position[]={20,-20,0};
          };
          class Unit8
          {
            side=0;
            vehicle="IC_CAD_GuevesaW_B";
            rank="PRIVATE";
            position[]={-20,-20,0};
          };
          class Unit9
          {
            side=0;
            vehicle="IC_CAD_GuevesaW_B";
            rank="PRIVATE";
            position[]={25,-25,0};
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
        class TSR_Tau_ViorLa_Devilfish_Platoon
        {
          name="Devilfish Platoon";
          faction="TSR_Tau_-_Vior'la";
          icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="TIOW_Tau_Devilfish_VL_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_Tau_Devilfish_VL_O";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_Tau_Devilfish_VL_O";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_Tau_Devilfish_VL_O";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class TSR_Tau_ViorLa_Devilfish_with_Squad
        {
          name="Devilfish with Squad";
          faction="TSR_Tau_-_Vior'la";
          icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="TIOW_Tau_Devilfish_VL_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_Strike_VL_Lead_O";
            rank="PRIVATE";
            position[]={15,0,0};
          };
          class Unit2
          {
            side=0;
            vehicle="TIOW_Strike_VL_Exp_O";
            rank="PRIVATE";
            position[]={15,-5,0};
          };
          class Unit3
          {
            side=0;
            vehicle="TIOW_Strike_VL_Exp_O";
            rank="PRIVATE";
            position[]={15,-10,0};
          };
          class Unit4
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Ion_O";
            rank="PRIVATE";
            position[]={15,-15,0};
          };
          class Unit5
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={20,-0,0};
          };
          class Unit6
          {
            side=0;
            vehicle="TIOW_Pathfinder_VL_Rail_O";
            rank="PRIVATE";
            position[]={20,-5,0};
          };
          class Unit7
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={20,-10,0};
          };
          class Unit8
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={20,-15,0};
          };
          class Unit9
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={25,-0,0};
          };
          class Unit10
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={25,-5,0};
          };
          class Unit11
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={25,-10,0};
          };
          class Unit12
          {
            side=0;
            vehicle="TIOW_Strike_VL_O";
            rank="PRIVATE";
            position[]={25,-15,0};
          };
        };
      };
      class Armored
      {
        name="Armored";
        class TSR_Tau_ViorLa_Hammerhead_Platoon
        {
          name="Hammerhead Platoon";
          faction="TSR_Tau_-_Vior'la";
          icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="TIOW_Tau_Hammerhead_VL_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_Tau_Hammerhead_VL_O";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class TSR_Tau_ViorLa_Burstcannon_Platoon
        {
          name="Burstcannon Platoon";
          faction="TSR_Tau_-_Vior'la";
          icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="TIOW_Tau_Hammerhead_Twinburst_VL_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_Tau_Hammerhead_Twinburst_VL_O";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class TSR_Tau_ViorLa_Ion_cannon_Platoon
        {
          name="Ion cannon Platoon";
          faction="TSR_Tau_-_Vior'la";
          icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="TIOW_Tau_Hammerhead_Ioncannon_VL_O";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="TIOW_Tau_Hammerhead_Ioncannon_VL_O";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class SpecOps
      {
        name="Special Forces";

      };
      class Support
      {
        name="Support Infantry";

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
