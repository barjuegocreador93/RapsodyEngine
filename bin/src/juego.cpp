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
    if(debug_mode)cout<<"Initial juego::empezar"<<endl;
    mundo->empezar();
    if(debug_mode)system("pause");
}

void juego::mientras(int mils)
{
    if(debug_mode)cout<<"Initial juego::mientras"<<endl;
    while(!gameend)
    {
        system("cls");
        if(debug_mode)cout<<"juego::mientras while"<<endl;
        if(not mundo->HayPausa())
        {
            mundo->mientras(time.mils);
            time.correTiempo();
        }

    }



}

void juego::fin()
{
    if(debug_mode)cout<<"Initial juego::empezar"<<endl;
    mundo->fin();
    if(debug_mode)system("pause");
}
