/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   game.h
 * Author: Calimpio
 *
 * Created on 22 de mayo de 2017, 08:32 AM
 */

#ifndef GAME_H
#define GAME_H

#include "objeto.h"
#include "mapa.h"

namespace rapsody{

    class game : public objeto {
    public:
        game();
        game(const game& orig);
        virtual ~game();
        bool IsGameover() const;

        void SetGameover(bool gameover);

        bool IsPuase() const;

        void SetPuase(bool puase);
        

        virtual void empezar();

        virtual void mientras(int mils);
        

        virtual void fin();
        
        void SetMapaReady(int mapaReady);

        
    protected:
        bool puase;
        bool gameover;
        vector<mapa *> mapas;
        int mapaReady;
        tiempo timer;
    private:

    };
}


#endif /* GAME_H */

