/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   game.cpp
 * Author: Calimpio
 * 
 * Created on 22 de mayo de 2017, 08:32 AM
 */

#include "game.h"
using namespace rapsody;
game::game() {
    puase=false;
    gameover=false;
    mapaReady=0;
    mapas.clear();
}

game::game(const game& orig) {
}

game::~game() {
}

void game::SetGameover(bool gameover) {
    this->gameover = gameover;
}

void game::SetPuase(bool puase) {
    this->puase = puase;
}

bool game::IsGameover() const {
    return gameover;
}

bool game::IsPuase() const {
    return puase;
}

void game::SetMapaReady(int mapaReady) { 
    if(mapaReady>=0 && mapaReady < mapas.size())
        this->mapaReady = mapaReady;
}

void game::empezar() {
    if(mapaReady>=0 && mapaReady < mapas.size())
        mapas[mapaReady]->empezar();
}

void game::mientras(int mils) {
    while (!gameover)
    {
        if(mapaReady>=0 && mapaReady < mapas.size())
        mapas[mapaReady]->mientras(timer.mils);
        timer.correTiempo();
        
    }
    
}

void game::fin() {
    if(mapaReady>=0 && mapaReady < mapas.size())
        mapas[mapaReady]->fin();
}
