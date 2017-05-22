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

        void render();

        template <class actor_component_type>
        actor_component_type * AddComponents();


        virtual void Tocando(actor *, actor_componente *);
        virtual void Sobre(actor *, actor_componente *);




    protected:

        D_AComponents components;
        bool visible;

    private:

    };
}
typedef map<string, rapsody::actor *> D_MActores;
typedef pair<string, rapsody::actor *> D_MActor;
typedef rapsody::actor* D_Actor;
typedef rapsody::actor C_Actor;

#endif // ACTOR_H
