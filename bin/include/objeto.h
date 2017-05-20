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
    virtual void SetUbicacion(transformacion value);    
    virtual transformacion GetUbicacion();    
    virtual void SetPosicion(punto value);    
    virtual punto GetPosicion();    
    virtual void SetEscala(punto value);    
    virtual punto GetEscala();
    
    template<class objeto_type,class objeto_type_esperada>
    void AddObjetoComoHijoEnUnVector(vector<objeto_type_esperada *> * value,objeto_type * result,objeto_type_esperada * newitem = NULL)
    {
        newitem=(objeto_type_esperada *)new(objeto_type);
        if((objeto *)(newitem)!=NULL && newitem!=NULL)
        {
            objeto * d=(objeto *)(newitem);
            d->pertenece(this);
            d->ubicacion = ubicacion;
            value->push_back(newitem);
            result=(objeto_type *)(newitem);
        }
        
    };
    
    
protected:
    
    transformacion ubicacion;    
    objeto * padre;


private:
};


#endif // OBJETO_H
