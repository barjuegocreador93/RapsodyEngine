#ifndef CAJA_H
#define CAJA_H

#include "rapsody.h"
#include "colision.h"

class caja : public colision
{
public:
    caja();
    virtual ~caja();

    void init(punto escala)
    {
        ubicacion.escala=escala;
    }

    virtual void empezar()
    {
        linea line_a,line_b,line_c,line_d;
        movimientos(line_a,line_b,line_c,line_d);

        bordes.push_back(line_a);
        bordes.push_back(line_b);
        bordes.push_back(line_c);
        bordes.push_back(line_d);
    }



    virtual void attach()
    {
        ubicacion.posicion = padre->ubicacion.posicion;
        movimientos(bordes[0],bordes[1],bordes[2],bordes[3]);
    }

    virtual void mientras(int mils)
    {
        attach();
    }

    void movimientos(linea &line_a,linea &line_b,linea &line_c,linea &line_d)
    {
        line_c.A=line_c.B=line_a.B=line_a.A=ubicacion.posicion;
        line_a.B.x+=ubicacion.escala.x;
        line_b.B=line_b.A=line_a.B;
        line_b.B.y+=ubicacion.escala.y;
        line_c.B.y+=ubicacion.escala.y;
        line_d.B=line_d.A=line_c.B;
        line_d.B.x+=ubicacion.escala.x;
    }

protected:

private:
};

#endif // CAJA_H
