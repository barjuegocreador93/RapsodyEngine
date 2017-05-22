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

namespace rapsody{

    class game : objeto {
    public:
        game();
        game(const game& orig);
        virtual ~game();
    private:

    };
}
#endif /* GAME_H */

