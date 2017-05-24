/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   aplicativo_componente.h
 * Author: Calimpio
 *
 * Created on 22 de mayo de 2017, 06:53 AM
 */

#ifndef APLICATIVO_COMPONENTE_H
#define APLICATIVO_COMPONENTE_H

#include "actor_component.h"

namespace rapsody {
    
    class aplicativo_componente : public actor_componente {
        
    public:
        aplicativo_componente();
        aplicativo_componente(const aplicativo_componente& orig);
        virtual ~aplicativo_componente();
    private:

    };
}

#endif /* APLICATIVO_COMPONENTE_H */

