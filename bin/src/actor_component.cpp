/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   actor_component.cpp
 * Author: Calimpio
 * 
 * Created on 21 de mayo de 2017, 05:48 AM
 */

#include "actor_component.h"
#include "actor.h"
using namespace rapsody;

actor_componente::actor_componente() {
    ubicacion_interna = crear_transformacion(crear_punto(0, 0), crear_punto(1, 1));
    contenedor = NULL;
    
}

void actor_componente::setItem(vector<actor_componente*>::iterator item) {
    this->item = item;
}

actor_componente::actor_componente(const actor_componente& orig) {
}

void actor_componente::constructor_() {
    if(padre)cout<<"si";
}

void actor_componente::Tocando(D_AComponent un_componete) {

}

void actor_componente::Sobre(D_AComponent un_componente) {

}

actor_componente::~actor_componente() {
    components.clear();
    delete this;
}


void actor_componente::empezar() {
    if(!padre)cout<<"mama mia";
    MoviemientosInternos();
    for (int i = 0; i < (int) components.size(); i++) {
        components[i]->empezar();
    }
}

void actor_componente::mientras(int mils) {
    MoviemientosInternos();
    for (int i = 0; i < (int) components.size(); i++) {
        components[i]->mientras(mils);
    }
}

void actor_componente::fin() {

    for (int i = 0; i < (int) components.size(); i++) {
        components[i]->fin();
    }
}



bool actor_componente::EstaSobre(actor_componente* otro) {
    return false;
}

bool actor_componente::EstaTocando(actor_componente* otro) {
    return false;
}

void actor_componente::SystemaDeColision(actor_componente* otro) {
    for (int i = 0; i < (int) components.size(); i++) {
        for (int j = 0; j < (int) otro->components.size(); j++) {
            D_Actor  p1 = (D_Actor) padre, p2 = (D_Actor) padre;
            D_AComponent c1 = components[i], c2 = otro->components[j];
            if (c1->EstaTocando(c2)) {
                c1->Tocando(c2);
                p1->Tocando(p2, c2);
            }            

            if (c1->EstaSobre(c2)) {
                c1->Sobre(c2);
                p1->Sobre(p2, c2);
            }
            
            c1->SystemaDeColision(c2);
        }


    }
}

void actor_componente::render() {
    for (int i = 0; i < (int) components.size(); i++) {
        components[i]->print();
        components[i]->render();
    }
}

void actor_componente::print() {

}

void actor_componente::MoviemientosInternos() {

    D_Actor p = (D_Actor) padre;
    if (p) {
        SetUbicacion(
                crear_transformacion(
                padre->GetPosicion() + ubicacion_interna.GetPosicion(),
                ubicacion.GetEscala() * ubicacion_interna.GetEscala() 
                * contenedor->ubicacion_interna.GetEscala()
                )
                );
    }
}

void actor_componente::destructor_() {
    if(contenedor)
    {
        contenedor->components.erase(item);
        
        
    } else
    {
        if(padre)((actor *)padre)->EraseComponent(item);
    }
    delete this;    
}
