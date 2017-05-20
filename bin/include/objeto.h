#ifndef OBJETO_H
#define OBJETO_H

#include "transformacion.h"

class objeto
{
public:
    objeto();
    virtual ~objeto();



    virtual void empezar();
    virtual void mientras(int mils);
    virtual void fin();
    
    void pertenece(objeto *);
    
    void SetUbicacion(transformacion value)
    {
        ubicacion=value;
    }
    
    transformacion GetUbicacion()
    {
        return ubicacion;
    }
    
    void SetPosicion(punto value)
    {
        ubicacion.Setposicion(value);
    }
    
    punto GetPosicion()
    {
        return ubicacion.Getposicion();
    }
    
    void SetEscala(punto value)
    {
        ubicacion.SetEscala(value);
    }
    
    punto GetEscala()
    {
        return ubicacion.GetEscala();
    }
    
    
protected:
    
    transformacion ubicacion;    
    objeto * padre;


private:
};

#endif // OBJETO_H
