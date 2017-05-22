/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   aplicativo.h
 * Author: Calimpio
 *
 * Created on 22 de mayo de 2017, 06:21 AM
 */

#ifndef APLICATIVO_H
#define APLICATIVO_H

#include "actor.h"

namespace rapsody {

    class aplicativo : public actor {
    public:
        aplicativo();
        aplicativo(const aplicativo& orig);
        virtual ~aplicativo();
    private:

    };


}

#endif /* APLICATIVO_H */

