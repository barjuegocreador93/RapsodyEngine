#include "fisica.h"
#include "mapa.h"

fisica::fisica()
{
    //ctor
}

fisica::~fisica()
{
    //dtor
}



void fisica::active_movenets_on_map()
{
    mapa * m=(mapa*)mundo;
    m->actor_movements=true;
}

