/*
	Author: Waagheur

	Description:
		

	Parameter(s):
		params ['_entity'];




	Returns:
		Nothing

	Examples:
		
*/

if (hasInterface) then {

	params ['_entity'];

	SR_SL_BUFF_CD = 0;
	
	
	
	SR_SL_BUFF_MOVE = 
		_entity addAction ["Give Order (Move)", 
		{
			SR_SL_BUFF_CD = 1800;
			
			_objects = ((_this select 3) nearObjects["Man", 20]) select { (isPlayer _x) and ((side _x) == (side (_this select 3))) };
			
			{
				[_x] remoteExec ["SR_fnc_sl_buffs_move", owner _x];
			} forEach _objects;
			
			[] spawn {
				while { SR_SL_BUFF_CD > 0 } do {
					SR_SL_BUFF_CD = SR_SL_BUFF_CD - 1;
					sleep 1;
				};
			};
		}, 
		_entity, 5, false, true, "", "SR_SL_BUFF_CD == 0", 0.01];
		
	SR_SL_BUFF_RESIST = 
		_entity addAction ["Give Order (Resist)", 
		{
			SR_SL_BUFF_CD = 1800;
			
			_objects = ((_this select 3) nearObjects["Man", 20]) select { (isPlayer _x) and ((side _x) == (side (_this select 3))) };
			
			{
				[_x] remoteExec ["SR_fnc_sl_buffs_resist", owner _x];
			} forEach _objects;
			
			[] spawn {
				while { SR_SL_BUFF_CD > 0 } do {
					SR_SL_BUFF_CD = SR_SL_BUFF_CD - 1;
					sleep 1;
				};
			};
		}, 
		_entity, 5.1, false, true, "", "SR_SL_BUFF_CD == 0", 0.01];
		
	SR_SL_BUFF_FIRE =
		_entity addAction ["Give Order (Fire)", 
		{
			SR_SL_BUFF_CD = 1800;
			
			_objects = ((_this select 3) nearObjects["Man", 20]) select { (isPlayer _x) and ((side _x) == (side (_this select 3))) };
			
			{
				[_x] remoteExec ["SR_fnc_sl_buffs_fire", owner _x];
			} forEach _objects;
			
			[] spawn {
				while { SR_SL_BUFF_CD > 0 } do {
					SR_SL_BUFF_CD = SR_SL_BUFF_CD - 1;
					sleep 1;
				};
			};
		}, 
		_entity, 5.2, false, true, "", "SR_SL_BUFF_CD == 0", 0.01];
	
};