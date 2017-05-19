#include "peon.h"

peon::peon()
{
    //ctor
}

peon::~peon()
{
    //dtor
}


template<class c>
void peon::AddControlador()
{
    jugador=(c*)new(c);
}

void peon::empezar()
{
    actor::empezar();
    jugador->empezar();
}


void peon::mientras(int mils)
{
    actor::mientras(mils);
    jugador->mientras(mils);
}

void peon::fin()
{
    actor::fin();
    jugador->fin();
}
