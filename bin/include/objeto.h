#ifndef OBJETO_H
#define OBJETO_H

#include "transformacion.h"

class objeto
{
public:
    objeto(bool=false);
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
        if(debug_mode)cout<<" addobjeto "<<endl;
        newitem=(objeto_type_esperada *)new(objeto_type);
        if((objeto *)(newitem)!=NULL && newitem!=NULL)
        {
            if(debug_mode)cout<<" objeto existe "<<endl;
            objeto * d=(objeto *)(newitem);
            d->pertenece(this);
            d->ubicacion = ubicacion;
            if(debug_mode)cout<<" ubicacion del nuevo objeto: "<<endl;
            if(debug_mode)cout<<" posicion: "<<d->ubicacion.Getposicion(); 
            if(debug_mode)cout<<" escala: "<<d->ubicacion.GetEscala();             
            value->push_back(newitem);
            if(debug_mode)cout<<" objeto guradado en vector "<<endl;
            result=(objeto_type *)(newitem);
        }
        
    }
    void setDebug_mode(bool debug_mode);
    bool isDebug_mode() const;
    void setPriority_debuger(bool priority_debuger);
    bool isPriority_debuger() const;;
    
    
protected:
    
    transformacion ubicacion;    
    objeto * padre;
    bool debug_mode;
    bool priority_debuger;


private:
};


#endif // OBJETO_H
