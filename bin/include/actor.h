#ifndef ACTOR_H
#define ACTOR_H

#include "rapsody.h"
#include "render.h"
#include "colision.h"
#include "fisica.h"

class actor : public fisica {
public:
    actor();
    virtual ~actor();

    vector<colision *> colisiones;
    vector<render *> imagenes;

    virtual void empezar();
    virtual void mientras(int mils);

    template <class colision_type>
    colision_type * AddColision() {
        colision_type * nueva = (colision_type*)new(colision_type);

        nueva->padre = this;
        colisiones.push_back(nueva);
        return NULL;


        return NULL;

    }

    template <class render_type>
    render_type * AddImage(string dir) {
        render_type * nueva = (render_type*)new(render_type);

        nueva->ubicacion = ubicacion;
        nueva->mount_imagen(dir);
        imagenes.push_back(nueva);
        return nueva;

        return NULL;
    }

    template <class render_type>
    render_type * AddDefaultImage(int color) {
        render_type * nueva = (render_type*)new(render_type);


        nueva->ubicacion = ubicacion;
        nueva->crear(color);
        imagenes.push_back(nueva);
        return nueva;

        return NULL;
    }

    virtual void render();

    bool visible;


protected:

private:
};

typedef map<string, actor *> Actores;
typedef pair<string, actor *> Actor;

#endif // ACTOR_H
