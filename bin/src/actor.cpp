#include "actor.h"

actor::actor()
{
    //ctor
}

actor::~actor()
{
    //dtor
    colisiones.clear();
    imagenes.clear();

}


void actor::empezar()
{
    visible=true;

    for(int i=0; i<(int)colisiones.size() && visible; i++)
    {
        colisiones[i]->empezar();
    }
}


void actor::mientras(int mils)
{
    fisica::mientras(mils);
    for(int i=0; i<(int)colisiones.size() && visible; i++)
    {
        colisiones[i]->mientras(mils);
    }

}







void actor::render()
{
    if(visible)
    {
        for(int i=0; i<(int)imagenes.size() && visible; i++)
        {
            imagenes[i]->print();
        }
        for(int i=0; i<(int)colisiones.size() && visible; i++)
        {
            colisiones[i]->print();
        }
    }
}
