

#include "game.h"

game::game():juego(800,600,70,70)
{
    ComienzaEnMapa<mapa>();
}



void ingame()
{
    game _juego_;
    _juego_.empezar();
    _juego_.mientras(0);
    _juego_.fin();
    readkey();
}
