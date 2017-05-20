/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nave.h
 * Author: Calimpio
 *
 * Created on 20 de mayo de 2017, 02:30 PM
 */

#ifndef NAVE_H
#define NAVE_H

#include"game.h"
#include "peon.h"
#include "caja.h"


class nave : peon{
public:
    nave();
    nave(const nave& orig);
    virtual ~nave();
    
    
    virtual void empezar();   
    
    
    

private:
    caja * c1;

};

#endif /* NAVE_H */

