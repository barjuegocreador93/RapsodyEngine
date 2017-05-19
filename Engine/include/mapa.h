#ifndef MAPA_H
#define MAPA_H

#include "rapsody.h"
#include "actor.h"


class mapa : public actor
{
    public:
        mapa();
        virtual ~mapa();

    Actores actores;

    template<class a>
    a * AddActor(string key);

    virtual void empezar();

    virtual void mientras(int mils);

    virtual void fin();

    virtual void render();

    void Colisiones();
    bool actor_movements;
    bool pausa;
    objeto * game;

    protected:

    private:
};

#endif // MAPA_H
