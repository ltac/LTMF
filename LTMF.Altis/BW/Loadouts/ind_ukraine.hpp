/*
* Description:
* Loadout definition for Ukrainian forces
* Weapons: AK-47/74/PKM/RPG variants
* Uniforms: MNP Ukrainian
* Limited NVG, GPS, and Optics
*
* Author:
* BWMF
* modified by Legion Tactical
*/
class ind_f {
  //Rifle
  #define IND_RIFLE "hlc_rifle_ak74"
  #define IND_RIFLE_MAG "hlc_30Rnd_545x39_B_AK:8","hlc_30Rnd_545x39_t_ak:2"
  #define IND_RIFLE_SCOPE "RH_barska_rds"
  #define IND_RIFLE_RAIL "acc_flashlight"
  //GL Rifle
  #define IND_GLRIFLE "hlc_rifle_aks74_GL"
  #define IND_GLRIFLE_MAG "hlc_30Rnd_545x39_B_AK:8","hlc_30Rnd_545x39_t_ak:2"
  #define IND_GLRIFLE_MAG_SMOKE "hlc_GRD_White:4","hlc_GRD_green:2","hlc_GRD_Red:3"
  #define IND_GLRIFLE_MAG_HE "hlc_VOG25_AK:14"
  #define IND_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareGreen_F:2"
  #define IND_GLRIFLE_SCOPE "RH_barska_rds"
  #define IND_GLRIFLE_RAIL "acc_flashlight"
  //Carbine
  #define IND_CARBINE "hlc_rifle_ak74"
  #define IND_CARBINE_MAG "hlc_30Rnd_545x39_B_AK:8","hlc_30Rnd_545x39_t_ak:2"
  #define IND_CARBINE_SCOPE "RH_barska_rds"
  #define IND_CARBINE_RAIL "acc_flashlight"
  // AR
  #define IND_AR "rhs_weap_pkm"
  #define IND_AR_MAG "rhs_100Rnd_762x54mmR:2"
  #define IND_AR_MAG2 "rhs_100Rnd_762x54mmR_green:2"
  #define IND_AR_SCOPE "RH_barska_rds"
  #define IND_AR_RAIL "acc_flashlight"
  // AT
  #define IND_AT "rhs_weap_rpg7"
  #define IND_AT_MAG "rhs_rpg7_PG7VL_mag:3"
  // MMG
  #define IND_MMG "rhs_weap_pkm"
  #define IND_MMG_MAG "rhs_100Rnd_762x54mmR:5"
  #define IND_MMG_SCOPE "RH_barska_rds"
  #define IND_MMG_RAIL "acc_flashlight"
  // MAT
  #define IND_MAT "rhs_weap_rpg7"
  #define IND_MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_PG7VL_mag:1"
  // SAM
  #define IND_SAM "rhs_weap_igla"
  #define IND_SAM_MAG "rhs_mag_9k38_rocket:2"
  // Sniper Rifle
  #define IND_SNIPER "rhs_weap_svdp"
  #define IND_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
  #define IND_SNIPER_SCOPE "rhsusf_acc_LEUPOLDMK4_2"
  #define IND_SNIPER_RAIL "acc_flashlight"
  // Spotter Rifle
  #define IND_SPOTTER "rhs_weap_svdp"
  #define IND_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
  #define IND_SPOTTER_SCOPE "RH_barska_rds"
  #define IND_SPOTTER_RAIL "acc_flashlight"
  // SMG
  #define IND_SMG "hlc_rifle_aks74u"
  #define IND_SMG_MAG "hlc_30Rnd_545x39_B_AK:6"
  #define IND_SMG_SCOPE "RH_barska_rds"
  #define IND_SMG_RAIL "acc_flashlight"
  // Pistol
  #define IND_PISTOL "rhs_weap_makarov_pmm"
  #define IND_PISTOL_MAG "rhs_mag_9x18_12_57N181S:4"
  // Radio
  #define IND_RADIO_RIFLEMAN "tf_anprc154"
  #define IND_RADIO_SHORTWAVE "tf_anprc148jem"
  #define IND_RADIO_MANPACK "tf_anprc155"
  #define IND_RADIO_AIRBORNE "tf_anarc164"
  // Throwables
  #define IND_SMOKE_WHITE "rhs_mag_rdg2_white:2"
  #define IND_SMOKE_COLOR "rhs_mag_rdg2_black:2"
  #define IND_CHEMLIGHT "Chemlight_yellow:2"
  #define IND_FRAG "rhs_mag_rgd5:2"
  // Backpacks
  #define IND_PACK_LIGHT "B_AssaultPack_rgr","B_AssaultPack_blk"
  #define IND_PACK_MEDIUM "B_Kitbag_rgr"
  #define IND_PACK_HEAVY "B_Carryall_oli"

  // Define the cargo for Vehicles
  class Car {
    TransportMagazines[] = {
      IND_RIFLE_MAG,
      IND_RIFLE_MAG,
      IND_CARBINE_MAG,
      IND_AR_MAG,
      IND_AR_MAG,
      IND_GLRIFLE_MAG_HE,
      IND_AT_MAG
    };
    TransportItems[] = {
      "ACE_fieldDressing:12",
      "ACE_morphine:4"
    };
  };

  // Define the cargo for Tanks
  class Tank {
    TransportMagazines[] = {
      IND_RIFLE_MAG,
      IND_RIFLE_MAG,
      IND_CARBINE_MAG,
      IND_AR_MAG,
      IND_AR_MAG,
      IND_GLRIFLE_MAG_HE,
      IND_AT_MAG
    };
    TransportItems[] = {
      "ACE_fieldDressing:12",
      "ACE_morphine:4"
    };
  };

  // Define the cargo for Helicopters
  class Helicopter {
    TransportMagazines[] = {
      IND_RIFLE_MAG,
      IND_RIFLE_MAG,
      IND_CARBINE_MAG,
      IND_AR_MAG,
      IND_AR_MAG,
      IND_GLRIFLE_MAG_HE
    };
    TransportItems[] = {
      "ACE_fieldDressing:12",
      "ACE_morphine:4",
      "ItemGPS"
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
  class I_Soldier_F {
    /* Randomized gear
    One item from each of these lists will be chosen at
    random when the unit spawns.

    If you want "nothing" to be one of the random options,
    just include nil in the list

    Leave the list empty {} to add nothing of that type.
    */

    // Define the list of possible uniforms that units will wear
    uniform[] = {
      "MNP_CombatUniform_Ukrainian"
    };
    // Define the list of possible vests that units will wear
    vest[] = {
      "MNP_Vest_UKR_A",
      "MNP_Vest_UKR_B"
    };
    // Define the list of possible headgear that units will wear
    headgear[] = {
      "MNP_Helmet_PAGST_UKR"
    };
    // Define the list of possible facewear that units will wear
    facewear[] = {
      nil,
      "rhs_balaclava",
      "G_Balaclava_oli",
      "G_Shades_Black",
      "G_Shades_Blue",
      "G_Shades_Green",
      "G_Shades_Red",
      "rhs_scarf",
      "G_Bandanna_oli",
      "G_Bandanna_blk",
      "G_Bandanna_shades"
    };
    // Define the list of possible backpacks that units will wear
    backpack[] = {
      IND_PACK_LIGHT
    };

    // Define the list of possible primary weapons that units
    // will be assigned
    weapons[] = {IND_RIFLE};
    // Define the list of possible launcher weapons that units
    // will be assigned
    launchers[] = {};
    // Define the list of possible sidearms that units
    // will be assigned
    handguns[] = {};
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

    };
    // List the magazines, explosives, and throwables
    // that will be placed wherever there is room in the unit's
    // inventory
    magazines[] = {
      IND_RIFLE_MAG,
      IND_FRAG,
      IND_SMOKE_WHITE
    };
    // List the items (along with the amount) that will be placed
    // wherever there is room in the unit's inventory
    items[] = {
      "ACE_fieldDressing:3",
      "ACE_morphine",
      "ACE_IR_Strobe_item",
      "ACE_CableTie",
      "ACE_Flashlight_XL50"
    };
    // List the gear items txhat should be automatically slotted
    // correctly for the unit (like Map, Watch, NVG, etc)
    linkedItems[] = {
      "ItemMap",
      "ItemCompass",
      "ItemWatch"
    };
    // List the attachments that will be automatically added
    // to the unit's equipped weapons
    attachments[] = {
			IND_RIFLE_RAIL
		};
    // Set the basic radio for the unit
    radio = true;
  };

  /* END RIFLEMAN BASE */

  /* RIFLEMAN EXTENSIONS */

  // CO and DC
  // Define gear additions and overrides for Officer units
  class I_officer_F: I_Soldier_F {
    weapons[] = {IND_GLRIFLE};
    magazines[] = {
      IND_GLRIFLE_MAG,
      IND_GLRIFLE_MAG_HE,
      IND_GLRIFLE_MAG_SMOKE,
      IND_GLRIFLE_MAG_FLARE,
      IND_PISTOL_MAG,
      IND_FRAG,
      IND_SMOKE_WHITE,
      IND_SMOKE_COLOR
    };
    attachments[] = {
			IND_GLRIFLE_SCOPE,
			IND_GLRIFLE_RAIL
		};
    handguns[] = {IND_PISTOL}; /// randomized
    backpackItems[] += {"ACE_key_indp"};
    linkedItems[] += {
      "ItemGPS",
      "ACE_Vector",
      "rhsusf_ANPVS_15"
    };
    items[] = {"ACE_MapTools"};
    radio = true;
    lr_radio = true
  };

  // SL
  // Define gear additions and overrides for Squad Leader units
  class I_Soldier_SL_F: I_Officer_F {
    linkedItems[] += {
      "Binocular",
      "rhsusf_ANPVS_15"
    };
    items[] = {"ACE_MapTools"};
    backpackItems[] += {"ACE_fieldDressing"};
    radio = true;
    lr_radio = true
  };

  // UAV
  // Define gear additions and overrides for UAV Operator units
  class I_Soldier_UAV_F: I_Soldier_F {
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    linkedItems[] += {
      "I_uavterminal"
    };
    radio = true;
  };

  // FTL
  // Define gear additions and overrides for Team Leader units
  class I_Soldier_TL_F: I_Soldier_F {
    weapons[] = {IND_GLRIFLE};
    magazines[] = {
      IND_GLRIFLE_MAG,
      IND_GLRIFLE_MAG_HE,
      IND_GLRIFLE_MAG_SMOKE,
      IND_GLRIFLE_MAG_FLARE,
      IND_SMOKE_COLOR,
      IND_FRAG,
      IND_SMOKE_WHITE,
      IND_FRAG,
      IND_SMOKE_WHITE
    };
    attachments[] = {
			IND_GLRIFLE_SCOPE,
			IND_GLRIFLE_RAIL
		};
    backpackItems[] += {"ACE_key_indp"};
    linkedItems[] += {
      "ItemGPS",
      "Binocular"
    };
  };

  // AR
  // Define gear additions and overrides for Autorifleman units
  class I_Soldier_AR_F: I_Soldier_F {
    weapons[] = {IND_AR};
    magazines[] = {
      IND_AR_MAG,
      IND_PISTOL_MAG,
      IND_FRAG,
      IND_SMOKE_WHITE
    };
    attachments[] = {
			IND_AR_SCOPE,
			IND_AR_RAIL
		};
    handguns[] = {IND_PISTOL}; /// randomized
  };

  // AAR
  // Define gear additions and overrides for Asst Autorifleman units
  class I_Soldier_AAR_F: I_Soldier_F {
    backpackItems[] += {IND_AR_MAG2};
    attachments[] = {"optic_MRCO"};
    linkedItems[] += {"Binocular"};
  };

  // RAT
  // Define gear additions and overrides for AT Rifleman units
  class I_Soldier_LAT_F: I_Soldier_F {
    weapons[] = {IND_CARBINE};
    magazines[] = {
      IND_CARBINE_MAG,
      IND_AT_MAG,
      IND_FRAG,
      IND_SMOKE_WHITE
    };
    launchers[] = {IND_AT};
  };

  // Medic
  // Define gear additions and overrides for Medic units
  class I_medic_F: I_Soldier_F {
    weapons[] = {IND_CARBINE};
    magazines[] = {
      IND_CARBINE_MAG,
      IND_SMOKE_WHITE,
			IND_SMOKE_WHITE,
			IND_SMOKE_WHITE
    };
    backpackItems[] = {
      "Medikit",
      "FirstAidKit:3"
    };
  };

  // MMG
  // Define gear additions and overrides for MMG Gunner units
  class I_support_MG_F: I_Soldier_F {
    weapons[] = {IND_MMG};
    magazines[] = {
      IND_MMG_MAG,
      IND_PISTOL_MAG,
      "HandGrenade:1",
      IND_SMOKE_WHITE
    };
    handguns[] = {IND_PISTOL}; /// randomized
    attachments[] = {
			IND_MMG_SCOPE,
			IND_MMG_RAIL
		};
  };

  // MMG Asst
  // Define gear additions and overrides for MMG Spotter units
  class I_Soldier_A_F: I_Soldier_F {
    backpack[] = {IND_PACK_MEDIUM};
    backpackItems[] += {IND_MMG_MAG};
    linkedItems[] += {"ACE_Vector"};
  };

  // Medium AT
  // Define gear additions and overrides for MAT Gunner units
  class I_Soldier_AT_F: I_Soldier_F {
    weapons[] = {IND_CARBINE};
    magazines[] = {
      IND_CARBINE_MAG,
      IND_FRAG,
      IND_SMOKE_WHITE
    };
    launchers[] = {IND_MAT};
    items[] += {
      "ACE_fieldDressing:3",
      "ACE_morphine"
    };
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] = {IND_MAT_MAG};
  };

  // Medium AT Asst
  // Define gear additions and overrides for MAT Spotter units
  class I_Soldier_AAT_F: I_Soldier_F {
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] = {IND_MAT_MAG};
    linkedItems[] += {"ACE_Vector"};
    items[] += {
      "ACE_fieldDressing:3",
      "ACE_morphine"
    };
  };

  // AA Gunner
  // Define gear additions and overrides for AA Gunner units
  class I_Soldier_AA_F: I_Soldier_F {
    backpack[] = {IND_PACK_HEAVY};
    weapons[] = {IND_CARBINE};
    magazines[] = {
      IND_CARBINE_MAG,
      IND_FRAG,
      "rhs_mag_rgn:1",
      IND_SMOKE_WHITE
    };
    launchers[] = {IND_SAM};
    backpackItems[] += {IND_SAM_MAG};
  };

  // AA Asst
  // Define gear additions and overrides for AA Spotter units
  class I_Soldier_AAA_F: I_Soldier_F {
    backpack[] = {IND_PACK_HEAVY};
    backpackItems[] = {IND_SAM_MAG};
    linkedItems[] += {"ACE_Vector"};
  };

  // Mortar Gunner
  // Define gear additions and overrides for Mortar Gunner units
  class I_support_Mort_F: I_Soldier_F {
    weapons[] = {IND_CARBINE};
    magazines[] = {
      IND_CARBINE_MAG,
      IND_FRAG,
      IND_SMOKE_WHITE
    };
    items[] += {
      "ACE_fieldDressing:3",
      "ACE_morphine"
    };
    backpack[] = {"B_Mortar_01_weapon_F"};
  };

  // Mortar Asst
  // Define gear additions and overrides for Mortar Asst units
  class I_support_AMort_F: I_Soldier_F {
    backpack[] = {"B_Mortar_01_support_F"};
    linkedItems[] += {"ACE_Vector"};
    items[] += {
      "ACE_fieldDressing:3",
      "ACE_morphine"
    };
  };

  /* END RIFLEMAN EXTENSIONS */

  /* SPOTTER BASE */

  // Define the base class for Spotter units
  class I_spotter_F {
    uniform[] = {
      "MNP_CombatUniform_Ukrainian"
    };
    vest[] = {
      "MNP_Vest_UKR_A",
      "MNP_Vest_UKR_B"
    };
    headgear[] = {
      "MNP_Helmet_PAGST_UKR"
    };
    facewear[] = {
      nil,
      "G_Balaclava_oli",
      "G_Shades_Black",
      "G_Shades_Blue",
      "G_Shades_Green",
      "G_Shades_Red",
      "rhs_scarf",
      "G_Bandanna_oli",
      "G_Bandanna_blk",
      "G_Bandanna_shades"
    };
    backpack[] = {
      "B_AssaultPack_rgr",
      "B_AssaultPack_blk"
    };

    weapons[] = {IND_SPOTTER};
    launchers[] = {};
    handguns[] = {};

    magazines[] = {
      IND_SPOTTER_MAG,
      IND_SMOKE_WHITE,
      IND_FRAG
    };
    items[] = {
      "ACE_fieldDressing:3",
      "ACE_morphine",
      "ACE_CableTie",
      "ACE_Flashlight_XL50"
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
			IND_SPOTTER_SCOPE,
			IND_SPOTTER_RAIL
		};
    radio = true;
  };

  /* SNIPER BASE */

  // Define the base class for Sniper units
  class I_sniper_F {
    uniform[] = {
      "MNP_CombatUniform_Ukrainian"
    };
    vest[] = {
      "MNP_Vest_UKR_A",
      "MNP_Vest_UKR_B"
    };
    headgear[] = {
      "MNP_Helmet_PAGST_UKR"
    };
    facewear[] = {
      nil,
      "G_Balaclava_oli",
      "G_Shades_Black",
      "G_Shades_Blue",
      "G_Shades_Green",
      "G_Shades_Red",
      "rhs_scarf",
      "G_Bandanna_oli",
      "G_Bandanna_blk",
      "G_Bandanna_shades"
    };
    backpack[] = {
      "B_AssaultPack_rgr",
      "B_AssaultPack_blk"
    };

    weapons[] = {IND_SNIPER};
    launchers[] = {};
    handguns[] = {};

    magazines[] = {
      IND_SNIPER_MAG,
      IND_SMOKE_WHITE,
      IND_FRAG
    };
    items[] = {
      "ACE_fieldDressing:3",
      "ACE_morphine",
      "ACE_CableTie",
      "ACE_Flashlight_XL50"
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
			IND_SNIPER_SCOPE,
			IND_SNIPER_RAIL
		};
    radio = true;
  };

  /* HELICOPTER CREW BASE */

  // Heli Pilot
  // Define the base class for all Helicopter pilot and crew units
  class I_Helipilot_F {
    uniform[] = {
      "MNP_CombatUniform_Ukrainian"
    };
    headgear[] = {"rhsusf_cvc_green_helmet"};
    vest[] = {};
    facewear[] = {};
    backpack[] = {
      "B_AssaultPack_rgr",
      "B_AssaultPack_blk"
    };

    weapons[] = {IND_SMG};
    launchers[] = {};
    handguns[] = {IND_PISTOL};

    magazines[] = {
      IND_SMG_MAG,
      IND_PISTOL_MAG,
      IND_SMOKE_WHITE
    };
    backpackItems[] += {"ACE_key_indp"};
    items[] = {
      "ACE_fieldDressing:3",
      "ACE_morphine",
      "ACE_CableTie",
      "ACE_Flashlight_XL50"
    };
    linkedItems[] = {
      "ItemWatch",
      "ItemMap",
      "ItemCompass",
      "itemGPS",
      "rhsusf_ANPVS_15"
    };
    attachments[] = {
			IND_SMG_SCOPE,
			IND_SMG_RAIL
		};
    radio = true;
  };

  // Heli crew
  // Define gear additions and overrides for Helicopter Crew units
  class I_helicrew_F: I_Helipilot_F {
    // No changes
  };

  /* VEHICLE CREW BASE */

  // Define the base class for all vehicle crew and engineer units
  class I_crew_F {
    uniform[] = {
      "MNP_CombatUniform_Ukrainian"
    };
    headgear[] = {
      "MNP_Helmet_PAGST_UKR"
    };
    vest[] = {
      "MNP_Vest_UKR_A",
      "MNP_Vest_UKR_B"
    };
    facewear[] = {
      nil,
      "G_Balaclava_oli",
      "G_Shades_Black",
      "G_Shades_Blue",
      "G_Shades_Green",
      "G_Shades_Red",
      "rhs_scarf",
      "G_Bandanna_oli",
      "G_Bandanna_blk",
      "G_Bandanna_shades"
    };
    backpack[] = {
      "B_AssaultPack_rgr",
      "B_AssaultPack_blk"
    };

    weapons[] = {IND_SMG};
    launchers[] = {};
    handguns[] = {};

    magazines[] = {
      IND_SMG_MAG,
      IND_SMOKE_WHITE
    };
    backpackItems[] = {"ACE_key_indp"};
    items[] = {
      "ACE_fieldDressing:3",
      "ACE_morphine",
      "ACE_CableTie",
      "ACE_Flashlight_XL50"
    };
    linkedItems[] = {
      "ItemWatch",
      "ItemMap",
      "ItemCompass",
      "itemGPS"
    };
    attachments[] = {
			IND_SMG_SCOPE,
			IND_SMG_RAIL
		};
    radio = true;
  };

  // Repair Specialist
  // Define gear additions and overrides for Repair Specialist units
  // as well as the base class for all Explosive/Mine specialists
  class I_Soldier_repair_F: I_crew_F {
    weapons[] = {IND_CARBINE};
    magazines[] = {
      IND_CARBINE_MAG,
      IND_FRAG,
      IND_SMOKE_WHITE
    };
    attachments[] = {
			IND_CARBINE_SCOPE,
			IND_CARBINE_RAIL
		};
    backpack[] = {IND_PACK_MEDIUM};
    backpackItems[] = {"Toolkit"};
  };

  // Explosive Specialist
  // Define gear additions and overrides for Explosive Specialist units
  class I_Soldier_exp_F: I_Soldier_repair_F {
    backpackItems[] = {
      "Toolkit",
      "ACE_DefusalKit",
      "ACE_Clacker",
      "MineDetector"
    };
    magazines[] = {
      IND_CARBINE_MAG,
      "DemoCharge_Remote_Mag:3",
      "SatchelCharge_Remote_Mag:2"
    };
  };

  // Mine Specialist
  // Define gear additions and overrides for Mine Specialist units
  class I_engineer_F: I_Soldier_repair_F {
    backpackItems[] = {
      "Toolkit",
      "ACE_DefusalKit",
      "ACE_Clacker",
      "MineDetector"
    };
    magazines[] = {
      IND_CARBINE_MAG,
      "ATMine_Range_Mag:2",
      "APERSBoundingMine_Range_Mag:2",
      "APERSMine_Range_Mag:2"
    };
  };

  // Default if no other loadout can be found
  class fallback: I_soldier_f {
    // Same as normal rifleman
  };
};
