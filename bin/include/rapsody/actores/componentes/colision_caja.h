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

    class colision_caja : public actor_componente {
    public:
        colision_caja();
        colision_caja(const colision_caja& orig);
        virtual ~colision_caja();
        

        virtual void constructor_();

        
    protected:
        D_CoLine l1,l2,l3,l4;
        
    private:
        
    };
    
}

typedef rapsody::colision_caja* D_ColBox;
typedef rapsody::colision_caja C_ColBox;


#endif /* CAJA_H */

