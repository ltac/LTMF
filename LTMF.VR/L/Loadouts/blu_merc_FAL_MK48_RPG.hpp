/*
* Description:
* Loadout definition for PMC
* Weapons: FAL/MK48/RPG/Glock
* Uniforms: VSM Tropical
* Vests:  VSM Plate Carrier
* Packs:  VSM
* Ubiquitous NVG and Optics;  Suppresors for Rifles and Subguns
* Upgun ammunition for 3CB vehicles added
* 3CB 60mm Mortars
* Added Class Grenadier and Class Rifleman {Light)
* Added separate mag count for MAT and Mortar gunners to lighten load

*
* Author:
* BWMF
* modified by Legion Tactical
*/
class blu_f {
	/*
	* NOTE This comment can be deleted when copied in actual loadout files
	* Template file for BLUFOR faction loadouts.
	*
	* All objects are specified by their classname. Classnames can be
	* found easily by creating a loadout in the Virtual Arsenal
	* (ARMA 3 Main Menu > Learn > Virtual Arsenal), clicking Export,
	* then pasting into a text document.
	*
	* For placing multiples of some object in inventory, type the
	* classname, a colon, then the number of that item to place.
	* For example, if we want the Car class to contain 12 ACE Bandages,
	* then we include "ACE_fieldDressing:12".
	*
	* When #define-ing the standard magazine loadouts, you can list
	* multiple magazine types and counts by separating them with a comma.
	* For example:
	* #define WEST_RIFLE_MAG "hlc_30rnd_556x45_EPR:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"
	*
	* This will add 8 EPR magazines and 2 yellow tracer magazines to
	* the loadout.
	*/

	// Rifle
	#define WEST_RIFLE "hlc_rifle_falosw"
	#define WEST_RIFLE_MAG "hlc_20Rnd_762x51_B_fal:12"
	#define WEST_RIFLE_MAG_L "hlc_20Rnd_762x51_B_fal:8"
	#define WEST_RIFLE_SCOPE "UK3CB_BAF_TA648_308"
	#define WEST_RIFLE_RAIL "rhsusf_acc_anpeq15A"
	#define WEST_RIFLE_CAN "muzzle_snds_B"
	// GL Rifle
	#define WEST_GLRIFLE "hlc_rifle_osw_GL"
	#define WEST_GLRIFLE_MAG "hlc_20Rnd_762x51_B_fal:12"
	#define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeGreen_Grenade_shell:1","1Rnd_SmokeRed_Grenade_shell:1"
	#define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:14"
	#define WEST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareGreen_F:2"
	#define WEST_GLRIFLE_SCOPE "UK3CB_BAF_TA648_308"
	#define WEST_GLRIFLE_RAIL "rhsusf_acc_anpeq15A"
	// Carbine
	#define WEST_CARBINE "rhs_weap_m4a1_carryhandle_grip"
	#define WEST_CARBINE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_m18_red:2"
	#define WEST_CARBINE_SCOPE "rhsusf_acc_eotech_552"
	#define WEST_CARBINE_RAIL "rhsusf_acc_anpeq15A"
	// AR
	#define WEST_AR "hlc_lmg_mk48mod1"
	#define WEST_AR_MAG "rhsusf_100Rnd_762x51_m80a1epr:4"
	#define WEST_AR_MAG2 "rhsusf_100Rnd_762x51_m80a1epr:4"
	#define WEST_AR_SCOPE "UK3CB_BAF_TA648_308"
	#define WEST_AR_RAIL "rhsusf_acc_anpeq15A"
	// AT
	#define WEST_AT "rhs_weap_rpg26"
	#define WEST_AT_MAG "rhs_rpg26_mag"
	// MMG
	#define WEST_MMG "rhs_weap_m240B"
	#define WEST_MMG_MAG "rhsusf_100Rnd_762x51:5"
	#define WEST_MMG_SCOPE "rhsusf_acc_eotech_552"
	#define WEST_MMG_RAIL "rhsusf_acc_anpeq15A"
	// MAT
	#define WEST_MAT "rhs_weap_rpg7"
	#define WEST_MAT_SCOPE "rhs_acc_pgo7v3"
	#define WEST_MAT_MAG "rhs_rpg7_PG7VL_mag:2","rhs_rpg7_OG7V_mag:4"
	// SAM
	#define WEST_SAM "rhs_weap_fim92"
	#define WEST_SAM_MAG "rhs_fim92_mag:2"
	//Mortar
	#define WEST_MORTAR "UK3CB_BAF_M6"
	#define WEST_MORTAR_HE "UK3CB_BAF_1Rnd_60mm_Mo_Shells:8"
	#define WEST_MORTAR_SMOKE "UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White:2"
	#define WEST_MORTAR_ILLUM "UK3CB_BAF_1Rnd_60mm_Mo_Flare_White:2"
	// Sniper Rifle
	#define WEST_SNIPER "rhs_weap_XM2010_wd_leu"
	#define WEST_SNIPER_MAG "rhsusf_5Rnd_300winmag_xm2010:30"
	#define WEST_SNIPER_SCOPE "rhsusf_acc_LEUPOLDMK4_2"
	#define WEST_SNIPER_RAIL "rhsusf_acc_anpeq15side","bipod_01_F_khk"
	#define WEST_SNIPER_CAN "rhsusf_acc_M2010S"
	// Spotter Rifle
	#define WEST_SPOTTER "hlc_rifle_falosw"
	#define WEST_SPOTTER_MAG "hlc_20Rnd_762x51_B_fal:12"
	#define WEST_SPOTTER_SCOPE "rhsusf_acc_LEUPOLDMK4_2"
	#define WEST_SPOTTER_RAIL "rhsusf_acc_anpeq15A"
	//Grenadier
	#define WEST_SIXPACK "RHS_WEAP_M32"
	#define WEST_SIXPACK_HEDP_MAG "RHSUSF_MAG_6RND_M433_HEDP:7"
	#define WEST_SIXPACK_BUCKSHOT_MAG "RHSUSF_MAG_6RND_M576_BUCKSHOT:3"
	// SMG
	#define WEST_SMG "hlc_smg_mp5sd6"
	#define WEST_SMG_MAG "hlc_30Rnd_9x19_GD_MP5:6"
	#define WEST_SMG_SCOPE "rhsusf_acc_eotech_552"
	#define WEST_SMG_RAIL "rhsusf_acc_anpeq15A"
	// Pistol
	#define WEST_PISTOL "rhsusf_weap_glock17g4"
	#define WEST_PISTOL_MAG "rhsusf_mag_17Rnd_9x19_JHP:3"

	// Radio
	#define WEST_RADIO_RIFLEMAN "ACRE_PRC343"
	#define WEST_RADIO_SHORTWAVE "ACRE_PRC152"
	#define WEST_RADIO_MANPACK "ACRE_PRC117F"
	// Throwables
	#define WEST_SMOKE_WHITE "SmokeShell:2"
	#define WEST_SMOKE_COLOR "SmokeShellGreen:2"
	#define WEST_CHEMLIGHT "Chemlight_green:2"
	#define WEST_FRAG "HandGrenade:4"
	#define WEST_FLASHBANG "rhs_mag_mk84:4"
	// Backpacks
	#define WEST_PACK_LIGHT "VSM_OGA_OD_Backpack_Compact"
	#define WEST_PACK_MEDIUM "VSM_OGA_OD_Backpack_Kitbag"
	#define WEST_PACK_HEAVY "VSM_OGA_OD_carryall"
	// Upgun ammo
	#define WEST_HMG_MAG "UK3CB_BAF_127_100Rnd:10"
	#define WEST_CMG_MAG "UK3CB_BAF_762_200Rnd_T:5"
	
	// By default, BLUFOR uses White, Black, and Asian faces.
	// If you want something else, specify the list here.
	faces[] = {};

	// Define the cargo for Vehicles
	class Car {
		TransportWeapons[]={
			WEST_AT,
			WEST_AT
		};
		TransportMagazines[] = {
			WEST_RIFLE_MAG,
			WEST_RIFLE_MAG,
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_AT,
			WEST_FRAG,
			WEST_FRAG,
			WEST_FRAG,
			WEST_SMOKE_COLOR,
			WEST_SMOKE_COLOR,
			WEST_SMOKE_WHITE,
			WEST_SMOKE_WHITE,
			WEST_HMG_MAG,
			WEST_CMG_MAG
		};
		TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4",
			WEST_RADIO_SHORTWAVE
		};
	};

	// Define the cargo for Tanks
	class Tank {
		TransportMagazines[] = {
			WEST_RIFLE_MAG,
			WEST_RIFLE_MAG,
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_AT,
			WEST_FRAG,
			WEST_FRAG,
			WEST_FRAG,
			WEST_SMOKE_COLOR,
			WEST_SMOKE_COLOR,
			WEST_SMOKE_WHITE,
			WEST_SMOKE_WHITE
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
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_FRAG,
			WEST_FRAG,
			WEST_SMOKE_COLOR,
			WEST_SMOKE_COLOR,
			WEST_SMOKE_WHITE,
			WEST_SMOKE_WHITE
		};
		TransportItems[] = {
			"ACE_fieldDressing:12",
			"ACE_morphine:4",
			WEST_RADIO_SHORTWAVE
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

	/*
	NOTE This comment can be deleted when copied in actual loadout files
	-Rifleman
	-Officer
	-Squad leader
	-Team leader
	-Autorifleman
	-UAV Operator
	-Assistant Autorifleman
	-AT Rifleman
	-Medic
	-MMG Gunner
	-MMG Spotter
	-MAT Gunner
	-MAT Assistant
	-SAM Gunner
	-SAM Assistant
	-Mortar Gunner
	-Mortar Assistant

	Each specific class can add to or completely override the
	loadouts defined by this base
	*/
	class B_Soldier_F {
		/* Randomized gear
		One item from each of these lists will be chosen at
		random when the unit spawns.

		Leave the list empty {} to add nothing of that type.
		*/

		// Define the list of possible uniforms that units will wear
		uniform[] = {
			"VSM_MulticamTropic_Crye_SS_Camo"
		};
		// Define the list of possible vests that units will wear
		vest[] = {
			"VSM_FAPC_Operator_MulticamTropic"
		};
		// Define the list of possible headgear that units will wear
		headgear[] = {
			"rhsusf_opscore_mar_fg_pelt"
		};
		// Define the list of possible facewear that units will wear
		facewear[] = {
				"VSM_FaceMask_olive",
				"VSM_FaceMask_Ghost_olive"
		};
		// Define the list of possible backpacks that units will wear
		backpack[] = {
			WEST_PACK_LIGHT
		};
		// Define the list of possible primary weapons that units
		// will be assigned
		weapons[] = {WEST_RIFLE};
		// Define the list of possible launcher weapons that units
		// will be assigned
		launchers[] = {};
		// Define the list of possible sidearms that units
		// will be assigned
		handguns[] = {WEST_PISTOL};
		/* END Randomized Gear */

		/*
		Gear lists

		These lists are not randomized; all items from these lists
		will selected and placed in the unit's inventory.
		Leave them empty {} to add nothing of that type by default.
		*/

		// List the items (along with the amount) that will be placed
		// specifically in the unit's backpack
		backpackItems[] = {
			"ACE_fieldDressing:4",
			"ACE_morphine:2",
			"ACE_IR_Strobe_item"
		};
		// List the magazines, explosives, and throwables
		// that will be placed wherever there is room in the unit's
		// inventory
		magazines[] = {
			WEST_RIFLE_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_PISTOL_MAG
		};
		// List the items (along with the amount) that will be placed
		// wherever there is room in the unit's inventory
		items[] = {
			WEST_RADIO_RIFLEMAN
		};
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
			WEST_RIFLE_SCOPE,
			WEST_RIFLE_RAIL,
			WEST_RIFLE_CAN
		};
		// Set the basic radio for the unit
	};

	/* END RIFLEMAN BASE */

	/* RIFLEMAN EXTENSIONS */

	/*
	The next set of units all copy their gear from the Rifleman Base,
	as defined with the : in the class definition. For example,

	class B_officer_F : B_Soldier_F

	says that B_officer_F will have the same properties and data
	as B_Soldier_F unless specifically set otherwise.

	You can override a certain type of gear by setting it to something
	new using =
	For example:
	backpack[] = {WEST_RADIO_MANPACK};

	Instead of replacing gear, you can also add to gear by using +=
	For example, to add GPS in addition to the base Watch, Map,
	and Compass:
	linkedItems[] += {"ItemGPS"};
	*/
	
	//Close Protection
	class B_Soldier_lite_F: B_Soldier_F {
		weapons[]={WEST_SMG};
		magazines[]= {
			WEST_SMG_MAG,
			WEST_PISTOL_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_SMOKE_COLOR,
			WEST_FLASHBANG
		};
		attachments[]= {
			WEST_SMG_SCOPE,
			WEST_SMG_RAIL
		};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			WEST_RADIO_SHORTWAVE,
			WEST_RADIO_RIFLEMAN
		};
		linkedItems[] = {
			"ItemWatch",
			"ItemMap",
			"ItemCompass",
			"itemGPS",
			"rhsusf_ANPVS_15"
		};
	};

	// CO and DC
	// Define gear additions and overrides for Officer units
	class B_officer_F: B_Soldier_F {
		backpack[] = {WEST_PACK_MEDIUM};
		weapons[] = {WEST_GLRIFLE};
		magazines[] = {
			WEST_GLRIFLE_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_GLRIFLE_MAG_SMOKE,
			WEST_PISTOL_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_SMOKE_COLOR
		};
    attachments[] = {
			WEST_GLRIFLE_SCOPE,
			WEST_GLRIFLE_RAIL,
			WEST_RIFLE_CAN
		};
		handguns[] = {WEST_PISTOL}; 
		backpackItems[] += {WEST_RADIO_SHORTWAVE};
		linkedItems[] += {
			"ItemGPS",
			"ACE_Vector"
		};
		items[] = {
			"ACE_MapTools",
			WEST_RADIO_RIFLEMAN
			};
	};

	// SL
	// Define gear additions and overrides for Squad Leader units
	class B_Soldier_SL_F: B_Officer_F {
		backpack[] = {WEST_PACK_MEDIUM};
		linkedItems[] += {
			"Binocular"
		};
		items[] = {
			"ACE_MapTools",
			WEST_RADIO_RIFLEMAN
			};
		backpackItems[] += {
			"ACE_fieldDressing",
			WEST_RADIO_SHORTWAVE
			};
	};

	// UAV
	// Define gear additions and overrides for UAV Operator units
	class B_Soldier_UAV_F: B_Soldier_F {
		backpack[] = {"B_rhsusf_B_BACKPACK"};
		linkedItems[] += {
			"B_uavterminal"
			};
		items[] = {
			"ACE_MapTools",
			WEST_RADIO_RIFLEMAN
			};
	};

	// FTL
	// Define gear additions and overrides for Team Leader units
	class B_Soldier_TL_F: B_Soldier_F {
		weapons[] = {WEST_GLRIFLE};
		magazines[] = {
			WEST_GLRIFLE_MAG,
			WEST_GLRIFLE_MAG_HE,
			WEST_GLRIFLE_MAG_SMOKE,
			WEST_SMOKE_COLOR,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_SMOKE_WHITE,
			WEST_PISTOL_MAG
		};
    attachments[] = {
			WEST_GLRIFLE_SCOPE,
			WEST_GLRIFLE_RAIL,
			WEST_RIFLE_CAN
		};
		handguns[] = {WEST_PISTOL}; 
		items[] = {
			"ACE_MapTools",
			WEST_RADIO_RIFLEMAN
			};
		backpackItems[] += {WEST_RADIO_SHORTWAVE};
		linkedItems[] += {
			"ItemGPS",
			"Binocular"
		};
	};
	// Grenadier
	// Define gear additions and overrides for Grenadier units
	class B_Soldier_GL_F: B_Soldier_TL_F {
		weapons[]= {WEST_SIXPACK};
		magazines[]= {
			WEST_SIXPACK_HEDP_MAG,
			WEST_SIXPACK_BUCKSHOT_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_PISTOL_MAG,
			WEST_PISTOL_MAG
		};
	};
	// AR
	// Define gear additions and overrides for Autorifleman units
	class B_Soldier_AR_F: B_Soldier_F {
		vest[] = {"VSM_FAPC_MG_MulticamTropic"};
		weapons[] = {WEST_AR};
		magazines[] = {
			WEST_AR_MAG,
			WEST_AR_MAG,
			WEST_PISTOL_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE
		};
    attachments[] = {
			WEST_AR_SCOPE,
			WEST_AR_RAIL
		};
		handguns[] = {WEST_PISTOL};
	};

	// AAR
	// Define gear additions and overrides for Asst Autorifleman units
	class B_Soldier_AAR_F: B_Soldier_F {
		backpack[] = {WEST_PACK_MEDIUM};
		backpackItems[] += {WEST_AR_MAG2};
		linkedItems[] += {"Binocular"};
	};

	// RAT
	// Define gear additions and overrides for AT Rifleman units
	class B_Soldier_LAT_F: B_Soldier_F {
		weapons[] = {WEST_RIFLE};
		magazines[] = {
			WEST_RIFLE_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_PISTOL_MAG
		};
		launchers[] = {WEST_AT};
	};

	// Medic
	// Define gear additions and overrides for Medic units
	class B_medic_F: B_Soldier_F {
		weapons[] = {WEST_RIFLE};
		magazines[] = {
			WEST_RIFLE_MAG,
			WEST_SMOKE_WHITE,
			WEST_SMOKE_WHITE,
			WEST_SMOKE_WHITE,
			WEST_PISTOL_MAG
		};
		backpackItems[] = {
			"Medikit",
			"FirstAidKit:3"
		};
	};

	// MMG
	// Define gear additions and overrides for MMG Gunner units
	class B_support_MG_F: B_Soldier_F {
		vest[] = {"VSM_FAPC_MG_MulticamTropic"};
		weapons[] = {WEST_MMG};
		magazines[] = {
			WEST_MMG_MAG,
			WEST_PISTOL_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_PISTOL_MAG
		};
		handguns[] = {WEST_PISTOL}; /// randomized
		attachments[] = {
			WEST_MMG_SCOPE,
			WEST_MMG_RAIL
		};
	};

	// MMG Asst
	// Define gear additions and overrides for MMG Spotter units
	class B_Soldier_A_F: B_Soldier_F {
		backpack[] = {WEST_PACK_HEAVY};
		magazines[] = {
			WEST_RIFLE_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_PISTOL_MAG
		};
		backpackItems[] += {
			WEST_MMG_MAG,
			WEST_MMG_MAG
			};
		linkedItems[] += {"ACE_Vector"};
	};

	// Medium AT
	// Define gear additions and overrides for MAT Gunner units
	class B_Soldier_AT_F: B_Soldier_F {
		weapons[] = {WEST_RIFLE};
		magazines[] = {
			WEST_RIFLE_MAG_L,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_PISTOL_MAG
		};
		launchers[] = {WEST_MAT};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
		backpack[] = {WEST_PACK_MEDIUM};
		backpackItems[] = {WEST_MAT_MAG};
		attachments[] = {
			WEST_RIFLE_SCOPE,
			WEST_RIFLE_RAIL,
			WEST_RIFLE_CAN,
			WEST_MAT_SCOPE
		};
	};

	// Medium AT Asst
	// Define gear additions and overrides for MAT Spotter units
	class B_Soldier_AAT_F: B_Soldier_F {
		backpack[] = {WEST_PACK_MEDIUM};
		backpackItems[] = {WEST_MAT_MAG};
		linkedItems[] += {"ACE_Vector"};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
	};

	// AA Gunner
	// Define gear additions and overrides for AA Gunner units
	class B_Soldier_AA_F: B_Soldier_F {
		backpack[] = {WEST_PACK_HEAVY};
		weapons[] = {WEST_CARBINE};
		magazines[] = {
			WEST_CARBINE_MAG,
			WEST_FRAG,
			"MiniGrenade:1",
			WEST_SMOKE_WHITE
		};
		launchers[] = {WEST_SAM};
		backpackItems[] += {WEST_SAM_MAG};
	};

	// AA Asst
	// Define gear additions and overrides for AA Spotter units
	class B_Soldier_AAA_F: B_Soldier_F {
		backpack[] = {WEST_PACK_HEAVY};
		backpackItems[] = {WEST_SAM_MAG};
		linkedItems[] += {"ACE_Vector"};
	};

	// Mortar Gunner
	// Define gear additions and overrides for Mortar Gunner units
	class B_support_Mort_F: B_Soldier_F {
		weapons[] = {WEST_RIFLE};
		magazines[] = {
			WEST_RIFLE_MAG_L,
			WEST_FRAG,
			WEST_MORTAR_HE,
			WEST_MORTAR_SMOKE,
			WEST_PISTOL_MAG
		};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
		backpack[] = {WEST_PACK_HEAVY};
		launchers[]={WEST_MORTAR};
	};

	// Mortar Asst
	// Define gear additions and overrides for Mortar Asst units
	class B_support_AMort_F: B_Soldier_F {
		magazines[] = {
			WEST_RIFLE_MAG_L,
			WEST_FRAG,
			WEST_SMOKE_WHITE,
			WEST_MORTAR_HE,
			WEST_MORTAR_SMOKE,
			WEST_PISTOL_MAG
		};
		backpack[] = {WEST_PACK_HEAVY};
		linkedItems[] += {"ACE_Vector"};
		items[] += {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
	};

	/* END RIFLEMAN EXTENSIONS */

	/* SPOTTER BASE */

	// Define the base class for Spotter units
	class B_spotter_F {
		uniform[] = {
			"VSM_MulticamTropic_Crye_SS_Camo"
		};
		vest[] = {
			"VSM_FAPC_Operator_MulticamTropic"
		};
		headgear[] = {
			"rhsusf_opscore_mar_fg_pelt"
		};
		facewear[] = {
			"VSM_FaceMask_olive"
		};
		backpack[] = {
			WEST_PACK_LIGHT
		};

		weapons[] = {WEST_SPOTTER};
		launchers[] = {};
		handguns[] = {WEST_PISTOL};

		magazines[] = {
			WEST_SPOTTER_MAG,
			WEST_SMOKE_WHITE,
			WEST_FRAG,
			WEST_PISTOL_MAG
		};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
		backpackItems[] = {WEST_RADIO_SHORTWAVE};
		linkedItems[] = {
			"itemWatch",
			"itemMap",
			"itemCompass",
			"itemGPS",
			"LaserDesignator",
			"rhsusf_ANPVS_15"
		};
    attachments[] = {
			WEST_SPOTTER_SCOPE,
			WEST_SPOTTER_RAIL,
			WEST_RIFLE_CAN
		};
	};

	/* SNIPER BASE */

	// Define the base class for Sniper units
	class B_sniper_F:B_spotter_F {
		backpack[] = {
			WEST_PACK_LIGHT
		};

		weapons[] = {WEST_SNIPER};

		magazines[] = {
			WEST_SNIPER_MAG,
			WEST_SMOKE_WHITE,
			WEST_FRAG
		};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine"
		};
		backpackItems[] = {WEST_RADIO_SHORTWAVE};
		linkedItems[] = {
			"itemWatch",
			"itemMap",
			"itemCompass",
			"itemGPS",
			"LaserDesignator",
			"rhsusf_ANPVS_15"
		};
		attachments[] = {
			WEST_SNIPER_SCOPE,
			WEST_SNIPER_RAIL,
			WEST_SNIPER_CAN
		};
	};

	/* HELICOPTER CREW BASE */

	// Heli Pilot
	// Define the base class for all Helicopter pilot and crew units
	class B_Helipilot_F {
		uniform[] = {
			"U_C_Man_casual_2_F"
		};
		headgear[] = {"H_PilotHelmetHeli_B"};
		vest[] = {
			"VSM_OGA_OD_VEST_2"
		};
		facewear[] = {nil};
		backpack[] = {
			WEST_PACK_LIGHT
		};

		weapons[] = {WEST_SMG};
		launchers[] = {};
		handguns[] = {WEST_PISTOL};

		magazines[] = {
			WEST_SMG_MAG,
			WEST_PISTOL_MAG,
			WEST_SMOKE_WHITE
		};
		items[] = {
			"ACE_fieldDressing:3",
			"ACE_morphine",
			WEST_RADIO_SHORTWAVE
		};
		linkedItems[] = {
			"ItemWatch",
			"ItemMap",
			"ItemCompass",
			"itemGPS",
			"rhsusf_ANPVS_15"
		};
    attachments[] = {
			WEST_SMG_SCOPE,
			WEST_SMG_RAIL
		};

	};

	// Heli crew
	// Define gear additions and overrides for Helicopter Crew units
	class B_helicrew_F: B_Helipilot_F {
		// No changes
	};

	/* VEHICLE CREW BASE */

	// Define the base class for all vehicle crew and engineer units
	class B_crew_F: B_Soldier_F {
		
		facewear[] = {
			nil
		};
		backpack[] = {
			WEST_PACK_LIGHT
		};

		weapons[] = {WEST_SMG};
		launchers[] = {};
		handguns[] = {};

		magazines[] = {
			WEST_SMG_MAG,
			WEST_SMOKE_WHITE
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
    attachments[] = {
			WEST_SMG_SCOPE,
			WEST_SMG_RAIL
		};
	};

	// Repair Specialist
	// Define gear additions and overrides for Repair Specialist units
	// as well as the base class for all Explosive/Mine specialists
	class B_Soldier_repair_F: B_crew_F {
		weapons[] = {WEST_RIFLE};
		magazines[] = {
			WEST_RIFLE_MAG,
			WEST_FRAG,
			WEST_SMOKE_WHITE
		};
    attachments[] = {
			WEST_RIFLE_SCOPE,
			WEST_RIFLE_RAIL
		};
		backpack[] = {WEST_PACK_MEDIUM};
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
			WEST_RIFLE_MAG,
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
			WEST_RIFLE_MAG,
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
