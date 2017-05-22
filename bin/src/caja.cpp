/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   caja.cpp
 * Author: Calimpio
 * 
 * Created on 21 de mayo de 2017, 10:59 PM
 */

#include "caja.h"
#include "colision_linea.h"
using namespace rapsody;

caja::caja() {
}

caja::caja(const caja& orig) {
}

caja::~caja() {
}

void caja::constructor_() {
   l1 = AddComponent<C_CoLine>();
   l2 = AddComponent<C_CoLine>();
   l3 = AddComponent<C_CoLine>();
   l4 = AddComponent<C_CoLine>();

   l1->SetInternal_linea(
   crear_linea(
           crear_punto(0,0),
           crear_punto(5,0)       
   )
   );
   l2->SetInternal_linea(
   crear_linea(
           crear_punto(5,0),
           crear_punto(5,5)       
   )
   );
   l3->SetInternal_linea(
   crear_linea(
           crear_punto(0,5),
           crear_punto(5,5)       
   )
   );
   
   l4->SetInternal_linea(
   crear_linea(
           crear_punto(0,0),
           crear_punto(0,5)       
   )
   );
}

