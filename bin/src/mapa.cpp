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
    fondo = AddActor<aplicativo_fondo>();
}

mapa::mapa(const mapa& orig) {
}

mapa::~mapa() {
    actores.clear();
}

void mapa::constructor_() {
    SetUbicacion(padre->GetUbicacion());
}

void mapa::empezar() {
    
    
    
    for(int i=0;i<(int)actores.size();i++)
    {
        actores[i]->empezar();
    }
}

void mapa::mientras(int mils) {
    
    for(int i=0;i<(int)actores.size();i++)
    {
        actores[i]->mientras(mils);
        if(movimientos)actores[i]->render();
    }
    SystemaDeColision();
}

void mapa::fin() {
    for(int i=0;i<(int)actores.size();i++)
    {
        actores[i]->fin();
    }    
}

void mapa::SystemaDeColision() {
    for(int i=0;i<(int)actores.size();i++)
    {
        for(int j=i+1;j<(int)actores.size();j++)
        {
            actores[i]->SystemaDeColision(actores[j]);
        }
    }
}

void mapa::Imagen_de_fondo(string dir) {
    fondo->Imagen_de_fondo(dir);
}

void mapa::BitmappFondo(int color) {
    fondo->DefaultBitmap(color);
}

void mapa::EraseActor(D_ActorsItem item) {
    actores.erase(item);
}

void mapa::destructor_() {
    if(padre)
    {
        ((game*)padre)->EraseMapaItem(item);
        delete this;
    }
}
