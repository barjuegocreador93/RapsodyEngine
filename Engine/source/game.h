
#include "../lib/includes.h"
#include "includes.h"

class MiJuego : public juego
{
public:

    MiJuego():juego(800,600,70,70)
    {
        ComienzaEnMapa<MiMundo>();
    }



};


void ingame()
{
    MiJuego _juego_;
    _juego_.empezar();
    _juego_.mientras(0);
    _juego_.fin();
}
