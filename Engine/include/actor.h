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

    virtual void empezar()
    {
        visible=true;

        for(int i=0; i<(int)colisiones.size() && visible; i++)
        {
            colisiones[i]->empezar();
        }
    }


    virtual void mientras(int mils)
    {
        fisica::mientras(mils);
        for(int i=0; i<(int)colisiones.size() && visible; i++)
        {
            colisiones[i]->mientras(mils);
        }

    }


    template <class c>
    c * AddColision()
    {
        c * nueva=(c*)new(c);
        nueva->padre= this;
        colisiones.push_back(nueva);
        return nueva;
    }



    template <class c>
    c * AddImage(string dir)
    {
        c * nueva=(c*)new(c);
        nueva->ubicacion=ubicacion;
        nueva->mount_imagen(dir);
        imagenes.push_back(nueva);
        return nueva;

    }

    template <class c>
    c * Add(string dir)
    {
        c * nueva=(c*)new(c);
        nueva->ubicacion=ubicacion;
        nueva->mount_imagen(dir);
        imagenes.push_back(nueva);
        return nueva;

    }


    virtual void render()
    {
        for(int i=0; i<(int)imagenes.size() && visible; i++)
        {
            imagenes[i]->print();
        }
        for(int i=0; i<(int)colisiones.size() && visible; i++)
        {
            colisiones[i]->print();
        }

    }

    void dar_colisiones_al_mapa();
    bool visible;


protected:

private:
};

typedef map<string,actor *>  Actores;
typedef pair<string,actor *> Actor;

#endif // ACTOR_H
