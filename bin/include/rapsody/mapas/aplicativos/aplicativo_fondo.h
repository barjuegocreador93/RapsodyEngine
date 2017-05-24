/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   aplicativo_fondo.h
 * Author: Calimpio
 *
 * Created on 22 de mayo de 2017, 07:52 AM
 */

#ifndef APLICATIVO_FONDO_H
#define APLICATIVO_FONDO_H

#include "aplicativo.h"
#include "componentes/aplicativo_fondo_componente.h"


namespace rapsody {

    class aplicativo_fondo : public aplicativo{
    public:
        aplicativo_fondo();
        aplicativo_fondo(const aplicativo_fondo& orig);
        virtual ~aplicativo_fondo();

        virtual void constructor_();
        
        void Imagen_de_fondo(string dir)
        {
            fondo->Imagen_de_fondo(dir);
        }
        
        void DefaultBitmap(int color)
        {
            fondo->DefaultBitmap(color);
        }

    private:
        
        aplicativo_fondo_componente* fondo;

    };
}
#endif /* APLICATIVO_FONDO_H */

