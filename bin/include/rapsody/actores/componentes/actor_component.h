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
#include "xmltree.h"

namespace rapsody {

    
    class actor_componente : public XMLelement<actor_componente> {
    public:
        actor_componente();
        actor_componente(const actor_componente& orig);
        virtual ~actor_componente();

        
        
        void destructor_();


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
        actor_component_type * AddComponent() {
            actor_componente* m = (actor_componente*)new(actor_component_type);
            if (m) {
                //se epsera a que lo lea pero no:
                
                AddElement(m);
                
                m->contenedor=this;
                return (actor_component_type*)(m);
            }
            return NULL;
        }

        void SystemaDeColision(actor_componente * otro);
        virtual void MoviemientosInternos();

        void setUbicacion_interna(C_Transform ubicacion_interna) {
            this->ubicacion_interna = ubicacion_interna;
        }
        void setContenedor(actor_componente* contenedor);
        actor_componente* getContenedor() const;
        
        
        


    protected:
        C_Transform ubicacion, ubicacion_interna;             
        
        actor_componente * contenedor;
        
       
    private:
        
        


    };
}

typedef vector<rapsody::actor_componente *> D_AComponents;
typedef rapsody::actor_componente* D_AComponent;
typedef rapsody::actor_componente C_AComponent;

#endif /* ACTOR_COMPONENT_H */

