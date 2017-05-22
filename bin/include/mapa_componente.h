/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mapa_componente.h
 * Author: Calimpio
 *
 * Created on 22 de mayo de 2017, 12:28 AM
 */

#ifndef MAPA_COMPONENTE_H
#define MAPA_COMPONENTE_H

#include "actor_component.h"

namespace rapsody {

    class mapa_componente :public actor_componente {
    public:
        mapa_componente();
        mapa_componente(const mapa_componente& orig);
        virtual ~mapa_componente();
        
        template<class actor_component_type>
        actor_component_type * AddComponent() {
            mapa_componente* m = (mapa_componente*)new(actor_component_type);
            if (m) {
                m->pertenece(padre);
                m->contenedor=this;
                m->constructor_();                
                components.push_back(m);

            }
            return (actor_component_type *) m;
        }
        
        
    private:

    };
}



#endif /* MAPA_COMPONENTE_H */

