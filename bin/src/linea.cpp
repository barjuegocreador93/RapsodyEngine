#include "linea.h"

linea::linea()
{
    //ctor
}

linea::~linea()
{
    //dtor
}


bool linea::tocando(linea &m)
{
    return (A >= m.A && A <= m.B) || (B >= m.A && B <= m.B);

}

bool linea::pasada(linea &m)
{
    return false;
}


void linea::print()
{
    line(screen,A.x,A.y,B.x,B.y,0xffff);
}
