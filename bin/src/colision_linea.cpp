/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   colision_linea.cpp
 * Author: Calimpio
 * 
 * Created on 21 de mayo de 2017, 08:52 PM
 */

#include "colision_linea.h"
using namespace rapsody;

colision_linea::colision_linea() {
}

colision_linea::colision_linea(const colision_linea& orig) {
}

colision_linea::~colision_linea() {
}

bool colision_linea::EstaTocando(D_AComponent m) {
    D_CoLine aux=(D_CoLine)m;
    if(aux)
    {
        return internal_linea.tocando(aux->internal_linea);
    }
    return false;
}


void colision_linea::Tocando(D_AComponent m) {
    
}

void colision_linea::print() {
    global_linea.print();
}

void colision_linea::MoviemientosInternos() {
    C_AComponent::MoviemientosInternos();
    global_linea.A=ubicacion.GetPosicion() + internal_linea.A;
    global_linea.B=ubicacion.GetPosicion() + internal_linea.B;
}


