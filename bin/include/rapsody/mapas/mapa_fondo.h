/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mapa_fondo.h
 * Author: Calimpio
 *
 * Created on 24 de mayo de 2017, 08:19 AM
 */

#ifndef MAPA_FONDO_H
#define MAPA_FONDO_H

#include <typeindex>

#include "mapa.h"


namespace rapsody
{
class mapa_fondo : public mapa {
public:
    mapa_fondo();
    mapa_fondo(const mapa_fondo& orig);
    virtual ~mapa_fondo();
    virtual void empezar() override;
   
    
    

private:

};
}

typedef rapsody::mapa_fondo C_World_Image;
typedef C_World_Image* D_World_Image;
#endif /* MAPA_FONDO_H */

