/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   actor_component.h
 * Author: Calimpio
 *
 * Created on 21 de mayo de 2017, 05:48 AM
 */

#ifndef ACTOR_COMPONENT_H
#define ACTOR_COMPONENT_H


#include "objeto.h"

class actor_component : objeto {
public:
    actor_component();
    actor_component(const actor_component& orig);
    virtual ~actor_component();

    virtual void constructor_();

    virtual void empezar();
    virtual void mientras(int mils);
    virtual void fin();


protected:
    transformacion ubicacion, ubicacion_interna;
    
    objeto * padre;

private:

};

typedef vector<actor_component *> AComponents;
typedef actor_component* AComponent;

#endif /* ACTOR_COMPONENT_H */

