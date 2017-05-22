#include "transformacion.h"
using namespace rapsody;
transformacion::transformacion()
{
    //ctor
}

transformacion::~transformacion()
{
    //dtor
}

transformacion crear_transformacion(punto2D posicion, punto2D escala)
{
    transformacion u;
    u.Setposicion(posicion);
    u.SetEscala(escala);
    return u;
}


transformacion & transformacion::operator=(const transformacion &otro)
{
    posicion=otro.posicion;
    escala=otro.escala;
    return *this;
}

void transformacion::AcumPosicionX(int x)
{
    posicion.x+=x;
}
void transformacion::AcumPosicionY(int y)
{
    posicion.x+=y;
}

void transformacion::AcumEscalaX(int x)
{
    escala.x+=x;
}

void transformacion::AcumEscalaY(int y)
{
    escala.y+=y;
}


punto2D transformacion::Getposicion()
{
    return posicion;
}

void transformacion::Setposicion(punto2D val)
{
    posicion = val;
}

punto2D transformacion::GetEscala()
{
    return escala;
}

void transformacion::SetEscala(punto2D val)
{
    escala = val;
}

