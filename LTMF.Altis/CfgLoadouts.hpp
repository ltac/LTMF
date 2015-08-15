/*
 * Defines which loadouts will be used for each side
 *
 * Author:
 * BWMF
 * modified by Legion Tactical
 */
class CfgLoadouts {
    //Only include one hpp per faction!
    //use (//) to comment out other files

    /* BLUFOR FACTION */
	
    //#include "BW\Loadouts\blu_pmc.hpp" // Tiger Stripe, M4
    //#include "BW\Loadouts\blu_usarmy_desert.hpp" // US Army, UCP, M4/16
    //#include "BW\Loadouts\blu_usarmy_woodland.hpp" // US Army, OCP, M4/16
    #include "BW\Loadouts\blu_usmc_desert.hpp" // USMC, Desert MARPAT, M4/16
    //#include "BW\Loadouts\blu_usmc_woodland.hpp" // USMC, Woodland MARPAT, M4/16

    /* INDFOR FACTION */
    //#include "BW\Loadouts\ind_finland_snow.hpp" // Finland, Arctic, HK and FN
    //#include "BW\Loadouts\ind_militia_desert.hpp" // Militia, Tan, HK and FN
    //#include "BW\Loadouts\ind_militia_woodland.hpp" // Militia, Green, HK and FN
    //#include "BW\Loadouts\ind_pmc.hpp" // Allied States of America, Black, M4
    #include "BW\Loadouts\ind_ukraine.hpp" // Ukraine, Woodland, AK47/74

    /* OPFOR FACTION */
    //#include "BW\Loadouts\opf_csat_snow.hpp" // CSAT, Arctic, AK12
    //#include "BW\Loadouts\opf_pla_desert.hpp" // Chinese PLA, Tan, AK12
    //#include "BW\Loadouts\opf_pla_woodland.hpp" // Chinese PLA, Universal, AK12
    //#include "BW\Loadouts\opf_russia_desert.hpp" // Russia, Desert, AK12
    #include "BW\Loadouts\opf_russia_woodland.hpp" // Russia, Woodland, AK12

    /* CIVILIAN FACTIONS */
    #include "BW\Loadouts\civ_europe.hpp" // More randomized European civilians
};