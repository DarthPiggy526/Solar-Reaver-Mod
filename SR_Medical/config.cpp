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





// Marine dragging
class CfgMovesBasicSpaceMarine
{
	class ManActions {
        ACE_dragWithPistol = "ace_dragging";
        ACE_dragWithRifle = "AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2";
    };
    
    class Actions {
        class MoveWithInjuredManDragger;
        class MoveWithInjuredManDraggerRfl: MoveWithInjuredManDragger {
            Up = "amovpercmstpsraswrfldnon";
        };
        
        class MoveWithInjuredManDraggerPst;
        class ACE_MoveWithInjuredManDraggerPst: MoveWithInjuredManDraggerPst {
            Default = "ace_dragging_static";
            FastB = "ace_dragging";
            FastLB = "ace_dragging";
            FastRB = "ace_dragging";
            grabDrag = "ace_dragging_static";
            grabCarry = "Helper_SwitchToCarrynon_pst";
            HandGunOn = "ace_dragging_static";
            PlayerSlowB = "ace_dragging";
            PlayerSlowLB = "ace_dragging";
            PlayerSlowRB = "ace_dragging";
            PlayerTactB = "AmovPknlMtacSrasWpstDb";
            PlayerTactF = "AmovPknlMtacSrasWpstDf";
            PlayerTactL = "AmovPknlMtacSrasWpstDl";
            PlayerTactLB = "AmovPknlMtacSrasWpstDbl";
            PlayerTactLF = "AmovPknlMtacSrasWpstDfl";
            PlayerTactR = "AmovPknlMtacSrasWpstDr";
            PlayerTactRB = "AmovPknlMtacSrasWpstDbr";
            PlayerTactRF = "AmovPknlMtacSrasWpstDfr";
            PlayerWalkB = "ace_dragging";
            PlayerWalkLB = "ace_dragging";
            PlayerWalkRB = "ace_dragging";
            released = "ace_dragging_drop";
            SlowB = "ace_dragging";
            SlowLB = "ace_dragging";
            SlowRB = "ace_dragging";
            Stop = "ace_dragging_static";
            StopRelaxed = "ace_dragging_static";
            TactB = "AmovPknlMtacSrasWpstDb";
            TactF = "AmovPknlMtacSrasWpstDf";
            TactL = "AmovPknlMtacSrasWpstDl";
            TactLB = "AmovPknlMtacSrasWpstDbl";
            TactLF = "AmovPknlMtacSrasWpstDfl";
            TactR = "AmovPknlMtacSrasWpstDr";
            TactRB = "AmovPknlMtacSrasWpstDbr";
            TactRF = "AmovPknlMtacSrasWpstDfr";
            Up = "ace_dragging_static";
            WalkB = "ace_dragging";
            WalkLB = "ace_dragging";
            WalkRB = "ace_dragging";
        };
    };
};

class CfgMovesMaleSpaceMarine: CfgMovesBasicSpaceMarine
{
	skeletonName="SpaceMarine_ManSkeleton";
	gestures="CfgGesturesSpaceMarine";
	class InjuredMovedBase;
    class AgonyBaseRfl;
    class StandBase;
    class AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1;
    class DraggerBase;

    class States {
        class AcinPknlMstpSnonWnonDnon_AcinPercMrunSnonWnonDnon: InjuredMovedBase {
            speed = -10; // 1/10
        };

        class AinjPfalMstpSnonWrflDnon_carried_Up: AgonyBaseRfl {
            speed = -10; // 1/10
        };

        class AmovPercMstpSrasWpstDnon: StandBase {
            ConnectTo[] = {
                "AmovPercMstpSrasWpstDnon",
                0.02,
                "AovrPercMstpSrasWpstDf",
                0.025,
                "AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon",
                0.0099999998,
                "PistolMagazineReloadStand",
                0.1,
                "AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
                0.02,
                "AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon",
                0.02,
                "AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon",
                0.02,
                "AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon",
                0.02,
                "AmovPercMstpSrasWpstDnon_SaluteIn",
                0.02,
                "AwopPercMstpSgthWpstDnon_Part1",
                0.1,
                "AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon",
                0.02,
                "AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon",
                0.02,
                "AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDup",
                0.02,
                "AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDdown",
                0.02,
                "AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDleft",
                0.02,
                "AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDright",
                0.02,
                "AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon_gear",
                0.02,
                "Acts_starterPistol_in",
                0.001,
                "Acts_PistolRaisedStand_Default",
                1,
                "ace_dragging",
                0.1
            };
        };

        class AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_2: AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1 {
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            aimPrecision = 5; // default: 1
        };

        class ace_dragging: DraggerBase {
            actions = "ace_MoveWithInjuredManDraggerPst";
            aiming = "aimingPistol";
            aimingBody = "aimingPistol";
            aimPrecision = 2; // default: 1
            canPullTrigger = 1;
            canReload = 0;
            ConnectTo[] = {
                "ace_dragging",
                0.1,
                "ace_dragging_drop",
                0.2
            };
            disableWeapons = 0;
            duty = 0.6;
            enableBinocular = 0;
            file = QPATHTO_T(anim\ace_dragging.rtm);
            InterpolateTo[] = {
                "ace_dragging_static",
                0.1
            };
            interpolationSpeed = 5;
            limitGunMovement = 0.2;
            looped = 1;
            showHandGun = 1;
            turnSpeed = 0.5;
        };

        class ace_dragging_static: ace_dragging {
            ConnectTo[] = {
                "ace_dragging",
                0.1,
                "ace_dragging_drop",
                0.2
            };
            InterpolateTo[] = {
                "ace_dragging",
                0.1,
                "ace_dragging_drop",
                0.2
            };
            looped = 1;
            speed = 0;
        };

        class ace_dragging_drop: ace_dragging {
            ConnectTo[] = {
                "AmovPknlMstpSrasWpstDnon",
                0.1
            };
            file = QPATHTO_T(anim\ace_dragging_drop.rtm);
            InterpolateTo[] = {
                "Unconscious",
                0.02
            };
            interpolationSpeed = 5;
            looped = 0;
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
			hrIncreaseNormal[]={-15,-20};
			hrIncreaseHigh[]={-15,-20};
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
			hrIncreaseNormal[]={-15,-20};
			hrIncreaseHigh[]={-15,-20};
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
		picture = "\SR_Medical\UI\stims.paa";
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
		picture = "\SR_Medical\UI\narth.paa";
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
		picture = "\SR_Medical\UI\plasma.paa";
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
		picture = "\SR_Medical\UI\coolant.paa";
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
		picture = "\SR_Medical\UI\stims.paa";
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
		picture = "\SR_Medical\UI\narth.paa";
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
        model = "\z\ace\addons\medical_treatment\data\surgical_kit.p3d";
		picture = "\SR_Medical\UI\plasma.paa";
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
        model = "\z\ace\addons\medical_treatment\data\surgical_kit.p3d";
		picture = "\SR_Medical\UI\coolant.paa";
        descriptionShort = "Coolant Injector used to treat bruises on a soldier.";
        descriptionUse = "Coolant Injector used to treat bruises on a soldier.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 20;
        };
    };
};
