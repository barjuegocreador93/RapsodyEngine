#include "caja.h"

caja::caja()
{
    //ctor
    visible=true;
}

caja::~caja()
{
    //dtor
}

void caja::constructor_() {

}


void caja::init(punto escala)
{
    ubicacion.SetEscala(escala);
}

void caja::empezar()
{
    linea line_a,line_b,line_c,line_d;
    movimientos(line_a,line_b,line_c,line_d);

    bordes.push_back(line_a);
    bordes.push_back(line_b);
    bordes.push_back(line_c);
    bordes.push_back(line_d);
}



void caja::attach()
{
    ubicacion.Setposicion(padre->GetPosicion());
    movimientos(bordes[0],bordes[1],bordes[2],bordes[3]);
}

void caja::mientras(int mils)
{
    attach();
}

void caja::movimientos(linea &line_a,linea &line_b,linea &line_c,linea &line_d)
{
    line_c.A=line_c.B=line_a.B=line_a.A=ubicacion.Getposicion();
    line_a.B.x+=ubicacion.GetEscala().x;
    line_b.B=line_b.A=line_a.B;
    line_b.B.y+=ubicacion.GetEscala().y;
    line_c.B.y+=ubicacion.GetEscala().y;
    line_d.B=line_d.A=line_c.B;
    line_d.B.x+=ubicacion.GetEscala().x;
}
