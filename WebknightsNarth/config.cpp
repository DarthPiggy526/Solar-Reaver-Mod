class CfgPatches
{
	class Webknights_Narth
	{
		name="Webknights_Narth";
		author="Webknight";
		requiredVersion=1.6;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Soft_F"
		};
		units[]=
		{
			""
		};
		weapons[]=
		{
			"WBK_Narth_1"
		};
		magazines[]=
		{
			""
		};
		ammo[]=
		{
			""
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class ToolKit;
	class WBK_Genseed: ToolKit
	{
		scope=1;
		author="WebKnights";
		displayName="Space Marine Gene-Seed";
		picture="\WebknightsNarth\GeneSeedIcon.paa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionShort="Gene-seed is the colloquial term used amongst the Adeptus Astartes for the genetic material that allows for the creation of the superhuman Space Marines.";
		class ItemInfo
		{
			mass=2;
			uniformModel="\A3\weapons_F\ammo\mag_univ.p3d";
			type=620;
			allowedSlots[]={801,701,901};
			scope=2;
		};
	};
	class WBK_OathOfHealing: WBK_Genseed
	{
		displayName="Oath of Healing";
		picture="\WebknightsNarth\OathIcon.paa";
		descriptionShort="Oath of Healing is proving that Apothecary healed another space marine.";
	};
	class WBK_NarthBlood: WBK_Genseed
	{
		scope=2;
		displayName="Vitae Cannister";
		picture="\WebknightsNarth\VitaeCannisterIcon.paa";
		descriptionShort="Vitae Cannister is used in Narthecium to heal self and others. Can be harvested from alive and dead.";
	};
	class NVGoggles;
	class WBK_Narth_1: NVGoggles
	{
		descriptionShort="A Narthecium is a tool of a Space Marine Apothecary's trade, containing implements specially designed for treating the Astartes' genetically-engineered physiology and for performing first aid without having to remove the patient's power armour.";
		IMS_isNarthecium="true";
		displayName="Narthecium I";
		picture="\WebknightsNarth\NartheciumIcon.paa";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		thermalMode[]={2,3};
		modelOptics="-";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WebknightsNarth\textures\BT_Narthecium_Main_01_CO",
			"WebknightsNarth\textures\BT_Narthecium_Glass_CO"
		};
		class ItemInfo
		{
			picture="WebknightsNarth\NartheciumIcon.paa";
			type=616;
			hmdType=0;
			uniformModel="WebknightsNarth\models\Narth.p3d";
			modelOff="WebknightsNarth\models\Narth.p3d";
			mass=4;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"WebknightsNarth\textures\BT_Narthecium_Main_01_CO",
				"WebknightsNarth\textures\BT_Narthecium_Glass_CO"
			};
		};
	};
	class WBK_Narth_2: NVGoggles
	{
		descriptionShort="A Narthecium is a tool of a Space Marine Apothecary's trade, containing implements specially designed for treating the Astartes' genetically-engineered physiology and for performing first aid without having to remove the patient's power armour.";
		IMS_isNarthecium="true";
		displayName="Narthecium II";
		picture="WebknightsNarth\NartheciumIcon.paa";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		thermalMode[]={2,3};
		modelOptics="-";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"WebknightsNarth\textures\SM_Narth_CO"
		};
		class ItemInfo
		{
			picture="WebknightsNarth\NartheciumIcon.paa";
			type=616;
			hmdType=0;
			uniformModel="WebknightsNarth\models\Narth2.p3d";
			modelOff="WebknightsNarth\models\Narth2.p3d";
			mass=4;
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"WebknightsNarth\textures\SM_Narth_CO"
			};
		};
	};
	class WBK_Narth_3: NVGoggles
	{
		descriptionShort="A Human version of a Space Marines Narthecium. Mostly used by Sisters of Battle and Hospitallers.";
		IMS_isNarthecium="true";
		displayName="Human Narthecium I";
		picture="WebknightsNarth\NartheciumIcon.paa";
		visionMode[]=
		{
			"Normal"
		};
		thermalMode[]={2,3};
		modelOptics="-";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"WebknightsNarth\textures\SM_Narth_CO"
		};
		class ItemInfo
		{
			picture="WebknightsNarth\NartheciumIcon.paa";
			type=616;
			hmdType=0;
			uniformModel="WebknightsNarth\models\Narth3.p3d";
			modelOff="WebknightsNarth\models\Narth3.p3d";
			mass=4;
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"WebknightsNarth\textures\SM_Narth_CO"
			};
		};
	};
class CfgSounds
{
	sounds[]={};
	class WBK_Narth_boop
	{
		name="WBK_Narth_boop";
		sound[]=
		{
			"\WebknightsNarth\sounds\boop.wav",
			1,
			1
		};
		titles[]={};
	};
	class WBK_Narth_heal_1
	{
		name="WBK_Narth_heal_1";
		sound[]=
		{
			"\WebknightsNarth\sounds\heal_1.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_heal_2
	{
		name="WBK_Narth_heal_2";
		sound[]=
		{
			"\WebknightsNarth\sounds\heal_2.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_north_hit
	{
		name="WBK_Narth_north_hit";
		sound[]=
		{
			"\WebknightsNarth\sounds\north_hit.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_north_hit_genseed
	{
		name="WBK_Narth_north_hit_genseed";
		sound[]=
		{
			"\WebknightsNarth\sounds\north_hit_genseed.ogg",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_sm_body_movement
	{
		name="WBK_Narth_sm_body_movement";
		sound[]=
		{
			"\WebknightsNarth\sounds\sm_body_movement.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_sm_movement_1
	{
		name="WBK_Narth_sm_movement_1";
		sound[]=
		{
			"\WebknightsNarth\sounds\sm_movement_1.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_sm_movement_2
	{
		name="WBK_Narth_sm_movement_2";
		sound[]=
		{
			"\WebknightsNarth\sounds\sm_movement_2.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_sm_movement_3
	{
		name="WBK_Narth_sm_movement_3";
		sound[]=
		{
			"\WebknightsNarth\sounds\sm_movement_3.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_switched_genseed
	{
		name="WBK_Narth_switched_genseed";
		sound[]=
		{
			"\WebknightsNarth\sounds\switched_genseed.ogg",
			3.1622777,
			1
		};
		titles[]={};
	};
	class WBK_Narth_switched_health
	{
		name="WBK_Narth_switched_health";
		sound[]=
		{
			"\WebknightsNarth\sounds\switched_health.wav",
			3.1622777,
			1
		};
		titles[]={};
	};
};
class cfgMods
{
	author="WebKnight";
	timepacked="1666198817";
};
