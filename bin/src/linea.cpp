#include "linea.h"
using namespace rapsody;
linea::linea()
{
    //ctor
}

linea::~linea()
{
    //dtor
}

C_Line crear_linea(C_Vector2D A, C_Vector2D B)
{
    C_Line m;
    m.A=A;
    m.B=B;
    return m;
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
