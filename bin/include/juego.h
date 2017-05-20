#ifndef JUEGO_H
#define JUEGO_H

#include "rapsody.h"
#include "mapa.h"

class juego : public objeto
{
public:
    juego(int ancho,int largo,int left,int rigth);
    virtual ~juego();

    template <class mapa_type>
    void ComienzaEnMapa()
    {
        if(mundo!=NULL)delete mundo;
        mundo=(mapa*)new(mapa_type);        
        if(mundo!=NULL)mundo->pertenece(this);
    }


    virtual void empezar();

    virtual void mientras(int mils);

    virtual void fin();


protected:

    mapa * mundo;
    tiempo time;
    bool gameend;

private:
};

#endif // JUEGO_H
