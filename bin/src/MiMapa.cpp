#include "MiMapa.h"

#include "caja.h"

using namespace std;


MiMapa::MiMapa()
{
    //ctor

    a1=AddActor<actor>("actor1");
    a2=AddActor<actor>("actor2");



    a1->ubicacion = crear_transformacion(crear_punto(5,5),crear_punto(5,5));

    caja * c1=a1->AddColision<caja>();

    c1->init(crear_punto(500,500));
    
    a1->velocidad=crear_punto(2,0);



}

MiMapa::~MiMapa()
{
    //dtor
}


void MiMapa::empezar()
{


    mapa::empezar();
}


void MiMapa::mientras(int mils)
{
    mapa::mientras(mils);
}

void MiMapa::fin()
{
    mapa::fin();
}
