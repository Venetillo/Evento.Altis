class CfgRoles
{
    class Combatente
    {
        displayName = "Combatente";
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
    }; 
	class CombatenteD
    {
        displayName = "Combatente Detector";
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
    }; 
	class CombatenteMedico
    {
        displayName = "Combatente Médico";
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
    }; 
	class CombatenteM
    {
        displayName = "Combatente Munição";
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
    }; 
	 class CombatenteGL
    {
        displayName = "Combatente GL";
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
    }; 
	class Coronel
    {
        displayName = "Coronel";
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
    }; 
	class Sargento
    {
        displayName = "Sargento";
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
    }; 
	class Sniper
    {
        displayName = "Sniper";
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
    }; 
	class Civil
    {
        displayName = "Civil";
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
    }; 
}
class CfgRespawnInventory

{
    class WEST1
    {
        displayName = "Coronel"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "Coronel";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            "Arifle_MX_SW_F",  // ArmA primária
			"hgun_P07_F",  // Arma secundária
            "Rangefinder"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "100Rnd_65x39_caseless_mag",
            "100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
            "HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
        };
        linkedItems[] = 
		{
            "V_PlateCarrierSpec_blk",   // Colete
            "H_Beret_Colonel",        // Capacete
			//"NVGoggles",             // Óculos de Visão Noturno
            "G_Aviator",
			"optic_AMS_snd",
			"bipod_01_F_snd",
            "acc_pointer_IR",
			"optic_MRD",
			"muzzle_snds_L",
            "ItemMap",
			"ItemGPS",
            "ItemCompass",
            "tf_microdagr",
            "tf_anprc152"
        };
        uniformClass = "U_B_CTRG_3";
        backpack = "tf_rt1523g_big_bwmod";
    };
	class WEST2
    {
        displayName = "Sargento"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "Sargento";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            "Arifle_MX_Black_F",  // ArmA primária
			"hgun_P07_F",  // Arma secundária
            "Rangefinder"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
            "HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
        };
        linkedItems[] = 
		{
            "V_PlateCarrierSpec_blk",   // Colete
            "H_Beret_02",        // Capacete
			//"NVGoggles",             // Óculos de Visão Noturno
            "G_Aviator",
			"optic_Hamr",
			"bipod_01_F_snd",
            "acc_pointer_IR",
			"optic_MRD",
			"muzzle_snds_L",
            "ItemMap",
			"ItemGPS",
            "ItemCompass",
            "tf_microdagr",
            "tf_anprc152"
        };
        uniformClass = "U_B_CTRG_3";
        backpack = "tf_rt1523g_big_bwmod";
    };
	class WEST3
    {
        displayName = "Sniper Cyrus"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "Sniper";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            "srifle_DMR_05_hex_F",  // ArmA primária
			"hgun_P07_F",  // Arma secundária
            "Laserdesignator"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "10Rnd_93x64_DMR_05_Mag",
            "10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
            "HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"optic_AMS_snd"
        };
        linkedItems[] = 
		{
            //"V_PlateCarrierSpec_blk",   // Colete
            "H_HelmetB_TI_tna_F",        // Capacete
			"NVGoggles",             // Óculos de Visão Noturno
            "G_Balaclava_TI_G_blk_F",
			"optic_LRPS_ghex_F",
			"bipod_02_F_hex",
            "acc_pointer_IR",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_L",
            "ItemMap",
			"ItemGPS",
            "ItemCompass",
            "tf_microdagr",
            "tf_anprc152"
        };
        uniformClass = "U_B_FullGhillie_sard";
        backpack = "tf_rt1523g_big_bwmod";
    };
	class WEST4
    {
        displayName = "Sniper MAR-10"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "Sniper";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            "srifle_DMR_02_camo_F",  // ArmA primária
			"hgun_P07_F",  // Arma secundária
            "Laserdesignator"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "10Rnd_338_Mag",
            "10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
            "HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"optic_AMS_snd"
        };
        linkedItems[] = 
		{
            //"V_PlateCarrierSpec_blk",   // Colete
            "H_HelmetB_TI_tna_F",        // Capacete
			"NVGoggles",             // Óculos de Visão Noturno
            "G_Balaclava_TI_G_blk_F",
			"optic_LRPS_ghex_F",
			"bipod_02_F_hex",
            "acc_pointer_IR",
			"muzzle_snds_338_sand",
			"muzzle_snds_L",
            "ItemMap",
			"ItemGPS",
            "ItemCompass",
            "tf_microdagr",
            "tf_anprc152"
        };
        uniformClass = "U_B_FullGhillie_sard";
        backpack = "tf_rt1523g_big_bwmod";
    };
	class WEST5
    {
        displayName = "Sniper Observador"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "Sniper";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            "srifle_DMR_02_camo_F",  // ArmA primária
			"hgun_P07_F",  // Arma secundária
            "Laserdesignator"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "10Rnd_338_Mag",
            "10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
            "HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"optic_AMS_snd"
        };
        linkedItems[] = 
		{
            "V_PlateCarrierSpec_blk",   // Colete
            "H_HelmetB_TI_tna_F",        // Capacete
			"NVGoggles",             // Óculos de Visão Noturno
            "G_Balaclava_TI_G_blk_F",
			"optic_LRPS_ghex_F",
			"bipod_02_F_hex",
            "acc_pointer_IR",
			"muzzle_snds_338_sand",
			"muzzle_snds_L",
            "ItemMap",
			"B_UavTerminal",
            "ItemCompass",
            "tf_microdagr",
            "tf_anprc152"
        };
        uniformClass = "U_B_FullGhillie_sard";
        backpack = "B_UAV_01_backpack_F";
    };
	class WEST6
    {
        displayName = "Sniper Observador 2"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "Sniper";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            "srifle_DMR_05_hex_F",  // ArmA primária
			"hgun_P07_F",  // Arma secundária
            "Laserdesignator"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "10Rnd_93x64_DMR_05_Mag",
            "10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
            "HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"optic_AMS_snd"
        };
        linkedItems[] = 
		{
            "V_PlateCarrierSpec_blk",   // Colete
            "H_HelmetB_TI_tna_F",        // Capacete
			"NVGoggles",             // Óculos de Visão Noturno
            "G_Balaclava_TI_G_blk_F",
			"optic_LRPS_ghex_F",
			"bipod_02_F_hex",
            "acc_pointer_IR",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_L",
            "ItemMap",
			"B_UavTerminal",
            "ItemCompass",
            "tf_microdagr",
            "tf_anprc152"
        };
        uniformClass = "U_B_FullGhillie_sard";
        backpack = "B_UAV_01_backpack_F";
    };
	class WEST7
    {
        displayName = "Combatente"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "Combatente";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            "arifle_MX_Black_F",  // ArmA primária
			"hgun_P07_F",  // Arma secundária
            "Binocular"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
            "HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
        };
        linkedItems[] = 
		{
            "V_PlateCarrierSpec_blk",   // Colete
            "H_HelmetSpecB_blk",        // Capacete
			"NVGoggles",             // Óculos de Visão Noturno
            "G_Combat",
			"optic_Hamr",
			"bipod_01_F_snd",
            "acc_pointer_IR",
			//"optic_MRD",
			"muzzle_snds_L",
            "ItemMap",
			"ItemGPS",
            "ItemCompass",
            "tf_microdagr",
            "tf_anprc152"
        };
        uniformClass = "U_B_CTRG_1";
        backpack = "B_Kitbag_rgr";
    };
	class WEST8
    {
        displayName = "Combatente GL"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "CombatenteGL";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            "arifle_MX_GL_Black_F",  // ArmA primária
			"hgun_P07_F",  // Arma secundária
            "Binocular"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
            "HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
        };
        linkedItems[] = 
		{
            "V_PlateCarrierGL_rgr",   // Colete
            "H_HelmetB",        // Capacete
			"NVGoggles",             // Óculos de Visão Noturno
            "G_Balaclava_combat",    // Mascara ou óculos
			"optic_Hamr",
			"bipod_01_F_snd",
            "acc_pointer_IR",
			//"optic_MRD",
			"muzzle_snds_L",
            "ItemMap",
			"ItemGPS",
            "ItemCompass",
            "tf_microdagr",
            "tf_anprc152"
        };
        uniformClass = "U_B_CTRG_1";
        backpack = "B_Carryall_cbr";
    };
	class WEST9
    {
        displayName = "Combatente Munição"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "CombatenteM";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            "arifle_MX_Black_F",  // ArmA primária
			"hgun_P07_F",  // Arma secundária
            "Binocular"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
            "HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
        };
        linkedItems[] = 
		{
            "V_PlateCarrierGL_rgr",   // Colete
            "H_HelmetB",        // Capacete
			"NVGoggles",             // Óculos de Visão Noturno
            "G_Balaclava_combat",    // Mascara ou óculos
			"optic_Hamr",
			"bipod_01_F_snd",
            "acc_pointer_IR",
			//"optic_MRD",
			"muzzle_snds_L",
            "ItemMap",
			"ItemGPS",
            "ItemCompass",
            "tf_microdagr",
            "tf_anprc152"
        };
        uniformClass = "U_B_CTRG_1";
        backpack = "B_Carryall_cbr";
    };
	class WEST10
    {
        displayName = "Combatente Médico"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "CombatenteMedico";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            "arifle_MX_Black_F",  // ArmA primária
			"hgun_P07_F",  // Arma secundária
            "Binocular"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
            "HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
        };
        linkedItems[] = 
		{
            "V_PlateCarrierGL_rgr",   // Colete
            "H_HelmetB",        // Capacete
			"NVGoggles",             // Óculos de Visão Noturno
            "G_Balaclava_combat",    // Mascara ou óculos
			"optic_Hamr",
			"bipod_01_F_snd",
            "acc_pointer_IR",
			//"optic_MRD",
			"muzzle_snds_L",
            "ItemMap",
			"ItemGPS",
            "ItemCompass",
            "tf_microdagr",
            "tf_anprc152"
        };
        uniformClass = "U_B_CTRG_1";
        backpack = "B_Carryall_cbr";
    };
	class WEST11
    {
        displayName = "Combatente Detector"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "CombatenteD";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            "arifle_MX_Black_F",  // ArmA primária
			"hgun_P07_F",  // Arma secundária
            "Binocular"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
            "HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"MineDetector",
			"ToolKit",
			"FirstAidKit"
        };
        linkedItems[] = 
		{
            "V_PlateCarrierSpec_blk",   // Colete
            "H_HelmetSpecB_blk",        // Capacete
			"NVGoggles",             // Óculos de Visão Noturno
            "G_Combat",
			"optic_Hamr",
			"bipod_01_F_snd",
            "acc_pointer_IR",
			//"optic_MRD",
			"muzzle_snds_L",
			"ItemMap",
			"ItemGPS",
            "ItemCompass",
            "tf_microdagr",
            "tf_anprc152"
        };
        uniformClass = "U_B_CTRG_1";
        backpack = "B_Kitbag_rgr";
    };
	class WEST12
    {
        displayName = "VIP"; // Name visível na opção de escolher o inventário.
        icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"; // Icon displayed next to the name
        role = "Civil";

        // Loadout definition, uses same entries as CfgVehicles classes
        weapons[] = 
		{
            //"arifle_MX_Black_F",  // ArmA primária
			//"hgun_P07_F",  // Arma secundária
            //"Binocular"                 // Tipo de binóculo
        };
        magazines[] = 
		{
            "SmokeShell",
			"SmokeShell",
			"SmokeShell"
        };
        items[] = 
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
        };
        linkedItems[] = 
		{
            //"V_PlateCarrierSpec_blk",   // Colete
           // "H_HelmetSpecB_blk",        // Capacete
			//"NVGoggles",             // Óculos de Visão Noturno
            "G_Spectacles_Tinted",
			//"optic_Hamr",
			//"bipod_01_F_snd",
            //"acc_pointer_IR",
			//"optic_MRD",
			//"muzzle_snds_L",
			//"ItemMap",
			//"ItemGPS",
            //"ItemCompass",
            //"tf_microdagr",
            //"tf_anprc152"
        };
        uniformClass = "U_C_Scientist";
        //backpack = "B_Kitbag_rgr";
    };
 
};

