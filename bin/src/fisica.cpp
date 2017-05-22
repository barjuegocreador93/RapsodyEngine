#include "fisica.h"
using namespace rapsody;


fisica::fisica()
{
    //ctor
    estatico=false;
    colision_solida=false;
    movimiento=false;
    masa=0.0;    
    velocidad=aceleracion=crear_punto(0,0);
    
    
    
}

void fisica::setMundo(objeto* mundo) {
    this->mundo = mundo;
}

objeto* fisica::getMundo() const {
    return mundo;
}

fisica::~fisica()
{
    //dtor
}



void fisica::active_movenets_on_map()
{
    
}

void fisica::mientras(int mils)
{
    
    
    if(!estatico)
    {
        
        
        if(transncurrido.seg == 60)
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
        if(mils)
        {
           transncurrido.seg++; 
        }
        
    }
}
