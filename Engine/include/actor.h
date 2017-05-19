#ifndef ACTOR_H
#define ACTOR_H

#include "rapsody.h"
#include "render.h"
#include "colision.h"
#include "fisica.h"

class actor : public fisica
{
public:
    actor();
    virtual ~actor();

    vector<colision *> colisiones;
    vector<render *> imagenes;

    virtual void empezar();
    virtual void mientras(int mils);

    template <class colision>
    colision * AddColision()
    {
        colision * nueva=(colision*)new(colision);
        nueva->padre= this;
        colisiones.push_back(nueva);
        return nueva;
    }

    template <class render>
    render * AddImage(string dir)
    {
        render * nueva=(render*)new(render);
        nueva->ubicacion=ubicacion;
        nueva->mount_imagen(dir);
        imagenes.push_back(nueva);
        return nueva;

    }

    virtual void render();

    bool visible;


protected:

private:
};

typedef map<string,actor *>  Actores;
typedef pair<string,actor *> Actor;

#endif // ACTOR_H
