class CfgPatches
{
	class TIOW_Inf_SR_Silver
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
	class SR_MK2_Shoulders_Silver : SR_MK2_Shoulders_Blackshield
	{
		author="Silver";
		displayName="[SR] Silver";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\Silver_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
};