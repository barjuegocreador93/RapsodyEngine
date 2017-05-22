/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   colision_linea.h
 * Author: Calimpio
 *
 * Created on 21 de mayo de 2017, 08:52 PM
 */

#ifndef COLISION_LINEA_H
#define COLISION_LINEA_H

#include "linea.h"
#include "actor_component.h"
namespace rapsody {

    class colision_linea : public C_AComponent {
    public:
        colision_linea();
        colision_linea(const colision_linea& orig);
        virtual ~colision_linea();

        virtual void Tocando(D_AComponent m);
        virtual bool EstaTocando(D_AComponent m);




    protected:
        linea linea_1;


    private:

    };
}
typedef rapsody::colision_linea* D_CoLine;
typedef rapsody::colision_linea C_CoLine;

#endif /* COLISION_LINEA_H */

