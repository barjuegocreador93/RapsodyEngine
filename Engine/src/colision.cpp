#include "colision.h"

colision::colision()
{
    //ctor
}

colision::~colision()
{
    //dtor
}

#include <fisica.h>

void colision::fisicas_de_choque_de_solidos(colision * otro)
{
    fisica * m = (fisica*)padre, *r=(fisica*)otro->padre;
     if (m->colision_solida && r->colision_solida)
     {
         m->aceleracion *=(-1);
         m->velocidad *=(-1);
         r->aceleracion*=(-1);
         r->velocidad*=(-1);

     }
}
