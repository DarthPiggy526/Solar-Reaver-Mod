_action = ["PackMortar", "Repack Mortar", "", {[_target,_player] call SR_UAV_fnc_Pack}, {true}] call ace_interact_menu_fnc_createAction;
["TSR_Mortar", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
