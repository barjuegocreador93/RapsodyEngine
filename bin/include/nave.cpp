/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nave.cpp
 * Author: Calimpio
 * 
 * Created on 20 de mayo de 2017, 02:30 PM
 */

#include "nave.h"

nave::nave() {
    
}

nave::nave(const nave& orig) {
}

nave::~nave() {
}

 void nave::empezar()
{
    AddColision(c1);
    peon::empezar();
}



