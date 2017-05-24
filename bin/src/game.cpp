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
#include "colision_linea.h"
#include "colision_caja.h"
#include "mapa_fondo.h"

using namespace rapsody;
game::game() {
    puase=false;
    gameover=false;
    mapaReady=0;
    elements.clear(); 
    
    SetEscala(crear_punto(500,500));
    SetNombre("el juego");
    
    D_World_Image myw=AddMapa<C_World_Image>();
    
    D_Actor mya=myw->AddActor<C_Actor>();
    
    mya->SetNombre("mi actor");
    
    D_AComponent myac=mya->AddComponents<C_AComponent>();
    
       
}

void game::empezar() {
    
    inicia_allegro(GetEscala().x,GetEscala().y);
    cout<<"game "<<GetNombre()<<"\n";
    if(mapaReady>=0 && mapaReady < elements.size())
        elements[mapaReady]->empezar();
}

void game::mientras(int mils) {
    while (!gameover)
    {
        
        if(mapaReady>=0 && mapaReady < elements.size())
            elements[mapaReady]->mientras(timer.mils);
        
        timer.correTiempo();
        
    }
    
}

void game::fin() {
    if(mapaReady>=0 && mapaReady < elements.size())
        elements[mapaReady]->fin();
}


template<class game_t>
    void Game_Main() {
        game myj;
        myj.empezar();
        myj.mientras(0);
        myj.fin();
    }

void ingame()
{
    Game_Main<game>();
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
    if(mapaReady>=0 && mapaReady < elements.size())
        this->mapaReady = mapaReady;
}


game::game(const game& orig) {
}

game::~game() {
}
