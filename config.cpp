
class CfgMods
{
	class Great_Stag
	{
	    dir = "great_stag";
	    picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
	    name = "Great_Stag";
	    credits = "";
	    author = "anna and wintermute";
	    authorID = "0";
	    version = "1.0";
	    extra = 0;
	    type = "mod";
	    dependencies[] = {"Game","World"};
	    class defs
	    {
			class gameScriptModule
            {
                value = "";
                files[] = {"great_stag/scripts/3_Game"};
            };
            class worldScriptModule
			{
				value = "";
				files[] = {"great_stag/scripts/4_World"};
			};
			
        };
    };
};
class CfgPatches
{
	class Great_Stag
	{
		units[]=
		{
			"stag_pelt",
			"Animal_Great_Stag"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Animals"
		};
	};
};
class cfgVehicles
{
	class DeerPelt;
	class stag_pelt: DeerPelt
	{
		scope=2;
		displayName="Pelt of the Great Stag";
		descriptionShort="Must have been worth a lot before the apocalypse.";
		weight=2000;
		itemSize[]={5,3};
		peltGain=6;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"great_stag\data\stag_pelt.paa"
		};
	};
	class Animal_CervusElaphus;
	class Animal_Great_Stag: Animal_CervusElaphus
	{
		scope=2;
		model="\DZ\animals\cervus_elaphus\cervus_elaphus.p3d";
		displayName="Great Stag";
		descriptionShort="Majestic creature that started wandering the earth long before we did.";
		hiddenSelections[]=
		{
			"Camo",
			"CamoHair"
		};
		hiddenSelectionsTextures[]=
		{
			"great_stag\data\great_stag.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLabels[]={1,0.69999999,0.5,0.30000001,0};
				};
				class Blood
				{
					hitpoints=5000;
				};
				class Shock
				{
					hitpoints=500;
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="DeerSteakMeat";
				count=4;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly",
					"Zone_Pelvis"
				};
				countByZone[] = {10.0,10.0,10.0};
				quantityMinMaxCoef[] = {0.95,1};
			};
			class ObtainedPelt
			{
				item="stag_pelt";
				count=2;
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="Guts";
				count=8;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedLard
			{
				item="Lard";
				count=5;
				quantityMinMaxCoef[]={0.9,1};
			};
			class ObtainedBones
			{
				item="Bone";
				count=4;
				quantityMinMaxCoef[]={0.69999999,1};
				transferToolDamageCoef=1;
			};
		};
	};
};
