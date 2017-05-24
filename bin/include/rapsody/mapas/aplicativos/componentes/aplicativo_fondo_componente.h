/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   aplicativo_fondo_componente.h
 * Author: Calimpio
 *
 * Created on 22 de mayo de 2017, 07:38 AM
 */

#ifndef APLICATIVO_FONDO_COMPONENTE_H
#define APLICATIVO_FONDO_COMPONENTE_H

#include "aplicativo_componente.h"
#include "s_image.h"

namespace rapsody {

    class aplicativo_fondo_componente : public aplicativo_componente{
    public:
        aplicativo_fondo_componente();
        aplicativo_fondo_componente(const aplicativo_fondo_componente& orig);
        virtual ~aplicativo_fondo_componente();
        
        void Imagen_de_fondo(string dir);
             
       
        void DefaultBitmap(int color);
        
        virtual void print();

        
    protected:
        s_image fondo;
    private:

    };
}


#endif /* APLICATIVO_FONDO_COMPONENTE_H */

