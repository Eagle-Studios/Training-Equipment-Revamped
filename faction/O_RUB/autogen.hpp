//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 210.150146 on Profile branch
// Generated with ALiVE version 1.17.0.2209061
//////////////////////////////////////////////////////////////////////////////////

class CfgFactionClasses {
    class O_RUB {
        displayName = "[CTG] Rubber Training";
        side = 0;
        flag = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Canada_ca.paa";
        priority = 0;
    };
};

class CfgGroups {
    class EAST {

        class O_RUB {
            name = "[CTG] Rubber Training";

            class Infantry {
                name = "Infantry";

                class o_rub_infantry_squad {
                    name = "Squad";
                    side = 0;
                    faction = "O_RUB";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_RUB_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_RUB_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 0;
                        vehicle = "O_RUB_Squad_Leader_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Marksman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Rifleman_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Machine_Gunner_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Rifleman_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Rifleman_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Machine_Gunner_01";
                    };
                };

                class o_rub_infantry_sentry_light {
                    name = "Sentry (Light)";
                    side = 0;
                    faction = "O_RUB";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_RUB_Rifleman_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Rifleman_01";
                    };
                };

                class o_rub_infantry_sentry_heavy {
                    name = "Sentry (Heavy)";
                    side = 0;
                    faction = "O_RUB";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_RUB_Rifleman_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Machine_Gunner_01";
                    };
                };

                class o_rub_infantry_marksman_team {
                    name = "Marksman Team";
                    side = 0;
                    faction = "O_RUB";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_RUB_Marksman_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Marksman_01";
                    };
                };

                class o_rub_infantry_fire_team {
                    name = "Fire Team";
                    side = 0;
                    faction = "O_RUB";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_RUB_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Machine_Gunner_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Marksman_01";
                    };
                };

                class o_rub_infantry_support_team {
                    name = "Support Team";
                    side = 0;
                    faction = "O_RUB";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "O_RUB_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Machine_Gunner_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Machine_Gunner_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Machine_Gunner_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "O_RUB_Marksman_01";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class UK3CB_CW_SOV_O_EARLY_RIF_1;
    class UK3CB_CW_SOV_O_EARLY_RIF_1_OCimport_01 : UK3CB_CW_SOV_O_EARLY_RIF_1 { scope = 0; class EventHandlers; };
    class UK3CB_CW_SOV_O_EARLY_RIF_1_OCimport_02 : UK3CB_CW_SOV_O_EARLY_RIF_1_OCimport_01 { class EventHandlers; };

    class UK3CB_CW_SOV_O_EARLY_MK;
    class UK3CB_CW_SOV_O_EARLY_MK_OCimport_01 : UK3CB_CW_SOV_O_EARLY_MK { scope = 0; class EventHandlers; };
    class UK3CB_CW_SOV_O_EARLY_MK_OCimport_02 : UK3CB_CW_SOV_O_EARLY_MK_OCimport_01 { class EventHandlers; };

    class UK3CB_CW_SOV_O_EARLY_SL;
    class UK3CB_CW_SOV_O_EARLY_SL_OCimport_01 : UK3CB_CW_SOV_O_EARLY_SL { scope = 0; class EventHandlers; };
    class UK3CB_CW_SOV_O_EARLY_SL_OCimport_02 : UK3CB_CW_SOV_O_EARLY_SL_OCimport_01 { class EventHandlers; };

    class UK3CB_CW_SOV_O_EARLY_MG;
    class UK3CB_CW_SOV_O_EARLY_MG_OCimport_01 : UK3CB_CW_SOV_O_EARLY_MG { scope = 0; class EventHandlers; };
    class UK3CB_CW_SOV_O_EARLY_MG_OCimport_02 : UK3CB_CW_SOV_O_EARLY_MG_OCimport_01 { class EventHandlers; };


    class O_RUB_Rifleman_01 : UK3CB_CW_SOV_O_EARLY_RIF_1_OCimport_02 {
        author = "Maj. Eagle";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "O_RUB";

        identityTypes[] = {"Head_Asian","LanguageRUS","G_IRAN_default"};

        uniformClass = "UK3CB_CW_SOV_O_Early_U_CombatUniform_01_KHK";

        linkedItems[] = {"UK3CB_V_Belt_Rig_KHK","UK3CB_CW_SOV_O_EARLY_H_SSh68","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"UK3CB_V_Belt_Rig_KHK","UK3CB_CW_SOV_O_EARLY_H_SSh68","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_ak74"};
        respawnWeapons[] = {"rhs_weap_ak74"};

        magazines[] = {"30Rnd_545x39_Mag_Rubber","30Rnd_545x39_Mag_Rubber"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_Rubber","30Rnd_545x39_Mag_Rubber"};

        backpack = "UK3CB_CW_SOV_O_EARLY_B_RIF";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74","rhs_acc_dtk1983","","",{"30Rnd_545x39_Mag_Rubber",30},{},""},{},{,"","","",{"",8},{},""},{"UK3CB_CW_SOV_O_Early_U_CombatUniform_01_KHK",{"30Rnd_545x39_Mag_Rubber",3,30}},{"UK3CB_V_Belt_Rig_KHK",{"30Rnd_545x39_Mag_Rubber",7,30}},{"UK3CB_CW_SOV_O_EARLY_B_RIF",{}},"UK3CB_CW_SOV_O_EARLY_H_SSh68","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_RUB_Marksman_01 : UK3CB_CW_SOV_O_EARLY_MK_OCimport_02 {
        author = "Maj. Eagle";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "O_RUB";

        identityTypes[] = {"Head_Asian","LanguageRUS","G_IRAN_default"};

        uniformClass = "UK3CB_CW_SOV_O_Early_U_CombatUniform_01_KHK";

        linkedItems[] = {"UK3CB_V_Belt_Rig_KHK","UK3CB_CW_SOV_O_EARLY_H_SSh68","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"UK3CB_V_Belt_Rig_KHK","UK3CB_CW_SOV_O_EARLY_H_SSh68","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"uk3cb_weap_svd_old_pso1m2"};
        respawnWeapons[] = {"uk3cb_weap_svd_old_pso1m2"};

        magazines[] = {"10Rnd_762x54_Mag_Rubber","10Rnd_762x54_Mag_Rubber"};
        respawnMagazines[] = {"10Rnd_762x54_Mag_Rubber","10Rnd_762x54_Mag_Rubber"};

        backpack = "UK3CB_CW_SOV_O_EARLY_B_RIF";

        ALiVE_orbatCreator_loadout[] = {{"uk3cb_weap_svd_old_pso1m2","","","rhs_acc_pso1m2",{"10Rnd_762x54_Mag_Rubber",10},{},""},{},{,"","","",{"",8},{},""},{"UK3CB_CW_SOV_O_Early_U_CombatUniform_01_KHK",{"10Rnd_762x54_Mag_Rubber",7,30}},{"UK3CB_V_Belt_Rig_KHK",{"10Rnd_762x54_Mag_Rubber",7,30}},{"UK3CB_CW_SOV_O_EARLY_B_RIF",{}},"UK3CB_CW_SOV_O_EARLY_H_SSh68","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_RUB_Squad_Leader_01 : UK3CB_CW_SOV_O_EARLY_SL_OCimport_02 {
        author = "Maj. Eagle";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "O_RUB";

        identityTypes[] = {"Head_Asian","LanguageRUS","G_IRAN_default"};

        uniformClass = "UK3CB_CW_SOV_O_Early_U_CombatUniform_01_KHK";

        linkedItems[] = {"UK3CB_V_Belt_Rig_KHK","UK3CB_CW_SOV_O_EARLY_H_SSh68","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"UK3CB_V_Belt_Rig_KHK","UK3CB_CW_SOV_O_EARLY_H_SSh68","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_ak74",,"Binocular"};
        respawnWeapons[] = {"rhs_weap_ak74",,"Binocular"};

        magazines[] = {"30Rnd_545x39_Mag_Rubber","30Rnd_545x39_Mag_Rubber"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_Rubber","30Rnd_545x39_Mag_Rubber"};

        backpack = "UK3CB_CW_SOV_O_EARLY_B_RIF";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74","rhs_acc_dtk1983","","",{"30Rnd_545x39_Mag_Rubber",30},{},""},{},{,"","","",{"",8},{},""},{"UK3CB_CW_SOV_O_Early_U_CombatUniform_01_KHK",{"30Rnd_545x39_Mag_Rubber",3,30}},{"UK3CB_V_Belt_Rig_KHK",{"30Rnd_545x39_Mag_Rubber",7,30}},{"UK3CB_CW_SOV_O_EARLY_B_RIF",{}},"UK3CB_CW_SOV_O_EARLY_H_SSh68","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_RUB_Machine_Gunner_01 : UK3CB_CW_SOV_O_EARLY_MG_OCimport_02 {
        author = "Maj. Eagle";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        side = 0;
        faction = "O_RUB";

        identityTypes[] = {"Head_Asian","LanguageRUS","G_IRAN_default"};

        uniformClass = "UK3CB_CW_SOV_O_Early_U_CombatUniform_01_KHK";

        linkedItems[] = {"UK3CB_V_Belt_Rig_KHK","UK3CB_CW_SOV_O_EARLY_H_SSh68","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"UK3CB_V_Belt_Rig_KHK","UK3CB_CW_SOV_O_EARLY_H_SSh68","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_pkm"};
        respawnWeapons[] = {"rhs_weap_pkm"};

        magazines[] = {"100Rnd_762x54_Mag_Rubber","100Rnd_762x54_Mag_Rubber"};
        respawnMagazines[] = {"100Rnd_762x54_Mag_Rubber","100Rnd_762x54_Mag_Rubber"};

        backpack = "UK3CB_CW_SOV_O_EARLY_B_RIF";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkm","","","",{"100Rnd_762x54_Mag_Rubber",100},{},""},{},{,"","","",{"",8},{},""},{"UK3CB_CW_SOV_O_Early_U_CombatUniform_01_KHK",{"30Rnd_545x39_Mag_Rubber",3,30}},{"UK3CB_V_Belt_Rig_KHK",{"100Rnd_762x54_Mag_Rubber",2,100}},{"UK3CB_CW_SOV_O_EARLY_B_RIF",{"100Rnd_762x54_Mag_Rubber",7,100}},"UK3CB_CW_SOV_O_EARLY_H_SSh68","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};