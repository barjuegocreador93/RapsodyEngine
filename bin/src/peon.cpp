#include "peon.h"

peon::peon()
{
    //ctor
    jugador=NULL;
    
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
