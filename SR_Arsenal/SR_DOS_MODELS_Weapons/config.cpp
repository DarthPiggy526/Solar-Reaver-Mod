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
	};
};

