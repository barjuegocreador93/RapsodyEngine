
#include "includes.h"

class juego : objeto
{
public:
    juego()
    {
        inicia_allegro(600,800);
        inicia_audio(70,70);/**Sonido*/
        mundo.game=this;
        gameend=false;
        time.init();

        mundo.ubicacion=crear_transformacion(crear_punto(0,0),crear_punto(600,800));

        /**code here*/


    }


    virtual void empezar()
    {
        mundo.empezar();
    }

    virtual void mientras(int mils)
    {
        while(!mundo.pausa || !gameend)
        {
            mundo.mientras(time.mils);
            time.correTiempo();
        }



    }

    virtual void fin()
    {
        mundo.fin();
    }


    ~juego()
    {

    }

protected:
    mapa mundo;
    tiempo time;
    bool gameend;

};
