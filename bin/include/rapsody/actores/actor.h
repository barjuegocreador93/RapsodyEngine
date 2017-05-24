#ifndef ACTOR_H
#define ACTOR_H


#include "fisica.h"
#include "actor_component.h"

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
                
                components.push_back(m);
                //se entrega por aqui a actor como padre a actor_componente, pero no lo hace
                m->pertenece(this);                
                m->constructor_();
                if(components[components.size()-1]->getPadre())cout<<"xD";
                m->setItem(components.end());
                
                return (actor_component_type*)(m);
                

            }
            return NULL;
        }


        virtual void Tocando(actor *, actor_componente *);
        virtual void Sobre(actor *, actor_componente *);


        void SystemaDeColision(actor * ext);
        
        void EraseComponent(D_AComponents::iterator item);
        void setItem(vector<actor*>::iterator item);

    protected:

        D_AComponents components;        
        bool visible;

    private:
        vector<actor*>::iterator item;

    };
}
typedef map<string, rapsody::actor *> D_MActores;
typedef pair<string, rapsody::actor *> D_MActor;
typedef vector< rapsody::actor *>::iterator D_ActorsItem;
typedef vector< rapsody::actor *> D_Actors;
typedef rapsody::actor* D_Actor;
typedef rapsody::actor C_Actor;

#endif // ACTOR_H
