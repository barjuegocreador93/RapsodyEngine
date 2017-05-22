/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   aplicativo_fondo_componente.cpp
 * Author: Calimpio
 * 
 * Created on 22 de mayo de 2017, 07:38 AM
 */

#include "aplicativo_fondo_componente.h"
using namespace rapsody;

aplicativo_fondo_componente::aplicativo_fondo_componente() {
}

aplicativo_fondo_componente::aplicativo_fondo_componente(const aplicativo_fondo_componente& orig) {
}

aplicativo_fondo_componente::~aplicativo_fondo_componente() {
}

void aplicativo_fondo_componente::print() {
    fondo->print();
}

void aplicativo_fondo_componente::Imagen_de_fondo(string dir) {
    fondo->SetUbicacion(padre->GetUbicacion());
    fondo.mount_imagen(dir);
}

void aplicativo_fondo_componente::DefaultBitmap(int color) {
    fondo->SetUbicacion(padre->GetUbicacion());
    fondo.crear(color);
}

