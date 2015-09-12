/*
* Description:
* Loadout definition for German forces with Woodland camo
* Weapons: HK416/G3/FN Minimi/PSG-1 variants
* Uniforms: MNP Flecktarn
* Ubiquitous NVG and Optics
*
* Author:
* BWMF
* modified by Legion Tactical
*/
class blu_f {

	// Rifle
	#define WEST_RIFLE "hlc_rifle_g3ka4"
	#define WEST_RIFLE_MAG "hlc_20rnd_762x51_b_G3:8","hlc_20rnd_762x51_T_G3:2"
	// GL Rifle
	#define WEST_GLRIFLE "HLC_Rifle_g3ka4_GL"
	#define WEST_GLRIFLE_MAG "hlc_20rnd_762x51_b_G3:8","hlc_20rnd_762x51_T_G3:2"
	#define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
	#define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:8"
	#define WEST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareGreen_F:2"
	// Carbine
	#define WEST_CARBINE "RH_hk416c_tg"
	#define WEST_CARBINE_MAG "RH_30Rnd_556x45_M855A1:8","30Rnd_556x45_Stanag_Tracer_Red:2"
	// AR
	#define WEST_AR "hlc_lmg_minimi_railed"
	#define WEST_AR_MAG "hlc_200rnd_556x45_M_SAW:2"
	#define WEST_AR_MAG2 "hlc_200rnd_556x45_M_SAW:2"
	// AT
	#define WEST_AT "rhs_weap_M136"
	#define WEST_AT_MAG "rhs_m136_mag"
	// MMG
	#define WEST_MMG "rhs_weap_m240B"
	#define WEST_MMG_MAG "rhsusf_100Rnd_762x51:5"
	// MAT
	#define WEST_MAT "launch_I_Titan_short_F"
	#define WEST_MAT_MAG "Titan_AT:2","Titan_AP:1"
	// SAM
	#define WEST_SAM "rhs_weap_fim92"
	#define WEST_SAM_MAG "rhs_fim92_mag:2"
	// Sniper Rifle
	#define WEST_SNIPER "hlc_rifle_psg1"
	#define WEST_SNIPER_MAG "hlc_20rnd_762x51_barrier_G3:8"
	// Spotter Rifle
	#define WEST_SPOTTER "hlc_rifle_g3ka4"
	#define WEST_SPOTTER_MAG "hlc_20rnd_762x51_b_G3:8"
	// SMG
	#define WEST_SMG "hlc_smg_MP5N"
	#define WEST_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
	// Pistol
	#define WEST_PISTOL "hgun_P07_F"
	#define WEST_PISTOL_MAG "16Rnd_9x21_Mag:4"
	// Radio
	#define WEST_RADIO_RIFLEMAN "tf_rf7800str"
	#define WEST_RADIO_SHORTWAVE "tf_anprc152"
	#define WEST_RADIO_MANPACK "tf_rt1523g_big_bwmod"
	#define WEST_RADIO_AIRBORNE "tf_anarc210"

	// By default, BLUFOR uses White, Black, and Asian faces.
	// If you want something else, specify the list here.
	faces[] = {};

	// Define the cargo for Vehicles
	class Car {
		TransportMagazines[] = {
			WEST_RIFLE_MAG,
			WEST_RIFLE_MAG,
			WEST_CARBINE_MAG,
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_AT_MAG
		};
		TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
	};

	// Define the cargo for Tanks
	class Tank {
		TransportMagazines[] = {
			WEST_RIFLE_MAG,
			WEST_RIFLE_MAG,
			WEST_CARBINE_MAG,
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_AT_MAG
		};
		TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
	};

	// Define the cargo for Helicopters
	class Helicopter {
		TransportMagazines[] = {
			WEST_RIFLE_MAG,
			WEST_RIFLE_MAG,
			WEST_CARBINE_MAG,
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE
		};
		TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4"
		};
	};

	// Define the cargo for Jets
	class Plane {
		TransportMagazines[] = {};
	};

	// Define the cargo for Boats
	class Ship_F {
		TransportMagazines[] = {};
	};

	/* RIFLEMAN BASE */
	class B_Soldier_F {
		// Define the list of possible uniforms that units will wear
		uniform[] = {
			"MNP_CombatUniform_Germany",
			"MNP_CombatUniform_Germany_S"
		};
		// Define the list of possible vests that units will wear
		vest[] = {
			"MNP_Vest_Germany",
			"MNP_Vest_Germany_2"
		};
		// Define the list of possible headgear that units will wear
		headgear[] = {
			"MNP_Helmet_Germany"
		};
		// Define the list of possible facewear that units will wear
		facewear[] = {nil};
		// Define the list of possible backpacks that units will wear
		backpack[] = {
			"B_AssaultPack_blk"
		};
		// Define the list of possible primary weapons that units
		// will be assigned
		weapons[] = {WEST_RIFLE};
		// Define the list of possible launcher weapons that units
		// will be assigned
		launchers[] = {};
		// Define the list of possible sidearms that units
		// will be assigned
		handguns[] = {};
		/* END Randomized Gear */

		// List the items (along with the amount) that will be placed
		// specifically in the unit's backpack
		backpackItems[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			"ACE_IR_Strobe_item",

		};
		// List the magazines, explosives, and throwables
		// that will be placed wherever there is room in the unit's
		// inventory
		magazines[] = {
			WEST_RIFLE_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
		// List the items (along with the amount) that will be placed
		// wherever there is room in the unit's inventory
		items[] = {};
		// List the gear items txhat should be automatically slotted
		// correctly for the unit (like Map, Watch, NVG, etc)
		linkedItems[] = {
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"rhsusf_ANPVS_15"
		};
		// List the attachments that will be automatically added
		// to the unit's equipped weapons
		attachments[] = {
			"RH_compm4s",
			"rhsusf_acc_anpeq15A"
		};
		// Set the basic radio for the unit
		radio = WEST_RADIO_RIFLEMAN;
	};

	/* END RIFLEMAN BASE */

	/* RIFLEMAN EXTENSIONS */

	// CO and DC
	// Define gear additions and overrides for Officer units
	class B_officer_F: B_Soldier_F {
		backpack[] = {WEST_RADIO_MANPACK};
		weapons[] = {WEST_GLRIFLE};
		magazines[] = {
			WEST_GLRIFLE_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_GLRIFLE_MAG_SMOKE,
			WEST_GLRIFLE_MAG_FLARE,
			WEST_PISTOL_MAG,
			"HandGrenade:2",
			"SmokeShell:2",
			"SmokeShellGreen:2"
		};
		handguns[] = {WEST_PISTOL}; /// randomized
		backpackItems[] += {"ACE_key_west"};
		linkedItems[] += {
			"ItemGPS",
			"ACE_Vector"
		};
		items[] = {"ACE_MapTools"};
		radio = WEST_RADIO_SHORTWAVE;
	};

	// SL
	// Define gear additions and overrides for Squad Leader units
	class B_Soldier_SL_F: B_Officer_F {
		backpack[] = {WEST_RADIO_MANPACK};
		linkedItems[] += {
			"Binocular"
		};
		items[] = {"ACE_MapTools"};
		backpackItems[] += {"ACE_fieldDressing"};
		radio = WEST_RADIO_SHORTWAVE;
	};

	// UAV
	// Define gear additions and overrides for UAV Operator units
	class B_Soldier_UAV_F: B_Soldier_F {
		backpack[] = {"B_rhsusf_B_BACKPACK"};
		linkedItems[] += {
			"B_uavterminal"
		};
		radio = WEST_RADIO_SHORTWAVE;
	};

	// FTL
	// Define gear additions and overrides for Team Leader units
	class B_Soldier_TL_F: B_Soldier_F {
		weapons[] = {WEST_GLRIFLE};
		magazines[] = {
			WEST_GLRIFLE_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_GLRIFLE_MAG_SMOKE,
			WEST_GLRIFLE_MAG_FLARE,
			"SmokeShellGreen:2",
			"HandGrenade:3",
			"SmokeShell:4",
		};
		backpackItems[] += {"ACE_key_west"};
		linkedItems[] += {
			"ItemGPS",
			"Binocular"
		};
	};

	// AR
	// Define gear additions and overrides for Autorifleman units
	class B_Soldier_AR_F: B_Soldier_F {
		weapons[] = {WEST_AR};
		magazines[] = {
			WEST_AR_MAG,
			WEST_PISTOL_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
		handguns[] = {WEST_PISTOL}; /// randomized
	};

	// AAR
	// Define gear additions and overrides for Asst Autorifleman units
	class B_Soldier_AAR_F: B_Soldier_F {
		backpackItems[] += {WEST_AR_MAG2};
		attachments[] += {"rhsusf_acc_ACOG_USMC"};
		linkedItems[] += {"Binocular"};
	};

	// RAT
	// Define gear additions and overrides for AT Rifleman units
	class B_Soldier_LAT_F: B_Soldier_F {
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			WEST_AT_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
		launchers[] = {WEST_AT};
	};

	// Medic
	// Define gear additions and overrides for Medic units
	class B_medic_F: B_Soldier_F {
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			"SmokeShell:6"
		};
		backpackItems[] = {
			"ACE_fieldDressing:31",
			"ACE_epinephrine:8",
			"ACE_bloodIV:2",
			"ACE_morphine:14",

		};
	};

	// MMG
	// Define gear additions and overrides for MMG Gunner units
	class B_support_MG_F: B_Soldier_F {
		weapons[] = {WEST_MMG};
		magazines[] = {
			WEST_MMG_MAG,
			WEST_PISTOL_MAG,
			"HandGrenade:1",
			"SmokeShell:2"
		};
		handguns[] = {WEST_PISTOL}; /// randomized
		attachments[] = {};
	};

	// MMG Asst
	// Define gear additions and overrides for MMG Spotter units
	class B_Soldier_A_F: B_Soldier_F {
		backpack[] = {"B_Kitbag_rgr"};
		backpackItems[] += {WEST_MMG_MAG};
		linkedItems[] += {"ACE_Vector"};
	};

	// Medium AT
	// Define gear additions and overrides for MAT Gunner units
	class B_Soldier_AT_F: B_Soldier_F {
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
		launchers[] = {WEST_MAT};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",

		};
		backpack[] = {"B_Kitbag_rgr"};
		backpackItems[] = {WEST_MAT_MAG};
	};

	// Medium AT Asst
	// Define gear additions and overrides for MAT Spotter units
	class B_Soldier_AAT_F: B_Soldier_F {
		backpack[] = {"B_Kitbag_rgr"};
		backpackItems[] = {WEST_MAT_MAG};
		linkedItems[] += {"ACE_Vector"};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",

		};
	};

	// AA Gunner
	// Define gear additions and overrides for AA Gunner units
	class B_Soldier_AA_F: B_Soldier_F {
		backpack[] = {"B_Carryall_oli"};
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			"HandGrenade:2",
			"MiniGrenade:1",
			"SmokeShell:2"
		};
		launchers[] = {WEST_SAM};
		backpackItems[] += {WEST_SAM_MAG};
	};

	// AA Asst
	// Define gear additions and overrides for AA Spotter units
	class B_Soldier_AAA_F: B_Soldier_F {
		backpack[] = {"B_Carryall_khk"};
		backpackItems[] = {WEST_SAM_MAG};
		linkedItems[] += {"ACE_Vector"};
	};

	// Mortar Gunner
	// Define gear additions and overrides for Mortar Gunner units
	class B_support_Mort_F: B_Soldier_F {
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",

		};
		backpack[] = {"B_Mortar_01_weapon_F"};
	};

	// Mortar Asst
	// Define gear additions and overrides for Mortar Asst units
	class B_support_AMort_F: B_Soldier_F {
		backpack[] = {"B_Mortar_01_support_F"};
		linkedItems[] += {"ACE_Vector"};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine",

		};
	};

	/* END RIFLEMAN EXTENSIONS */

	/* SPOTTER BASE */

	// Define the base class for Spotter units
	class B_spotter_F {
    uniform[] = {
			"MNP_CombatUniform_Germany",
			"MNP_CombatUniform_Germany_S"
		};
		vest[] = {
			"MNP_Vest_Germany",
			"MNP_Vest_Germany_2"
		};
		headgear[] = {
			"MNP_Helmet_Germany"
		};
		facewear[] = {nil};
		backpack[] = {
			"B_AssaultPack_blk"
		};

		weapons[] = {WEST_SPOTTER};
		launchers[] = {};
		handguns[] = {};

		magazines[] = {
			WEST_SPOTTER_MAG,
			"SmokeShell:2",
			"HandGrenade:2"
		};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
		backpackItems[] = {};
		linkedItems[] = {
			"itemWatch",
			"itemMap",
			"itemCompass",
			"itemGPS",
			"LaserDesignator",
			"rhsusf_ANPVS_15"
		};
		attachments[] = {
			"rhsusf_acc_ACOG_USMC",
			"rhsusf_acc_anpeq15A"
		};
		radio = WEST_RADIO_SHORTWAVE;
	};

	/* SNIPER BASE */

	// Define the base class for Sniper units
	class B_sniper_F {
    uniform[] = {
			"MNP_CombatUniform_Germany",
			"MNP_CombatUniform_Germany_S"
		};
		// Define the list of possible vests that units will wear
		vest[] = {
			"MNP_Vest_Germany",
			"MNP_Vest_Germany_2"
		};
		// Define the list of possible headgear that units will wear
		headgear[] = {
			"MNP_Helmet_Germany"
		};
		// Define the list of possible facewear that units will wear
		facewear[] = {nil};
		// Define the list of possible backpacks that units will wear
		backpack[] = {
			"B_AssaultPack_blk"
		};

		weapons[] = {WEST_SNIPER};
		launchers[] = {};
		handguns[] = {};

		magazines[] = {
			WEST_SNIPER_MAG,
			"SmokeShell:2",
			"HandGrenade:2"
		};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
		backpackItems[] = {};
		linkedItems[] = {
			"itemWatch",
			"itemMap",
			"itemCompass",
			"itemGPS",
			"LaserDesignator",
			"rhsusf_ANPVS_15"
		};
		attachments[] = {};
		radio = WEST_RADIO_SHORTWAVE;
	};

	/* HELICOPTER CREW BASE */

	// Heli Pilot
	// Define the base class for all Helicopter pilot and crew units
	class B_Helipilot_F {
    uniform[] = {
			"MNP_CombatUniform_Germany",
			"MNP_CombatUniform_Germany_S"
		};
		// Define the list of possible vests that units will wear
		vest[] = {
			"MNP_Vest_Germany",
			"MNP_Vest_Germany_2"
		};
		// Define the list of possible headgear that units will wear
		headgear[] = {
			"H_PilotHelmetHeli_B"
		};
		// Define the list of possible facewear that units will wear
		facewear[] = {nil};
		// Define the list of possible backpacks that units will wear
		backpack[] = {
			"B_AssaultPack_blk"
		};

		weapons[] = {WEST_SMG};
		launchers[] = {};
		handguns[] = {WEST_PISTOL};

		magazines[] = {
			WEST_SMG_MAG,
			WEST_PISTOL_MAG,
			"SmokeShell:2"
		};
		backpackItems[] += {"ACE_key_west"};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
		linkedItems[] = {
			"ItemWatch",
			"ItemMap",
			"ItemCompass",
			"itemGPS",
			"rhsusf_ANPVS_15"
		};
		attachments[] = {};
		radio = WEST_RADIO_SHORTWAVE;
	};

	// Heli crew
	// Define gear additions and overrides for Helicopter Crew units
	class B_helicrew_F: B_Helipilot_F {
		// No changes
	};

	/* VEHICLE CREW BASE */

	// Define the base class for all vehicle crew and engineer units
	class B_crew_F {
    uniform[] = {
			"MNP_CombatUniform_Germany",
			"MNP_CombatUniform_Germany_S"
		};
		// Define the list of possible vests that units will wear
		vest[] = {
			"MNP_Vest_Germany",
			"MNP_Vest_Germany_2"
		};
		// Define the list of possible headgear that units will wear
		headgear[] = {
			"H_PilotHelmetHeli_B"
		};
		// Define the list of possible facewear that units will wear
		facewear[] = {nil};
		// Define the list of possible backpacks that units will wear
		backpack[] = {
			"B_AssaultPack_blk"
		};

		weapons[] = {WEST_SMG};
		launchers[] = {};
		handguns[] = {};

		magazines[] = {
			WEST_SMG_MAG,
			"SmokeShell:2"
		};
		backpackItems[] = {"ACE_key_west"};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
		linkedItems[] = {
			"ItemWatch",
			"ItemMap",
			"ItemCompass",
			"itemGPS",
			"rhsusf_ANPVS_15"
		};
		attachments[] = {};
		radio = WEST_RADIO_SHORTWAVE;
	};

	// Repair Specialist
	// Define gear additions and overrides for Repair Specialist units
	// as well as the base class for all Explosive/Mine specialists
	class B_Soldier_repair_F: B_crew_F {
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			"HandGrenade:2",
			"SmokeShell:2"
		};
		backpack[] = {"B_Kitbag_rgr"};
		backpackItems[] = {"Toolkit"};
	};

	// Explosive Specialist
	// Define gear additions and overrides for Explosive Specialist units
	class B_Soldier_exp_F: B_Soldier_repair_F {
		backpackItems[] = {
			"Toolkit",
			"ACE_DefusalKit",
			"ACE_Clacker",
			"MineDetector"
		};
		magazines[] = {
			WEST_CARBINE_MAG,
			"DemoCharge_Remote_Mag:3",
			"SatchelCharge_Remote_Mag:2"
		};
	};

	// Mine Specialist
	// Define gear additions and overrides for Mine Specialist units
	class B_engineer_F: B_Soldier_repair_F {
		backpackItems[] = {
			"Toolkit",
			"ACE_DefusalKit",
			"ACE_Clacker",
			"MineDetector"
		};
		magazines[] = {
			WEST_CARBINE_MAG,
			"ATMine_Range_Mag:2",
			"APERSBoundingMine_Range_Mag:2",
			"APERSMine_Range_Mag:2"
		};
	};

	// Default if no other loadout can be found
	class fallback: B_soldier_f {
		// Same as normal rifleman
	};
};
