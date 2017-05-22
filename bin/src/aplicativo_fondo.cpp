/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   aplicativo_fondo.cpp
 * Author: Calimpio
 * 
 * Created on 22 de mayo de 2017, 07:52 AM
 */

#include "aplicativo_fondo.h"
using namespace rapsody;

aplicativo_fondo::aplicativo_fondo() {    
    
}

aplicativo_fondo::aplicativo_fondo(const aplicativo_fondo& orig) {
}

aplicativo_fondo::~aplicativo_fondo() {
}

void aplicativo_fondo::constructor_() {
    fondo = AddComponents<aplicativo_fondo_componente>();
    
}
