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


#include <typeinfo>

#include "objeto.h"
namespace rapsody {

    class actor_componente : public objeto {
    public:
        actor_componente();
        actor_componente(const actor_componente& orig);
        virtual ~actor_componente();

        virtual void constructor_();

        virtual void empezar();
        virtual void mientras(int mils);
        virtual void fin();

        virtual bool EstaTocando(actor_componente *otro);
        virtual bool EstaSobre(actor_componente * otro);

        virtual void Tocando(actor_componente* un_componente);
        virtual void Sobre(actor_componente* un_componente);

        void render();
        virtual void print();

        template<class actor_component_type>
        actor_component_type * AddComponent();

        void SystemaDeColision(actor_componente * otro);
        void MoviemientosInternos();

    protected:
        transformacion ubicacion, ubicacion_interna;
        vector<actor_componente *> components;
        objeto * padre;


    private:


    };
}

typedef vector<rapsody::actor_componente *> D_AComponents;
typedef rapsody::actor_componente* D_AComponent;
typedef rapsody::actor_componente C_AComponent;

#endif /* ACTOR_COMPONENT_H */

