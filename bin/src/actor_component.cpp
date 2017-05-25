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
    actor = NULL;
    
}




actor_componente::actor_componente(const actor_componente& orig) {
}



void actor_componente::Tocando(D_AComponent un_componete, D_Object un_actor) {

}

void actor_componente::Sobre(D_AComponent un_componente, D_Object un_actor) {

}

actor_componente::~actor_componente() {
    elements.clear();
    delete this;
}


void actor_componente::empezar() {
    
    MoviemientosInternos();
    for (auto i : elements) {
        i->empezar();
    }
}

void actor_componente::mientras(int mils) {
    MoviemientosInternos();
    for (auto i: elements) {
        i->mientras(mils);
    }
}

void actor_componente::fin() {

    for (auto i : elements) {
        i->fin();
    }
}



bool actor_componente::EstaSobre(actor_componente* otro, D_Object actor_izquierdo, D_Object actor_derecho) {
    return false;
}

bool actor_componente::EstaTocando(actor_componente* otro, D_Object actor_izquierdo, D_Object actor_derecho) {
    return false;
}

void actor_componente::SystemaDeColision(actor_componente* otro, D_Object actor_izquierdo, D_Object actor_derecho) {
    for (auto i : elements) {
        for (auto j : elements) {
            D_Actor  p1 = (D_Actor) actor_izquierdo, p2 = (D_Actor) actor_derecho;
            
            if (i->EstaTocando(j, actor_izquierdo, actor_derecho)) {
                i->Tocando(j, actor_derecho);
                p1->Tocando(p2, j);
            }            

            if (i->EstaSobre(j, actor_izquierdo, actor_derecho)) {
                i->Sobre(j, actor_derecho);
                p1->Sobre(p2, j);
            }
            
            i->SystemaDeColision(j, actor_izquierdo, actor_derecho);
        }


    }
}

void actor_componente::render() {
    for (auto i : elements) {
        i->print();
        i->render();
    }
}

void actor_componente::print() {

}

void actor_componente::MoviemientosInternos() {

    
}

void actor_componente::destructor_() {
    for(auto i : elements)
    {
        i->destructor_();
    }
    destruir();
    delete this;
}
