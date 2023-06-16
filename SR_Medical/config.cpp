class CfgPatches
{
	class SR_Medical
	{
		author="Waagheur";
		name="SR Medical";
		requiredAddons[]=
		{
			"ace_medical",
			"ace_medical_treatment"
		};
		requiredVersion=0.1;
		units[]=
		{
			"SR_AdrenalStims", 
			"SR_Narthecium", 
			"SR_Item_InfiBlood", 
			"SR_Item_TraumaClearer"
		};
		weapons[]=
		{
			"SR_AdrenalStims", 
			"SR_Narthecium", 
			"SR_Item_InfiBlood", 
			"SR_Item_TraumaClearer"
		};
		worlds[]={};
	};
};

class CfgFunctions
{
	class SR
	{
		class Medical
		{
			file = "SR_Medical\functions";
			class clearTraumaStart {
				//file = "SR_Medical\functions\fn_truc.sqf";
			};
			class clearTrauma {
				//file = "SR_Medical\functions\fn_clearTrauma.sqf";
			};
			class canClearTrauma {
				//file = "SR_Medical\functions\fn_canClearTrauma.sqf";
			};
			class getClearTraumaTime {
				//file = "SR_Medical\functions\fn_getClearTraumaTime.sqf";
			};
			class getInfiBloodTime {
				//file = "SR_Medical\functions\fn_getInfiBloodTime.sqf";
			};
		};
	};
};

class ace_medical_treatment
{
	
	// Narthecium
	
	class Bandaging
	{
		class ElasticBandage;
		class SR_NartheciumStab: ElasticBandage
		{
		};
	};
	
	class Medication
	{
		class SR_NartheciumInject
        {
            painReduce=1.0;
			hrIncreaseLow[]={5,10};
			hrIncreaseNormal[]={-20,-25};
			hrIncreaseHigh[]={-20,-25};
			timeInSystem=180;
			timeTillMaxEffect=5;
			maxDose=1;
			incompatibleMedication[]={};
        };
		
	// Stim	
		
		class SR_AdrenalStims
        {
            painReduce=1.0;
			hrIncreaseLow[]={5,10};
			hrIncreaseNormal[]={-20,-25};
			hrIncreaseHigh[]={-20,-25};
			timeInSystem=180;
			timeTillMaxEffect=5;
			maxDose=1;
			incompatibleMedication[]={};
        };
	};
	
	// Blood source
	
	class IV {
		class PlasmaIV;
		class SR_InfiBlood: PlasmaIV
		{
			volume = 250;			
		};
	};
};

class ace_medical_treatment_actions
{	

	// Narthecium

	class ElasticBandage;
	class SR_NartheciumStab: ElasticBandage
	{
		displayName="Use Narthecium";
		displayNameProgress="Stabbing with Narthecium...";
		items[]=
		{
			"SR_Narthecium"
		};
		litter[]=
		{
		};
        consumeItem=0;
	};
	
	class Morphine;
	class SR_NartheciumInject: Morphine
	{
		displayName="Inject Narthecium";
		displayNameProgress="Injecting with Narthecium...";
		condition="ace_medical_treatment_advancedMedication";
		items[]=
		{
			"SR_Narthecium"
		};
		litter[]=
		{
			
			{
				"ACE_MedicalLitter_adenosine"
			}
		};
        consumeItem=0;
	};
	
	// Stim
	
	class SR_AdrenalStims: Morphine
	{
		displayName="Inject Adrenal Stims";
		displayNameProgress="Injecting Stims...";
		items[]=
		{
			"SR_AdrenalStims"
		};
		litter[]=
		{
			
			{
				"ACE_MedicalLitter_adenosine"
			}
		};
	};
	
	// Blood source
	
	class PlasmaIV;
	class SR_InfiBlood: PlasmaIV {
        displayName = "Make Plasma Injection (250ml)";
        items[] = {"SR_Item_InfiBlood"};
		medicRequired = 1;
		consumeItem = 0;
		treatmentTime = "SR_fnc_getInfiBloodTime";
    };
	
	// Trauma Clearer
	
	class FieldDressing;
	class SR_TraumaClearer: FieldDressing {
        displayName = "Inject Coolant";
        displayNameProgress = "Injecting Coolant";
        icon = "ACE3\addons\medical_gui\ui\surgical_kit.paa";
        category = "advanced";
        items[] = {"SR_Item_TraumaClearer"};
        medicRequired = 1;
        treatmentTime = "SR_fnc_getClearTraumaTime";
        condition = "SR_fnc_canClearTrauma";
        callbackSuccess = "";
		callbackStart = "";
        //callbackStart = "SR_fnc_clearTraumaStart";
        callbackProgress = "SR_fnc_clearTrauma";
        consumeItem = 0;
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        litter[] = {{"ACE_MedicalLitter_gloves"}};
    };
};

class CfgVehicles 
{
	
	// Stims
	
	class Item_Base_F;
    class SR_StimItem: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="[TSR] Adrenal Stims";
		author="ACE Team + DaveSkywalker";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_SR_AdrenalStims
			{
				name="SR_AdrenalStims";
				count=1;
			};
		};
	};
	
	// Narthecium

    class SR_NartheciumItem: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="[TSR] Narthecium";
		author="ACE Team + DaveSkywalker";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_SR_Narthecium
			{
				name="SR_Narthecium";
				count=1;
			};
		};
	};
	
	// Blood source
		
	class SR_InfiBloodItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "[TSR] Plasma Synthesizer";
        author = "Waagheur";
        vehicleClass = "Items";
		class TransportItems
		{
			class _xx_SR_InfiBlood
			{
				name="SR_Item_InfiBlood";
				count=1;
			};
		};
    };
	
	// Trauma Clearer
	
	class SR_TraumaClearerItem: Item_Base_F 
	{
        scope = 2;
        scopeCurator = 2;
        displayName = "[TSR] Coolant Injector";
        author = "Waagheur";
        vehicleClass = "Items";
        class TransportItems {
			class _xx_SR_TraumaClearer
			{
				name="SR_Item_TraumaClearer";
				count=1;
			};
        };
    };
};

class CfgWeapons 
{
	
	// Stim
	
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class SR_AdrenalStims: ACE_ItemCore
	{
		scope=2;
		author="ACE Team + DaveSkywalker";
		model="\z\ace\addons\medical_treatment\data\adenosine.p3d";
		picture="\AV_Pack\textures\items\av_stims_ca.paa";
		displayName="[TSR] Adrenal Stims";
		descriptionShort="Adrenal Stims used to get the Space Marine ready to fight again";
		descriptionUse="Adrenal Stims used to get the Space Marine ready to fight again";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=2;
		};
	};
	
	// Narthecium
	
    class SR_Narthecium: ACE_ItemCore
	{
		scope=2;
		author="ACE Team + DaveSkywalker";
		model="\z\ace\addons\medical_treatment\data\adenosine.p3d";
		picture="\AV_Pack\textures\items\av_narthecium_ca.paa";
		displayName="[TSR] Narthecium";
		descriptionShort="Narthecium used to heal Space Marines";
		descriptionUse="Narthecium used to heal Space Marines";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=10;
		};
	};
	
	// Blood source
	
	class ACE_plasmaIV;
	class SR_Item_InfiBlood: ACE_plasmaIV {
		scope = 2;
		author = "Waagheur";
        displayName = "[TSR] Plasma Synthesizer";
        model = "ACE3\addons\medical_treatment\data\surgical_kit.p3d";
        picture = "ACE3\addons\medical_treatment\ui\salineIV_ca.paa";
        descriptionShort = "Plasma Synthesizer used to fabricate plasma to replace lost blood in the field.";
        descriptionUse = "Plasma Synthesizer used to fabricate plasma to replace lost blood in the field.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 100;
        };
    };
	
	// Trauma Clearer
	
	class SR_Item_TraumaClearer: ACE_ItemCore {
        scope = 2;
        author = "Waagheur";
        displayName= "[TSR] Coolant Injector";
        model = "ACE3\addons\medical_treatment\data\surgical_kit.p3d";
        picture = "ACE3\addons\medical_treatment\ui\surgicalKit_ca.paa";
        descriptionShort = "Coolant Injector used to treat bruises on a soldier.";
        descriptionUse = "Coolant Injector used to treat bruises on a soldier.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 20;
        };
    };
};
