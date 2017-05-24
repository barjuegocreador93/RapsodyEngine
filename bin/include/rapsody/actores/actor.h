#ifndef ACTOR_H
#define ACTOR_H


#include "fisica.h"
#include "actor_component.h"
#include "xmltree.h"

namespace rapsody {

    class actor : public fisica {
    public:
        actor();
        virtual ~actor();


        
        virtual void empezar();
        virtual void mientras(int mils);
        virtual void fin();      
        void destructor_();


        void render();

        template<class actor_component_type>
        actor_component_type* AddComponents() {
            actor_componente* m = (actor_componente*)new(actor_component_type);
            if (m) {
                
                AddElement(m);                             
                m->constructor_();
                
                return (actor_component_type*)(m);
                

            }
            return NULL;
        }


        virtual void Tocando(actor *, actor_componente *);
        virtual void Sobre(actor *, actor_componente *);


        void SystemaDeColision(actor * ext);
        
        
        

    protected:               
        bool visible;

    private:
        

    };
}
typedef map<string, rapsody::actor *> D_MActores;
typedef pair<string, rapsody::actor *> D_MActor;
typedef vector< rapsody::actor *>::iterator D_ActorsItem;
typedef vector< rapsody::actor *> D_Actors;
typedef rapsody::actor* D_Actor;
typedef rapsody::actor C_Actor;

#endif // ACTOR_H
