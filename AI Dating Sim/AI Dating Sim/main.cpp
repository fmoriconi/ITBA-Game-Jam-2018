#include "allegro.h"

int main(void) {

	if (!initAllegro()) {

		bool exit = false;

		while (exit == false) {

			handleInput(&exit);
			handleLogic();
			handleFront();

		}

		endAllegro();
	}

	return 0;
}