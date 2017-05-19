#include "colision.h"
#include <fisica.h>

colision::colision()
{
    //ctor
}

colision::~colision()
{
    //dtor
    bordes.clear();
}


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

bool colision::EstaEnSobrePosicion(colision * otro)
{
    return false;
}

bool colision::EstaTocando(colision * m)
{
    for(int i=0; i<(int)bordes.size(); i++)
    {
        for(int j=0; j<(int)m->bordes.size(); j++)
        {

            if(bordes[i].tocando(m->bordes[j]))return true;
        }
    }
    return false;
}


void colision::SobrePosicion(colision * m)
{

}


void colision::Tocando(colision *m)
{
    fisicas_de_choque_de_solidos(m);


}

void colision::attach()
{

}

void colision::ubicacion_realtiva()
{

}

void colision::mientras(int mils)
{

}


void colision::print()
{
    for(int i=0; i<(int)bordes.size(); i++)
    {
        bordes[i].print();
    }
}
