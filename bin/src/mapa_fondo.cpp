/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mapa_fondo.cpp
 * Author: Calimpio
 * 
 * Created on 24 de mayo de 2017, 08:19 AM
 */



#include "mapa_fondo.h"
using namespace rapsody;

mapa_fondo::mapa_fondo() {
}

mapa_fondo::mapa_fondo(const mapa_fondo& orig) {
}

mapa_fondo::~mapa_fondo() {
}

void mapa_fondo::empezar() {
    fondo=AddAplication<C_App_Backgorund>();   
    mapa::empezar();
}
