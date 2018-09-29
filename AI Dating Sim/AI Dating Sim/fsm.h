#pragma once

enum state{MAIN_MENU, PAUSED, RUNNING, GAME_OVER, SAVING};

typedef class FSM {

	state current_state;
	state prev_state;


};