#include "peon.h"
using namespace rapsody;
peon::peon()
{
    //ctor
       
}

peon::~peon()
{
    //dtor
    delete jugador;
}




void peon::empezar()
{
   actor::empezar();
   if(jugador!=NULL) jugador->empezar();
}


void peon::mientras(int mils)
{
    actor::mientras(mils);
    if(jugador!=NULL) jugador->mientras(mils);
}

void peon::fin()
{
    actor::fin();
    if(jugador!=NULL) jugador->fin();
}
