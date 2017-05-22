/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mapa.h
 * Author: Calimpio
 *
 * Created on 22 de mayo de 2017, 04:36 AM
 */

#ifndef MAPA_H
#define MAPA_H

#include "objeto.h"
#include "actor.h"
#include "aplicativos/aplicativo_fondo.h"
namespace rapsody {

    class mapa : public objeto {
    public:
        mapa();
        mapa(const mapa& orig);
        virtual ~mapa();


        virtual void constructor_();
        virtual void empezar();
        virtual void mientras(int mils);
        virtual void fin();
        
        template<class actor_type>
        actor_type* AddActor() {
            actor* m = (actor*)new(actor_type);
            if (m) {
                m->pertenece(this);
                m->constructor_();
                actores.push_back(m);

            }
            return (actor_type *) m;
        }
        
        

        void setMovimientos(bool movimientos) {
            this->movimientos = movimientos;
        }
        
        void SystemaDeColision();
        

        void Imagen_de_fondo(string dir);        
        
        void BitmappFondo(int color);
        


    protected:
        vector<actor *> actores;
        bool movimientos;
        aplicativo_fondo* fondo;
        
    private:

    };
}

#endif /* MAPA_H */

