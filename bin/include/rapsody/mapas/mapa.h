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

        void destructor_();
        

        
        template<class actor_type>
        actor_type* AddActor() {
            actor  *m = (actor*)new(actor_type);
            if (m) {               
                
                m->pertenece(this);
                m->setMundo(this);
                m->constructor_();                
                actores.push_back(m);
                actores[actores.size()-1]->setItem(actores.end());
                return (actor_type *)(actores[actores.size()-1]);

            }
            
            return NULL; 
            
        }
        
        void EraseActor(vector<actor*>::iterator item);
        

        void setMovimientos(bool movimientos) {
            this->movimientos = movimientos;
        }
        
        void SystemaDeColision();
        

        void Imagen_de_fondo(string dir);        
        
        void BitmappFondo(int color);
        
        
        
        void setItem(vector<mapa*>::iterator item) {
            this->item = item;
        }


    protected:
        D_Actors actores;
        bool movimientos;
        aplicativo_fondo* fondo;
        
        
    private:
        vector<mapa*>::iterator item;
    };
}

typedef vector<rapsody::mapa*> D_Worlds;
typedef rapsody::mapa* D_World;
typedef rapsody::mapa C_World;

#endif /* MAPA_H */
