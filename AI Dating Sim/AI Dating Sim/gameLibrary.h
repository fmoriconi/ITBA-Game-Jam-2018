#pragma once

void handleInput(bool * exit); //Tieen un modulo que recibe input o evento (Que en este caso es Allegro) y traduce el input a un evento del juego.
void handleLogic(); //En base al evento recibido, opera sobre la logica.
void handleFront(); //Dibuja el front segun lo que la logica dicte.