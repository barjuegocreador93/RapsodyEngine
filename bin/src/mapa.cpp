#include "mapa.h"

mapa::mapa()
{
    //ctor
}

mapa::~mapa()
{
    //dtor
    delete mundo;
}


void mapa::Colisiones()
{
    for(Actores::iterator i=actores.begin() ; i!= actores.end(); ++i)
    {
        for(Actores::iterator j= i ; j!= actores.end(); ++j)
        {
            if(i!=j)
            {
                i->second->ColisionaConOtro(j->second);
            }
        }
    }
}

void mapa::render()
{
    actor::render();
    for(Actores::iterator i=actores.begin() ; i!= actores.end(); ++i)
    {
        i->second->render();
    }
}

 void mapa::fin()
{
    for(Actores::iterator i=actores.begin() ; i!= actores.end(); ++i)
    {
        i->second->fin();
    }
}

void mapa::mientras(int mils)
{
    if(!pausa)
    {
        for(Actores::iterator i=actores.begin() ; i!= actores.end(); ++i)
        {
            i->second->mientras(mils);
        }
        Colisiones();
        /**siempre al final:*/
        if(actor_movements)
         {
             render();
             actor_movements=false;
         }

    }
}

 void mapa::empezar()
{
    pausa=false;
    for(Actores::iterator i=actores.begin() ; i!= actores.end(); ++i)
    {
        i->second->empezar();
    }
}



