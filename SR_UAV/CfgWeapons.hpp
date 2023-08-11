class CfgWeapons {
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;
	class itc_land_packableItem: ACE_ItemCore {
		scope = 0;
		author = "Toadball";
		displayName = "Packable Item (Packed)";
		descriptionShort = "Packable Item (Packed)";
		model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";

		class ItemInfo: CBA_MiscItem_ItemInfo {
		  mass = 75;
		  allowedSlots[] = {901};
		  scope = 0;
		};
	};

    class SR_UAV_Packed_base: itc_land_packableItem {
        scope = 0;
        author = "Toadball";
        displayName = "Skull Probe (Packed)";
        descriptionShort = "Skull Probe packed for carriage";
        model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
        //picture = "\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\UAV_01_CA.paa";
        class ItemInfo: ItemInfo {
			      mass = 75;
            allowedSlots[] = {901};
            scope = 0;
        };
    };
	class SR_B_AR2i_Packed: SR_UAV_Packed_base {displayName = "Skull Probe [NATO] (Packed)"; scope = 2; scopeCurator = 2; itc_land_unPacksTo = "SR_B_UAV_AR2i";};
	class SR_O_AR2i_Packed: SR_UAV_Packed_base {displayName = "Skull Probe [CSAT] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "SR_O_UAV_AR2i";};
	class SR_I_AR2i_Packed: SR_UAV_Packed_base {displayName = "Skull Probe [AAF] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "SR_I_UAV_AR2i";};
};
