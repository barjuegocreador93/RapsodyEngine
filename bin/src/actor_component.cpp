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
actor_component::actor_component() {
    ubicacion_interna=crear_transformacion(crear_punto(0,0),crear_punto(1,1));
}

actor_component::actor_component(const actor_component& orig) {
}

void actor_component::constructor_() {
    
}



actor_component::~actor_component() {
}

void actor_component::empezar() {
    SetUbicacion(
    crear_transformacion(
            padre->GetPosicion()+ubicacion_interna.Getposicion(),
            ubicacion.GetEscala()*ubicacion_interna.GetEscala()
        )
    );
}

void actor_component::mientras(int mils) {
    SetUbicacion(
    crear_transformacion(
            padre->GetPosicion()+ubicacion_interna.Getposicion(),
            ubicacion.GetEscala()*ubicacion_interna.GetEscala()
        )
    );
}

void actor_component::fin() {

}
