#ifndef ACTOR_H
#define ACTOR_H

#include "rapsody.h"
#include "s_image.h"
#include "colision.h"
#include "fisica.h"

class actor : public fisica
{
public:
    actor();
    virtual ~actor();

    

    virtual void empezar();
    virtual void mientras(int mils);

    template <class colision_type>
    colision_type * AddColision()
    {
        colision * nueva = (colision*)new(colision_type);
        if(nueva!=NULL)
        {
            nueva->padre = this;
            colisiones.push_back(nueva);
            return (colision_type *)nueva;
        }
        return NULL;

    }

    template <class s_image_type>
    s_image_type * AddImage(string dir)
    {
        s_image * nueva = (s_image*)new(s_image_type);
        
        if(nueva!=NULL)
        {
            nueva->ubicacion = ubicacion;
            nueva->mount_imagen(dir);
            imagenes.push_back(nueva);
            return (s_image_type *)nueva;
        }
        

        return NULL;
    }

    template <class s_image_type>
    s_image_type * AddDefaultImage(int color)
    {

        s_image * nueva2 = (s_image *)new(s_image_type);

        if((nueva2)!=NULL)
        {
            nueva2->ubicacion = ubicacion;
            nueva2->crear(color);            
            imagenes.push_back((nueva2));
            return (s_image_type *)nueva2;
        }

        return NULL;
    }

    virtual void render();
    
    void ColisionaConOtro(actor *);
    
    bool visible;


protected:
    
    vector<colision *> colisiones;
    vector<s_image *> imagenes;

private:
};

typedef map<string, actor *> Actores;
typedef pair<string, actor *> Actor;

#endif // ACTOR_H
