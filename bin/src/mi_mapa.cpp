/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mi_mapa.cpp
 * Author: Calimpio
 * 
 * Created on 20 de mayo de 2017, 02:23 PM
 */

#include "mi_mapa.h"

mi_mapa::mi_mapa() {
}

mi_mapa::mi_mapa(const mi_mapa& orig) {
}

mi_mapa::~mi_mapa() {
}

void mi_mapa::empezar()
{
    
    n1=AddActor<nave>("actor1");
    
    ((peon *)n1)->SetUbicacion(crear_transformacion(crear_punto(5,5),crear_punto(20,20)));
    
    ((peon *)n1)->AddControlador<controlador>();
    
    
    mapa::empezar();
}
