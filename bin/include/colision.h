#ifndef COLISION_H
#define COLISION_H


#include "rapsody.h"
#include "linea.h"
#include "objeto.h"


class colision : public objeto
{
public:
    colision();
    virtual ~colision();
    objeto * padre;
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

protected:

private:
};

#endif // COLISION_H
