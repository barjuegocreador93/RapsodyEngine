

#include "game.h"
#include "mi_mapa.h"

game::game():juego(800,600,70,70)
{
   setPriority_debuger(false);
   ComienzaEnMapa<mi_mapa>();
}





void ingame()
{
    game _juego_;
    _juego_.empezar();
    _juego_.mientras(0);
    _juego_.fin();
    readkey();
}
