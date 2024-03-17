class CfgPatches
{
	class SR_DOS_MODELS_Weapons
	{
		name="SR DOS MODELS Arsenal Mod";
		author="Tengu";
		requiredVersion=0.0020000001;
		requiredAddons[]=
		{
			"SR_Arsenal",
			"DOS_Weapons_Check"
		};
		weapons[]=
		{
			"SR_Dos_Phy_Staff_1"
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

class Dos_Phy_Staff_Rnd1;

class CfgAmmo
{
	
	class SR_Dos_Phy_Staff_Rnd1 : Dos_Phy_Staff_Rnd1
	{
		hit = 80;
		typicalSpeed = 1050;
		indirectHit = 25;
		indirectHitRange = 2;
		warheadName = "HE";
		caliber = 1.4;
		explosive = 0.65;
		ACE_caliber = 20;
		ACE_bulletLength = 102;
		ACE_bulletMass = 102.4;
	};
	
};

class Dos_Phy_Staff_Mag1;

class CfgMagazines
{
	
	class SR_Dos_Phy_Staff_Mag1 : Dos_Phy_Staff_Mag1
	{
		displayName = "[TSR] [PHSY] Storm of the Emperor's Wrath";
		descriptionShort = "[TSR] [PHSY] Storm of the Emperor's Wrath";
		ammo = "SR_Dos_Phy_Staff_Rnd1"
	};
	
};

// Special weapons
class Dos_Phy_Staff_1;

class Cfgweapons
{
	
	class SR_Dos_Phy_Staff_1 : Dos_Phy_Staff_1
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Dos_Phy_Staff_1";
		displayName="[TSR] [PHSY] Force Staff";
		magazines[] = {"SR_Dos_Phy_Staff_Mag1"};
	};
	
};

