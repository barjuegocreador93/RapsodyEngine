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



    virtual bool EstaEnSobrePosicion(colision * otro)
    {
        return false;
    }

    virtual bool EstaTocando(colision * m)
    {
        for(int i=0; i<(int)bordes.size(); i++)
        {
            for(int j=0; j<(int)m->bordes.size(); j++)
            {

                if(bordes[i].tocando(m->bordes[j]))return true;
            }
        }
        return false;
    }


    virtual void SobrePosicion(colision * m)
    {

    }

    void fisicas_de_choque_de_solidos(colision *);

    virtual void Tocando(colision *m)
    {
        fisicas_de_choque_de_solidos(m);


    }

    virtual void attach()
    {

    }

    void ubicacion_realtiva()
    {

    }

    virtual void mientras(int mils)
    {

    }


    void print()
    {
        for(int i=0; i<(int)bordes.size(); i++)
        {
            bordes[i].print();
        }
    }

protected:

private:
};

#endif // COLISION_H
