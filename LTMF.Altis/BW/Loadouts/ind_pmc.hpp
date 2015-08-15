/*
 * Description:
 * Loadout definition for PMC/mercenary style units
 *
 * Author:
 * BWMF
 * modified by Legion Tactical
 */
class ind_f {
    //Rifle
    #define IND_RIFLE "rhs_weap_m4a1_carryhandle_grip2"
    #define IND_RIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_m18_red:2"
    //GL Rifle
    #define IND_GLRIFLE "rhs_weap_m4a1_carryhandle_m203S"
    #define IND_GLRIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_m18_red:2"
    #define IND_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
    #define IND_GLRIFLE_MAG_HE "rhs_mag_M433_HEDP:8"
    #define IND_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:2","UGL_FlareGreen_F:2"
    //Carbine
    #define IND_CARBINE "rhs_weap_m4a1_carryhandle_grip"
    #define IND_CARBINE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_m18_red:2"
    // AR
    #define IND_AR "rhs_weap_m249_pip_L"
    #define IND_AR_MAG "rhsusf_200Rnd_556x45_soft_pouch:2"
    #define IND_AR_MAG2 "rhsusf_200Rnd_556x45_soft_pouch:2"
    // AT
    #define IND_AT "rhs_weap_M136"
    #define IND_AT_MAG "rhs_m136_mag"
    // MMG
    #define IND_MMG "rhs_weap_m240B"
    #define IND_MMG_MAG "rhsusf_100Rnd_762x51:5"
    // MAT
    #define IND_MAT "launch_B_Titan_short_F"
    #define IND_MAT_MAG "Titan_AT:3"
    // SAM
    #define IND_SAM "rhs_weap_fim92"
    #define IND_SAM_MAG "rhs_fim92_mag:2"
    // Sniper Rifle
    #define IND_SNIPER "rhs_weap_m14ebrri"
    #define IND_SNIPER_MAG "rhsusf_20Rnd_762x51_m993_Mag:8"
    // Spotter Rifle
    #define IND_SPOTTER "rhs_weap_m4a1_blockII_grip2_KAC"
    #define IND_SPOTTER_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8"
    // SMG
    #define IND_SMG "hlc_smg_mp5a4"
    #define IND_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
    // Pistol
    #define IND_PISTOL "rhsusf_weap_m1911a1"
    #define IND_PISTOL_MAG "rhsusf_mag_7x45acp_MHP:4"
	// Radio
	#define IND_RADIO_RIFLEMAN "tf_rf7800str"
	#define IND_RADIO_SHORTWAVE "tf_anprc152"
	#define IND_RADIO_MANPACK "tf_rt1523g_black"
	#define IND_RADIO_AIRBORNE "tf_anarc210"

    class Car {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Tank {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Helicopter {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Plane {
        TransportMagazines[] = {};
    };
    class Ship_F {
        TransportMagazines[] = {};
    };


    class I_Soldier_F {// rifleman
        uniform[] = {
			"MNP_CombatUniform_ASA_GC3_B",
			"MNP_CombatUniform_ASA_GC3",
			"MNP_CombatUniform_ASA_GC2_B",
			"MNP_CombatUniform_ASA_GC2",
			"MNP_CombatUniform_ASA_GC_B",
			"MNP_CombatUniform_ASA_GC"
		};  /// randomized
        vest[] = {
			"MNP_Vest_M81b",
			"MNP_Vest_M81",
			"MNP_Vest_OD_A",
			"MNP_Vest_OD_B",
			"MNP_Vest_Black_Tac_B",
			"MNP_Vest_Black_Tac_A"
		}; /// randomized
        headgear[] = {"rhsusf_ach_bare","rhsusf_ach_bare_semi","rhsusf_ach_bare_headset","rhsusf_ach_bare_headset_ess","rhsusf_ach_helmet_M81","rhsusf_ach_bare_wood_headset_ess","rhsusf_ach_bare_wood","MNP_Helmet_OD"};
        backpack[] = {"rhsusf_assault_eagleaiii_coy"}; /// randomized
        backpackItems[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
        weapons[] = {IND_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {IND_RIFLE_MAG,"rhs_mag_m67:2","rhs_mag_an_m8hc:2"};
        items[] = {};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};
        attachments[] = {"rhsusf_acc_eotech_552","rhsusf_acc_anpeq15side"};
		radio = IND_RADIO_RIFLEMAN;
    };
    class I_officer_F: I_Soldier_F {// CO and DC
        vest[] = {"MNP_V_M81_Harness","MNP_Vest_OD_B"};
		backpack[] = {IND_RADIO_MANPACK};
        weapons[] = {IND_GLRIFLE};
        magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_GLRIFLE_MAG_FLARE,IND_PISTOL_MAG,"rhs_mag_m67:2","rhs_mag_an_m8hc:2","rhs_mag_m18_green:2"};
        handguns[] = {IND_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west"};
        linkedItems[] += {"ItemGPS","ACE_Vector"};
        items[] = {"ACE_MapTools"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_Soldier_SL_F: I_Officer_F {// SL
        vest[] = {"MNP_V_OD_GL_Harness","MNP_V_M81_GL_Harness"};
		backpack[] = {IND_RADIO_MANPACK};
        linkedItems[] += {"Binocular"};
        items[] = {"ACE_MapTools"};
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_Soldier_UAV_F: I_Soldier_F {
        backpack[] = {"B_rhsusf_B_BACKPACK"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_Soldier_TL_F: I_Soldier_F {// FTL
        vest[] = {"MNP_V_OD_GL_Harness","MNP_V_M81_GL_Harness"};
        weapons[] = {IND_GLRIFLE};
        magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_GLRIFLE_MAG_FLARE,"rhs_mag_m18_green:2","rhs_mag_m67:2","rhs_mag_an_m8hc:2","rhs_mag_m67:1","rhs_mag_an_m8hc:2"};
        backpackItems[] += {"ACE_key_west"};
        linkedItems[] += {"ItemGPS","Binocular"};
    };
    class I_Soldier_AR_F: I_Soldier_F {// AR
        weapons[] = {IND_AR};
        magazines[] = {IND_AR_MAG,IND_PISTOL_MAG,"rhs_mag_m67:2","rhs_mag_an_m8hc:2"};
        handguns[] = {IND_PISTOL}; /// randomized
    };
    class I_Soldier_AAR_F: I_Soldier_F {// AAR
        backpackItems[] += {IND_AR_MAG2};
        attachments[] = {"rhsusf_acc_ACOG_USMC"};
        linkedItems[] += {"Binocular"};
    };
    class I_Soldier_LAT_F: I_Soldier_F {// RAT
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,IND_AT_MAG,"rhs_mag_m67:2","rhs_mag_an_m8hc:2"};
        launchers[] = {IND_AT}; /// randomized
    };
    class I_medic_F: I_Soldier_F {// Medic
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"rhs_mag_an_m8hc:6"};
        backpackItems[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14", "ACE_earplugs"};
    };
    class I_support_MG_F: I_Soldier_F {// MMG
        weapons[] = {IND_MMG};
        magazines[] = {IND_MMG_MAG,IND_PISTOL_MAG,"rhs_mag_m67:1","rhs_mag_an_m8hc:2"};
        handguns[] = {IND_PISTOL}; /// randomized
        attachments[] = {};
    };
    class I_Soldier_A_F: I_Soldier_F {// MMG Spotter/Ammo Bearer
		backpack[] = {"B_Kitbag_cbr"};
        backpackItems[] += {IND_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class I_Soldier_AT_F: I_Soldier_F {// MAT Gunner
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"rhs_mag_m67:2","rhs_mag_an_m8hc:2"};
        launchers[] = {IND_MAT}; /// randomized
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        backpackItems[] = {IND_MAT_MAG};
    };
    class I_Soldier_AAT_F: I_Soldier_F {// MAT Spotter/Ammo Bearer
		backpack[] = {"B_Kitbag_cbr"};
        backpackItems[] = {IND_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
    };
    class I_Soldier_AA_F: I_Soldier_F {// SAM Gunner
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"rhs_mag_m67:2","MiniGrenade:1","rhs_mag_an_m8hc:2"};
        launchers[] = {IND_SAM}; /// randomized
        backpackItems[] += {IND_SAM_MAG};
    };
    class I_Soldier_AAA_F: I_Soldier_F {// SAM Spotter/Ammo Bearer
		backpack[] = {"B_Kitbag_cbr"};
        backpackItems[] = {IND_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class I_support_Mort_F: I_Soldier_F {// Mortar Gunner
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"rhs_mag_m67:2","rhs_mag_an_m8hc:2"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        backpack[] = {"B_Mortar_01_weapon_F"}; /// randomized
    };
    class I_support_AMort_F: I_Soldier_F {// Assistant Mortar
        backpack[] = {"B_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
    };
    class I_spotter_F {// Spotter
        weapons[] = {IND_SPOTTER}; /// randomized
        magazines[] = {IND_SPOTTER_MAG,"rhs_mag_an_m8hc:2","rhs_mag_m67:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] += {"itemGPS","LaserDesignator"};
        attachments[] = {"rhsusf_acc_eotech_552","rhsusf_acc_anpeq15side"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_sniper_F {// Sniper
        weapons[] = {IND_SNIPER}; /// randomized
        magazines[] = {IND_SNIPER_MAG,"rhs_mag_an_m8hc:2","rhs_mag_m67:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] += {"itemGPS"};
        attachments[] = {"rhsusf_acc_LEUPOLDMK4_2","rhsusf_acc_anpeq15side","RH_m110sd_t"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_Helipilot_F {// Pilot
        headgear[] = {"rhsusf_cvc_green_helmet"}; /// randomized
        weapons[] = {IND_SMG}; /// randomized
        magazines[] = {IND_SMG_MAG,"rhs_mag_an_m8hc:2"};
        backpackItems[] += {"ACE_key_west"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] += {"itemGPS","NVgoggles"};
		radio = IND_RADIO_SHORTWAVE;
    };
    class I_helicrew_F: I_Helipilot_F { // Pilot

    };
    class I_crew_F {// Crew
        backpack[] = {"B_Carryall_khk"};
        weapons[] = {IND_CARBINE}; /// randomized
        magazines[] = {IND_CARBINE_MAG,"rhs_mag_an_m8hc:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        backpackItems[] += {"ACE_key_west"};
        linkedItems[] += {"itemGPS"};
    };
    class I_Soldier_repair_F: I_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_khk"};
        backpackItems[] = {"Toolkit"};
    };
    class I_Soldier_exp_F: I_Soldier_repair_F {// Explosive Specialist
        backpack[] = {"B_Carryall_khk"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {IND_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };
    class I_engineer_F: I_Soldier_repair_F {// Mine Specialist
        backpack[] = {"B_Carryall_khk"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {IND_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };
};