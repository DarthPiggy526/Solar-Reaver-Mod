class CfgPatches
{
	class SR_PP_Weapons
	{
		name="SR PP Arsenal Mod";
		author="Waagheur";
		requiredVersion=0.0020000001;
		requiredAddons[]=
		{
			"SR_Arsenal",
			"KUL_Characters_F"
		};
		weapons[]=
		{
			"SR_W_B_KUL_BRBOLTER",
			"SR_W_B_KUL_UMBOLTER",	
			"SR_W_B_KUL_DABOLTER",
			"SR_W_B_KUL_IFBOLTER",
			"SR_W_B_KUL_SALBOLTER",
			"SR_W_B_KUL_IHBOLTER",
			"SR_W_B_KUL_BABOLTER",
			"SR_W_B_KUL_SWBOLTER",
			"SR_W_B_KUL_RGBOLTER",
			"SR_W_B_KUL_WSBOLTER",
			"SR_W_B_KUL_BTBOLTER",
			"SR_W_B_KUL_RETBOLTER",
			"SR_W_B_KUL_GOLDBOLTER"
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

// Boltguns
class W_B_KUL_BTBOLTER;
class W_B_KUL_BABOLTER;
class W_B_KUL_BRBOLTER;
class W_B_KUL_DABOLTER;
class W_B_KUL_IFBOLTER;
class W_B_KUL_IHBOLTER;
class W_B_KUL_RGBOLTER;
class W_B_KUL_GOLDBOLTER;
class W_B_KUL_RETBOLTER;
class W_B_KUL_SALBOLTER;
class W_B_KUL_SWBOLTER;
class W_B_KUL_UMBOLTER;
class W_B_KUL_WSBOLTER;

class Cfgweapons
{
	class SR_W_B_KUL_BTBOLTER : W_B_KUL_BTBOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_BTBOLTER";
		displayName="[TSR] [Astartes] Black Templar Boltgun";
	};
	
	class SR_W_B_KUL_BABOLTER : W_B_KUL_BABOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_BABOLTER";
		displayName="[TSR] [Astartes] Blood Angels Boltgun";
	};
	
	class SR_W_B_KUL_BRBOLTER : W_B_KUL_BRBOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_BRBOLTER";
		displayName="[TSR] [Astartes] Blood Ravens Boltgun";
	};
	
	class SR_W_B_KUL_DABOLTER : W_B_KUL_DABOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_DABOLTER";
		displayName="[TSR] [Astartes] Dark Angels Boltgun";
	};
	
	class SR_W_B_KUL_IFBOLTER : W_B_KUL_IFBOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_IFBOLTER";
		displayName="[TSR] [Astartes] Imperial Fists Boltgun";
	};
	
	class SR_W_B_KUL_IHBOLTER : W_B_KUL_IHBOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_IHBOLTER";
		displayName="[TSR] [Astartes] Iron Hands Boltgun";
	};
	
	class SR_W_B_KUL_RGBOLTER : W_B_KUL_RGBOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_RGBOLTER";
		displayName="[TSR] [Astartes] Raven Guard Boltgun";
	};
	
	class SR_W_B_KUL_GOLDBOLTER : W_B_KUL_GOLDBOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_GOLDBOLTER";
		displayName="[TSR] [Astartes] Relic Boltgun";
	};
	
	class SR_W_B_KUL_RETBOLTER : W_B_KUL_RETBOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_RETBOLTER";
		displayName="[TSR] [Astartes] Retributor Boltgun";
	};
	
	class SR_W_B_KUL_SALBOLTER : W_B_KUL_SALBOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_SALBOLTER";
		displayName="[TSR] [Astartes] Salamenders Boltgun";
	};
	
	class SR_W_B_KUL_SWBOLTER : W_B_KUL_SWBOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_SWBOLTER";
		displayName="[TSR] [Astartes] Space Wolves Boltgun";
	};
	
	class SR_W_B_KUL_UMBOLTER : W_B_KUL_UMBOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_UMBOLTER";
		displayName="[TSR] [Astartes] Ultra Marines Boltgun";
	};
	
	class SR_W_B_KUL_WSBOLTER : W_B_KUL_WSBOLTER
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_W_B_KUL_WSBOLTER";
		displayName="[TSR] [Astartes] White Scars Boltgun";
	};
};

