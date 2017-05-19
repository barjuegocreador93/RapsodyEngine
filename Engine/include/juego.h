#ifndef JUEGO_H
#define JUEGO_H

#include "rapsody.h"
#include "objeto.h"
#include "mapa.h"

class juego : public objeto
{
public:
    juego(int ancho,int largo,int left,int rigth);
    virtual ~juego();

    template <class mapa>
    void ComienzaEnMapa()
    {
        if(mundo!=NULL)delete mundo;
        mundo=(mapa*)new(mapa);
        mundo->game=this;
    }


    virtual void empezar()
    {
        mundo->empezar();
    }

    virtual void mientras(int mils)
    {
        while(!gameend)
        {
            if(!mundo->pausa)
            {
                mundo->mientras(time.mils);
                time.correTiempo();
            }

        }



    }

    virtual void fin()
    {
        mundo->fin();
    }


protected:

    mapa * mundo;
    tiempo time;
    bool gameend;

private:
};

#endif // JUEGO_H
