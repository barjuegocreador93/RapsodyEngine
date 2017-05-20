#ifndef COLISION_H
#define COLISION_H



#include "linea.h"



class colision : public objeto
{
public:
    colision();
    virtual ~colision();

    
    vector<linea> bordes;



    virtual bool EstaEnSobrePosicion(colision * otro);

    virtual bool EstaTocando(colision * m);


    virtual void SobrePosicion(colision * m);

    void fisicas_de_choque_de_solidos(colision *);

    virtual void Tocando(colision *m);

    virtual void attach();

    void ubicacion_realtiva();

    virtual void mientras(int mils);


    void print();
    
    bool visible;
protected:

private:
};

#endif // COLISION_H
