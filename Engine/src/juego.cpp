#include "juego.h"

juego::juego(int ancho,int largo,int left,int rigth)
{
    inicia_allegro(ancho,largo);
    inicia_audio(left,rigth);/**Sonido*/
    mundo=NULL;
    gameend=false;
    time.init();
}

juego::~juego()
{
    //dtor
}
