class CfgPatches
{
	class TIOW_Inf_SR_Barbon
	{
		requiredAddons[]=
		{
			"TIOW_Inf_SR"
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

class CfgWeapons
{
	class ItemInfo;
	class SR_MK2_Shoulders_Blackshield;
	class SR_MK2_Shoulders_Barbon : SR_MK2_Shoulders_Blackshield
	{
		author="Barbon";
		displayName="[SR] Barbon";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\Barbon_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
};