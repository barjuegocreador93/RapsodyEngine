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
using namespace rapsody;
game::game() {
    puase=false;
    gameover=false;
    mapaReady=0;
    mapas.clear(); 
    
    SetEscala(crear_punto(500,500));
    setNombre("el juego");
    D_World myworld=AddMapa<C_World>();
    myworld->setNombre("el mapa");
    D_Actor mya=myworld->AddActor<C_Actor>();
    mya->setNombre("mi actor");
    mya->SetEscala(crear_punto(6,6));
    //aqui se crea el componente
    D_AComponent myac=mya->AddComponents<C_AComponent>();
    
       
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
    
    inicia_allegro(GetEscala().x,GetEscala().y);
    cout<<"game "<<getNombre()<<"\n";
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

void game::EraseMapaItem(vector<C_World*>::iterator item) {
    mapas.erase(item);
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