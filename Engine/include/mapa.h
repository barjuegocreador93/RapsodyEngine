#ifndef MAPA_H
#define MAPA_H

#include "rapsody.h"
#include "actor.h"


class mapa : public actor
{
public:
    mapa();
    virtual ~mapa();



    template<class actor>
    actor * AddActor(string key)
    {
        actor_movements=true;
        Actores::iterator it;
        it = actores.find(key);

        if(it == actores.end())
        {
            actor * x=(actor*)new(actor);
            x->mundo=this;
            actores.insert(Actor(key,x));
            return x;
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
