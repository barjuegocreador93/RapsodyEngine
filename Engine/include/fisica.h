#ifndef FISICA_H
#define FISICA_H

#include "rapsody.h"
#include "tiempo.h"
#include "objeto.h"

class fisica : public objeto
{
public:
    fisica();
    virtual ~fisica();

    virtual void mientras(int mils)
    {
        if(!estatico)
        {
            if(transncurrido.seg==60)
            {
                velocidad.x += aceleracion.x;
                velocidad.y += aceleracion.y;
                if(crear_punto(0,0) != velocidad)
                {
                    active_movenets_on_map();
                    ubicacion.posicion.x+= velocidad.x;
                    ubicacion.posicion.y+= velocidad.y;
                }
                transncurrido.seg=0;
            }
            if(mils==1000)
            {
                transncurrido.seg++;
            }
        }
    }

    void active_movenets_on_map();

    punto velocidad;
    punto aceleracion;
    objeto * mundo;

    float masa;

    bool estatico;
    bool movimiento;
    bool colision_solida;
    tiempo transncurrido;


protected:

private:
};

#endif // FISICA_H
