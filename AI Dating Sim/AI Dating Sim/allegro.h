#pragma once

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/keyboard.h>
#include <allegro5/bitmap.h>
#include <allegro5/allegro_primitives.h>

enum key_ev{ KEY_UP, KEY_DOWN, ENTER, QUIT, PAUSE }; ///Placeholders, va a cambiar segun lo que hagamos.

bool initAllegro(); //Devuelve FALSE si todo sale bien.
key_ev takeInput();
void endAllegro();
