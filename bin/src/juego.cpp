#include "juego.h"


juego::juego(int ancho,int largo,int left,int rigth)
{
    inicia_allegro(ancho,largo);
    inicia_audio(left,rigth);/**Sonido*/
    ubicacion=crear_transformacion(crear_punto(0,0),crear_punto(ancho,largo));
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
        if(not mundo->HayPausa())
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
