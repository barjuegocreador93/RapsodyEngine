/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mi_mapa.h
 * Author: Calimpio
 *
 * Created on 20 de mayo de 2017, 02:23 PM
 */

#ifndef MI_MAPA_H
#define MI_MAPA_H

#include "game.h"
#include "nave.h"
class mi_mapa : mapa {
public:
    mi_mapa();
    mi_mapa(const mi_mapa& orig);
    virtual ~mi_mapa();

    virtual void empezar();

private:
    nave * n1;
};

#endif /* MI_MAPA_H */

