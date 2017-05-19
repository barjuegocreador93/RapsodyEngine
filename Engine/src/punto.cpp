#include "punto.h"

punto::punto()
{
    //ctor
}

punto::~punto()
{
    //dtor
}


punto crear_punto(int x,int y)
{
    punto m;
    m.x=x;
    m.y=y;
    return m;
}
