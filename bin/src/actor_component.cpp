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
    for(int i=0;i<(int)components.size();i++)
    {
        components[i]->empezar();
    }
}

void actor_component::mientras(int mils) {
    SetUbicacion(
    crear_transformacion(
            padre->GetPosicion()+ubicacion_interna.Getposicion(),
            ubicacion.GetEscala()*ubicacion_interna.GetEscala()
        )
    );
    for(int i=0;i<(int)components.size();i++)
    {
        components[i]->mientras(mils);
    }
}

void actor_component::fin() {
    
    for(int i=0;i<(int)components.size();i++)
    {
        components[i]->fin();
    }
}

template<class actor_component_type>
actor_component_type* actor_component::AddComponent() {
    AComponent m=(AComponent)new(actor_component_type);
    if(m)
    {
        m->pertenece(padre);
        m->constructor_();            
        components.push_back(m);

    }
    return (actor_component_type *)m;
}
