/*
* Description:
* Loadout definition for British Armed Forces - Desert Loadout
* Weapons: M4/M249/M240/M136 variants
* Uniforms: CUP BAF DDPM


uniformClass = "CUP_U_B_BAF_DDPM_S1_RolledUp";


* Ubiquitous NVG and Optics
*
* Author:
* BWMF
* modified by Legion Tactical
*/
class blu_f {

  // Rifle
  #define WEST_RIFLE "CUP_arifle_L85A2"
  #define WEST_RIFLE_MAG "CUP_30Rnd_556x45_G36:8","CUP_30Rnd_TE1_Red_Tracer_556x45_G36:2"
  #define WEST_RIFLE_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_RIFLE_RAIL "rhsusf_acc_anpeq15A"
  // GL Rifle
  #define WEST_GLRIFLE "CUP_arifle_L85A2_GL"
  #define WEST_GLRIFLE_MAG "CUP_30Rnd_556x45_G36:8","CUP_30Rnd_TE1_Red_Tracer_556x45_G36:2"
  #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
  #define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:8"
  #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareGreen_F:2"
  #define WEST_GLRIFLE_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_GLRIFLE_RAIL "rhsusf_acc_anpeq15A"
  // Carbine
  #define WEST_CARBINE "CUP_arifle_L85A2"
  #define WEST_CARBINE_MAG "CUP_30Rnd_556x45_G36:8","CUP_30Rnd_TE1_Red_Tracer_556x45_G36:2"
  #define WEST_CARBINE_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_CARBINE_RAIL "rhsusf_acc_anpeq15A"
  // AR
  #define WEST_AR "rhs_weap_m249_pip_L"
  #define WEST_AR_MAG "rhsusf_200Rnd_556x45_soft_pouch:2"
  #define WEST_AR_MAG2 "rhsusf_200Rnd_556x45_soft_pouch:2"
  #define WEST_AR_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_AR_RAIL "rhsusf_acc_anpeq15A"
  // AT
  #define WEST_AT "rhs_weap_M136"
  #define WEST_AT_MAG "rhs_m136_mag"
  // MMG
  #define WEST_MMG "rhs_weap_m240B"
  #define WEST_MMG_MAG "rhsusf_100Rnd_762x51:5"
  #define WEST_MMG_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_MMG_RAIL "rhsusf_acc_anpeq15A"
  // MAT
  #define WEST_MAT "launch_B_Titan_short_F"
  #define WEST_MAT_MAG "Titan_AT:2","Titan_AP:1"
  // SAM
  #define WEST_SAM "rhs_weap_fim92"
  #define WEST_SAM_MAG "rhs_fim92_mag:2"
  // Sniper Rifle
  #define WEST_SNIPER "rhs_weap_m14ebrri"
  #define WEST_SNIPER_MAG "rhsusf_20Rnd_762x51_m993_Mag:8"
  #define WEST_SNIPER_SCOPE "rhsusf_acc_LEUPOLDMK4_2"
  #define WEST_SNIPER_RAIL "rhsusf_acc_anpeq15side"
  // Spotter Rifle
  #define WEST_SPOTTER "rhs_weap_m4a1_blockII_grip2_KAC"
  #define WEST_SPOTTER_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8"
  #define WEST_SPOTTER_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_SPOTTER_RAIL "rhsusf_acc_anpeq15A"
  // SMG
  #define WEST_SMG "hlc_smg_mp5a4"
  #define WEST_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
  #define WEST_SMG_SCOPE "rhsusf_acc_eotech_552"
  #define WEST_SMG_RAIL "rhsusf_acc_anpeq15A"
  // Pistol
  #define WEST_PISTOL "CUP_hgun_Glock17"
  #define WEST_PISTOL_MAG "CUP_17Rnd_9x19_glock17:4"
  // Radio
  #define WEST_RADIO_RIFLEMAN "tf_rf7800str"
  #define WEST_RADIO_SHORTWAVE "tf_anprc152"
  #define WEST_RADIO_MANPACK "tf_rt1523g_sage"
  #define WEST_RADIO_AIRBORNE "tf_anarc210"
  // Throwables
  #define WEST_SMOKE_WHITE "SmokeShell:2"
  #define WEST_SMOKE_COLOR "SmokeShellGreen:2"
  #define WEST_CHEMLIGHT "Chemlight_green:2"
  #define WEST_FRAG "HandGrenade:2"
  // Backpacks
  #define WEST_PACK_LIGHT "rhsusf_assault_eagleaiii_coy"
  #define WEST_PACK_MEDIUM "B_Kitbag_khk"
  #define WEST_PACK_HEAVY "B_Carryall_khk"

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
      "CUP_U_B_BAF_DDPM_S1_RolledUp"
    };
    // Define the list of possible vests that units will wear
    vest[] = {
      "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1",
      "CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2"
    };
    // Define the list of possible headgear that units will wear
    headgear[] = {
      "CUP_H_BAF_Helmet_1_DDPM",
      "CUP_H_BAF_Helmet_2_DDPM",
      "CUP_H_BAF_Helmet_3_DDPM",
      "CUP_H_BAF_Helmet_4_DDPM"
    };
    // Define the list of possible facewear that units will wear
    facewear[] = {};
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
    handguns[] = {};

    // List the items (along with the amount) that will be placed
    // specifically in the unit's backpack
    backpackItems[] = {
      "ACE_fieldDressing:3",
      "ACE_morphine",
      "ACE_IR_Strobe_item"
    };
    // List the magazines, explosives, and throwables
    // that will be placed wherever there is room in the unit's
    // inventory
    magazines[] = {
      WEST_RIFLE_MAG,
      WEST_FRAG,
      WEST_SMOKE_WHITE
    };
    // List the items (along with the amount) that will be placed
    // wherever there is room in the unit's inventory
    items[] = {
      
    };
    // List the gear items txhat should be automatically slotted
    // correctly for the unit (like Map, Watch, NVG, etc)
    linkedItems[] = {
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
      "rhsusf_ANPVS_14"
    };
    // List the attachments that will be automatically added
    // to the unit's equipped weapons
    attachments[] = {
			WEST_RIFLE_SCOPE,
			WEST_RIFLE_RAIL
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
    vest[] = {
      "rhsusf_spc_squadleader"
    };
    weapons[] = {WEST_GLRIFLE};
    magazines[] = {
      WEST_GLRIFLE_MAG,
      WEST_GLRIFLE_MAG_HE,
      WEST_GLRIFLE_MAG_SMOKE,
      WEST_GLRIFLE_MAG_FLARE,
      WEST_PISTOL_MAG,
      WEST_FRAG,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_COLOR
    };
    handguns[] = {WEST_PISTOL}; /// randomized
    backpackItems[] += {"ACE_key_west"};
    linkedItems[] += {
      "ItemGPS",
      "ACE_Vector"
    };
    items[] = {"ACE_MapTools"};
    attachments[] = {
			WEST_GLRIFLE_SCOPE,
			WEST_GLRIFLE_RAIL
		};
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
    attachments[] += {"rhsusf_acc_ACOG_USMC"};
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
    vest[] = {
      "rhsusf_spc_teamleader"
    };
    weapons[] = {WEST_GLRIFLE};
    magazines[] = {
      WEST_GLRIFLE_MAG,
      WEST_GLRIFLE_MAG_HE,
      WEST_GLRIFLE_MAG_SMOKE,
      WEST_GLRIFLE_MAG_FLARE,
      WEST_SMOKE_COLOR,
      WEST_FRAG,
      WEST_SMOKE_WHITE,
      WEST_FRAG,
      WEST_SMOKE_WHITE
    };
    backpackItems[] += {"ACE_key_west"};
    attachments[] = {
			WEST_GLRIFLE_SCOPE,
			WEST_GLRIFLE_RAIL
		};
    linkedItems[] += {
      "ItemGPS",
      "Binocular"
    };
  };

  // AR
  // Define gear additions and overrides for Autorifleman units
  class B_Soldier_AR_F: B_Soldier_F {
    vest[] = {
      "rhsusf_spc_iar"
    };
    weapons[] = {WEST_AR};
    magazines[] = {
      WEST_AR_MAG,
      WEST_PISTOL_MAG,
      WEST_FRAG,
      WEST_SMOKE_WHITE
    };
    attachments[] = {
			WEST_AR_SCOPE,
			WEST_AR_RAIL
		};
    handguns[] = {WEST_PISTOL}; /// randomized
  };

  // AAR
  // Define gear additions and overrides for Asst Autorifleman units
  class B_Soldier_AAR_F: B_Soldier_F {
    vest[] = {
      "rhsusf_spc_machinegunner"
    };
    backpackItems[] += {WEST_AR_MAG2};
    /*attachments[] += {"rhsusf_acc_ACOG_USMC"};*/
    linkedItems[] += {"Binocular"};
  };

  // RAT
  // Define gear additions and overrides for AT Rifleman units
  class B_Soldier_LAT_F: B_Soldier_F {
    weapons[] = {WEST_CARBINE};
    magazines[] = {
      WEST_CARBINE_MAG,
      WEST_AT_MAG,
      WEST_FRAG,
      WEST_SMOKE_WHITE
    };
    launchers[] = {WEST_AT};
  };

  // Medic
  // Define gear additions and overrides for Medic units
  class B_medic_F: B_Soldier_F {
    vest[] = {
      "rhsusf_spc_corpsman"
    };
    weapons[] = {WEST_CARBINE};
    magazines[] = {
      WEST_CARBINE_MAG,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE,
      WEST_SMOKE_WHITE
    };
    backpackItems[] = {
      "Medikit",
      "FirstAidKit:3"
    };
  };

  // MMG
  // Define gear additions and overrides for MMG Gunner units
  class B_support_MG_F: B_Soldier_F {
    vest[] = {
      "rhsusf_spc_machinegunner"
    };
    weapons[] = {WEST_MMG};
    magazines[] = {
      WEST_MMG_MAG,
      WEST_PISTOL_MAG,
      WEST_FRAG,
      WEST_SMOKE_WHITE
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
    vest[] = {
      "rhsusf_spc_machinegunner"
    };
    backpack[] = {WEST_PACK_MEDIUM};
    backpackItems[] += {WEST_MMG_MAG};
    linkedItems[] += {"ACE_Vector"};
  };

  // Medium AT
  // Define gear additions and overrides for MAT Gunner units
  class B_Soldier_AT_F: B_Soldier_F {
    weapons[] = {WEST_CARBINE};
    magazines[] = {
      WEST_CARBINE_MAG,
      WEST_FRAG,
      WEST_SMOKE_WHITE
    };
    launchers[] = {WEST_MAT};
    items[] += {
      "ACE_fieldDressing:3",
      "ACE_morphine"
    };
    backpack[] = {WEST_PACK_MEDIUM};
    backpackItems[] = {WEST_MAT_MAG};
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
    weapons[] = {WEST_CARBINE};
    magazines[] = {
      WEST_CARBINE_MAG,
      WEST_FRAG,
      WEST_SMOKE_WHITE
    };
    items[] += {
      "ACE_fieldDressing:3",
      "ACE_morphine"
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
      "ACE_morphine"
    };
  };

  /* END RIFLEMAN EXTENSIONS */

  /* SPOTTER BASE */

  // Define the base class for Spotter units
  class B_spotter_F {
    uniform[] = {
      "rhs_uniform_FROG01_d"
    };
    vest[] = {
      "rhsusf_spc_marksman"
    };
    headgear[] = {
      "rhs_Booniehat_marpatd"
    };
    facewear[] = {};
    backpack[] = {
      WEST_PACK_LIGHT
    };

    weapons[] = {WEST_SPOTTER};
    launchers[] = {};
    handguns[] = {};

    magazines[] = {
      WEST_SPOTTER_MAG,
      WEST_SMOKE_WHITE,
      WEST_FRAG
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
			WEST_SPOTTER_SCOPE,
			WEST_SPOTTER_RAIL
		};
    radio = WEST_RADIO_SHORTWAVE;
  };

  /* SNIPER BASE */

  // Define the base class for Sniper units
  class B_sniper_F {
    uniform[] = {
      "rhs_uniform_FROG01_d"
    };
    vest[] = {
      "rhsusf_spc_marksman"
    };
    headgear[] = {
      "rhs_Booniehat_marpatd"
    };
    facewear[] = {};
    backpack[] = {
      WEST_PACK_LIGHT
    };

    weapons[] = {WEST_SNIPER};
    launchers[] = {};
    handguns[] = {};

    magazines[] = {
      WEST_SNIPER_MAG,
      WEST_SMOKE_WHITE,
      WEST_FRAG
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
			WEST_SNIPER_SCOPE,
			WEST_SNIPER_RAIL
		};
    radio = WEST_RADIO_SHORTWAVE;
  };

  /* HELICOPTER CREW BASE */

  // Heli Pilot
  // Define the base class for all Helicopter pilot and crew units
  class B_Helipilot_F {
    uniform[] = {
      "CUP_U_B_BAF_DDPM_S1_RolledUp"
    };
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
    vest[] = {
      "CUP_V_BAF_Osprey_Mk2_DDPM_Pilot"
    };
    facewear[] = {};
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
    backpackItems[] += {"ACE_key_west"};
    items[] = {
      "ACE_fieldDressing:3",
      "ACE_morphine"
    };
    linkedItems[] = {
      "ItemWatch",
      "ItemMap",
      "ItemCompass",
      /*"itemGPS",*/
      /*"rhsusf_ANPVS_15"*/
    };
    attachments[] = {
			/*WEST_SMG_SCOPE,*/
			WEST_SMG_RAIL
		};
    /*radio = WEST_RADIO_SHORTWAVE;*/
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
      "CUP_U_B_BAF_DDPM_Tshirt"
    };
    vest[] = {
      "CUP_V_BAF_Osprey_Mk2_DDPM_Crewman"
    };
    headgear[] = {
      "CUP_H_BAF_Crew_Helmet_DDPM"
    };
    facewear[] = {};
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
    radio = WEST_RADIO_SHORTWAVE;
  };

  // Repair Specialist
  // Define gear additions and overrides for Repair Specialist units
  // as well as the base class for all Explosive/Mine specialists
  class B_Soldier_repair_F: B_crew_F {
    weapons[] = {WEST_CARBINE};
    magazines[] = {
      WEST_CARBINE_MAG,
      WEST_FRAG,
      WEST_SMOKE_WHITE
    };
    attachments[] = {
			WEST_CARBINE_SCOPE,
			WEST_CARBINE_RAIL
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
