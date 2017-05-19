#include "juego.h"


juego::juego(int ancho,int largo,int left,int rigth)
{
    inicia_allegro(ancho,largo);
    inicia_audio(left,rigth);/**Sonido*/
    mundo=NULL;
    gameend=false;
    
}

juego::~juego()
{
    //dtor
}





void juego::empezar()
{
    mundo->empezar();
}

void juego::mientras(int mils)
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

void juego::fin()
{
    mundo->fin();
}
