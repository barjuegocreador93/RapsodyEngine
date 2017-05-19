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
        for(Actores::iterator j=i ; j!= actores.end(); ++j)
        {
            if(i!=j)
            {
                for(int n=0; n<(int)i->second->colisiones.size(); n++)
                    for(int k=0; k<(int)j->second->colisiones.size(); k++)
                    {
                        colision * t1=j->second->colisiones[k], * t2=i->second->colisiones[n];
                        if(t1->EstaEnSobrePosicion(t2))
                        {
                            t1->SobrePosicion(t2);
                            t2->SobrePosicion(t1);
                        }
                        if(t1->EstaTocando(t2))
                        {
                            t1->Tocando(t2);

                        }
                    }
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



