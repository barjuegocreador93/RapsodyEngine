#include "actor.h"

actor::actor() {
    //ctor
    visible=true;
}

actor::~actor() {
    //dtor
    colisiones.clear();
    imagenes.clear();

}

void actor::empezar() {
    visible = true;

    for (int i = 0; i < (int) colisiones.size() && visible; i++) {
        colisiones[i]->empezar();
    }
}

void actor::mientras(int mils) {
    fisica::mientras(mils);
    for (int i = 0; i < (int) colisiones.size() && visible; i++) {
        colisiones[i]->mientras(mils);
    }

}


void actor::fin() {

}


void actor::render() {
    if(debug_mode)cout<<" actor render corriendo\n";
    if (visible) {
        if(debug_mode)cout<<" iniciando cilo de imagenes \n";
        for (int i = 0; i < (int) imagenes.size() && visible; i++) {
            if(debug_mode)cout<<" corriendo print "<<i<<"\n";
            imagenes[i]->print();
            if(debug_mode)cout<<" fin print "<<i<<"\n";
        }
        if(debug_mode)cout<<" iniciando cilo de colisiones \n";
        for (int i = 0; i < (int) colisiones.size() && visible; i++) {
            if(debug_mode)cout<<" corriendo print "<<i<<"\n";
            colisiones[i]->print();
            if(debug_mode)cout<<" fin print "<<i<<"\n";
        }
    }
}

void actor::ColisionaConOtro(actor* w) {


    for (int n = 0; n < (int) w->colisiones.size(); n++) {
        for (int k = 0; k < (int) colisiones.size(); k++) {
            colision * t1 = colisiones[k], * t2 = w->colisiones[n];
            if (t1->EstaEnSobrePosicion(t2)) {
                t1->SobrePosicion(t2);
                t2->SobrePosicion(t1);
            }
            if (t1->EstaTocando(t2)) {
                t1->Tocando(t2);

            }
        }
    }

}