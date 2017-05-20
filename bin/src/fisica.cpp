#include "fisica.h"
#include "mapa.h"

fisica::fisica()
{
    //ctor
}

fisica::~fisica()
{
    //dtor
}



void fisica::active_movenets_on_map()
{
    mapa * m=(mapa*)mundo;
    m->SeDetectaMoviemiento();
}

void fisica::mientras(int mils)
{
    if(!estatico)
    {
        if(transncurrido.seg==60)
        {
            velocidad += aceleracion;
            if(crear_punto(0,0) != velocidad)
            {
                active_movenets_on_map();
                ubicacion.AcumPosicionX(velocidad.x);
                ubicacion.AcumPosicionY(velocidad.y);
            }
            transncurrido.seg=0;
        }
        if(mils==1000)
        {
            transncurrido.seg++;
        }
    }
}
