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
        virtual void destructor_();


        void render();

        template<class actor_component_type>
        actor_component_type* AddComponents() {
            actor_componente* m = (actor_componente*)new(actor_component_type);
            if (m) {
                m->pertenece(this);
                m->constructor_();
                components.push_back(m);

            }
            return (actor_component_type *) m;
        }


        virtual void Tocando(actor *, actor_componente *);
        virtual void Sobre(actor *, actor_componente *);


        void SystemaDeColision(actor * ext);
        
        void EraseComponent(D_AComponents::iterator item);
        void setItem(vector<actor*>::iterator item);

    protected:

        D_AComponents components;
        vector<actor *>::iterator item;
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
