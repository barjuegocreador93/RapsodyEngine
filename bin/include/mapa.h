#ifndef MAPA_H
#define MAPA_H

#include "rapsody.h"
#include "actor.h"


class mapa : public actor
{
public:
    mapa();
    virtual ~mapa();



    template<class actor_type>
    actor_type * AddActor(string key)
    {
        actor_movements=true;
        Actores::iterator it;
        it = actores.find(key);

        if(it == actores.end())
        {
            actor * x=(actor*)new(actor_type);
            if(x!=NULL)
            {
                x->mundo=this;
                actores.insert(Actor(key,x));
                return (actor_type *)x;
            }

        }
        return NULL;
    }

    virtual void empezar();

    virtual void mientras(int mils);

    virtual void fin();




    bool actor_movements;
    bool pausa;
    objeto * game;
    Actores actores;

protected:

private:
    virtual void render();
    void Colisiones();
};

#endif // MAPA_H
