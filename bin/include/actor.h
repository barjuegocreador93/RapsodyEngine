#ifndef ACTOR_H
#define ACTOR_H


#include "fisica.h"
#include "s_image.h"
#include "colision.h"


class actor : public fisica
{
public:
    actor();
    virtual ~actor();

    

    virtual void empezar();
    virtual void mientras(int mils);    
    virtual void fin();

    
    
    template <class colision_type>
    colision_type * AddColision(colision_type * nueva = NULL)
    {    
        
        AddObjetoComoHijoEnUnVector(&colisiones,nueva);            
        return nueva;
    }

    template <class s_image_type>
    s_image_type * AddImage(string dir, s_image_type * nueva = NULL)
    {
        s_image * n;
        AddObjetoComoHijoEnUnVector(&imagenes,nueva,n);       
        if(n!=NULL)
        {           
            n->mount_imagen(dir);
        }        
        return nueva;
    }

    template <class s_image_type>
    s_image_type * AddDefaultImage(int color, s_image_type * nueva)
    {

        s_image * n;
        AddObjetoComoHijoEnUnVector(&imagenes,nueva,n);        
        if((n)!=NULL)
        {            
            n->crear(color);         
        }        
        return nueva;

        
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
