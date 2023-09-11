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

    // Skull Probes
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

    // Tarantula Turrets
    class SR_Tarantula_Sentry_Packed_base: itc_land_packableItem {
        scope = 0;
        author = "Toadball";
        displayName = "Tarantula Turret (Packed)";
        descriptionShort = "Tarantula Turret packed for carriage";
        model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
        //picture = "\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\UAV_01_CA.paa";
        class ItemInfo: ItemInfo {
			      mass = 200;
            allowedSlots[] = {901};
            scope = 0;
        };
    };
    class SR_B_Tarantula_Sentry_Packed: SR_Tarantula_Sentry_Packed_base {displayName = "Tarantula Turret [NATO] (Packed)"; scope = 2; scopeCurator = 2; itc_land_unPacksTo = "SR_B_Tarantula_Sentry";};
	class SR_O_Tarantula_Sentry_Packed: SR_Tarantula_Sentry_Packed_base {displayName = "Tarantula Turret [CSAT] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "SR_O_Tarantula_Sentry";};
	class SR_I_Tarantula_Sentry_Packed: SR_Tarantula_Sentry_Packed_base {displayName = "Tarantula Turret [AAF] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "SR_I_Tarantula_Sentry";};

    // Modified heavy bolter with lower ai range in its firemodes
    class TIOW_IG_HeavyBolter;
    class SR_Low_Range_IG_HeavyBolter: TIOW_IG_HeavyBolter
	{
		class manual;
		modes[]=
		{
			"HighROF",
			"close"
		};
		class LowROF: manual
		{
			displayName="Mars Heavy bolters";
			reloadTime=0.2;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			aiDispersionCoefX=6;
			aiDispersionCoefY=6;
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=1;
			minRange=1;
			minRangeProbab=0.039999999;
			midRange=2;
			midRangeProbab=0.059999999;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			dispersion=0.00050000002;
			burst=1;
			aiRateOfFire=1;
			aiRateOfFireDistance=50;
		};
		class HighROF: LowROF
		{
			reloadTime=0.2;
			minRange=1;
			minRangeProbab=0.079999998;
			midRange=1.5;
			midRangeProbab=0.057999998;
			maxRange=2;
			maxRangeProbab=0.0040000002;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=2;
			displayname="";
		};
		class close: HighROF
		{
			showToPlayer=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.57999998;
			maxRange=800;
			maxRangeProbab=0.039999999;
			burst=3;
			aiRateOfFire=1;
			aiRateOfFireDistance=50;
		};
	};
};
