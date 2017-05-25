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

namespace rapsody {

    class mapa : public  XMLelement<actor> {
    public:
        mapa();
        mapa(const mapa& orig);
        virtual ~mapa();


        
        virtual void empezar() override;
        virtual void mientras(int mils) override;
        virtual void fin() override;

        void destructor_();
        

        
        template<class actor_type>
        actor_type* AddActor() {
            actor  *m = (actor*)new(actor_type);
            if (m) {         
                
                               
                AddElement(m);
                m->setMundo(this);
                
                return (actor_type *)(m);

            }
            
            return NULL; 
            
        }
        
        template<class aplication_type>
        aplication_type* AddAplication()
        {
         return AddActor<aplication_type>();
        }
        
        void EraseActor(vector<actor*>::iterator item);
        

        void setMovimientos(bool movimientos) {
            this->movimientos = movimientos;
        }
        
        void SystemaDeColision();
        

        void Imagen_de_fondo(string dir);        
        
        void BitmappFondo(int color);
        
        
        
        


    protected:        
        bool movimientos;
        
        
        
    private:
        vector<mapa*>::iterator item;
    };
}

typedef vector<rapsody::mapa*> D_Worlds;
typedef rapsody::mapa* D_World;
typedef rapsody::mapa C_World;

#endif /* MAPA_H */

