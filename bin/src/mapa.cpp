/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mapa.cpp
 * Author: Calimpio
 * 
 * Created on 22 de mayo de 2017, 04:36 AM
 */

#include "mapa.h"
#include "game.h"

using namespace rapsody;

mapa::mapa() {

}

mapa::mapa(const mapa& orig) {
}

mapa::~mapa() {
    elements.clear();
    delete this;
}

void mapa::empezar() {
    SetUbicacion(((game*) padre)->GetUbicacion());
    for (int i = 0; i < (int) elements.size(); i++) {
        elements[i]->empezar();
    }
}

void mapa::mientras(int mils) {

    for (int i = 0; i < (int) elements.size(); i++) {
        elements[i]->mientras(mils);
        if (movimientos)elements[i]->render();
    }
    SystemaDeColision();
}

void mapa::fin() {
    for (int i = 0; i < (int) elements.size(); i++) {
        elements[i]->fin();
    }
}

void mapa::SystemaDeColision() {
    for (int i = 0; i < (int) elements.size(); i++) {
        for (int j = i + 1; j < (int) elements.size(); j++) {
            elements[i]->SystemaDeColision(elements[j]);
        }
    }
}

void mapa::EraseActor(vector<actor*>::iterator item) {
    elements.erase(item);
}

void mapa::destructor_() {
    destruir();
}
