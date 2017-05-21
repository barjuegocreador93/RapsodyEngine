#include "mapa.h"
#include "juego.h"
mapa::mapa()
{
    //ctor
    
}

mapa::~mapa()
{
    //dtor
   
}

void mapa::empezar()
{
    estatico=true;
    pausa=false;
    actor_movements=true;
    if(debug_mode)cout<<"mapa empezar corriendo actores"<<endl;
    for(Actores::iterator i=actores.begin() ; i!= actores.end(); ++i)
    {
        i->second->empezar();
    }
}


void mapa::Colisiones()
{
    if(debug_mode)cout<<"mapa colisiones corriendo actores\n";
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
    if(debug_mode)cout<<"fin mapa colisiones\n";
}

void mapa::render()
{
    if(debug_mode)cout<<"mapa render corriendo actor mapa\n";
    if(debug_mode)cout<<"mapa posicion en: "<<ubicacion.Getposicion()<<"con escala: "<<ubicacion.GetEscala();
    actor::render();
    if(debug_mode)cout<<" fin mapa render corriendo actor mapa\n";
    int j=1;
    for(Actores::iterator i=actores.begin() ; i!= actores.end(); ++i)
    {
        if(debug_mode)cout<<" render :"<<j;
        i->second->render();
        j++;
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

 



