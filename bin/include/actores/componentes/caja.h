/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   caja.h
 * Author: Calimpio
 *
 * Created on 21 de mayo de 2017, 10:59 PM
 */

#ifndef CAJA_H
#define CAJA_H

#include "actor_component.h"
#include "colision_linea.h"

namespace rapsody {

    class caja : public actor_componente {
    public:
        caja();
        caja(const caja& orig);
        virtual ~caja();
        

        virtual void constructor_();

        
    protected:
        D_CoLine l1,l2,l3,l4;
        
    private:
        
    };
    
}

typedef rapsody::caja* D_ColBox;
typedef rapsody::caja C_ColBox;


#endif /* CAJA_H */

