


struct actor : fisica
{
    vector<colision *> colisiones;
    vector<s_imagen *> imagenes;

    virtual void empezar()
    {
        visible=true;

        for(int i=0;i<(int)colisiones.size() && visible;i++)
        {
            colisiones[i]->empezar();
        }
    }


    virtual void mientras(int mils)
    {
        fisica::mientras(mils);
        for(int i=0;i<(int)colisiones.size() && visible;i++)
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

    s_imagen * AddImage(string dir)
    {
        s_imagen * wow=(s_imagen *)new(s_imagen);
        wow->mount_imagen(dir);
        wow->ubicacion=ubicacion;
        imagenes.push_back(wow);
        return wow;
    }

     s_imagen * AddBmap(int color)
    {
        s_imagen * wow=(s_imagen *)new(s_imagen);
        wow->ubicacion=ubicacion;
        wow->crear(color);

        imagenes.push_back(wow);
        return wow;

    }

    virtual void render()
    {
        for(int i=0;i<(int)imagenes.size() && visible;i++)
        {
            imagenes[i]->print();
        }
        for(int i=0;i<(int)colisiones.size() && visible;i++)
        {
            colisiones[i]->print();
        }

    }

    void dar_colisiones_al_mapa();


    bool visible;


};

typedef map<string,actor *>  Actores;
typedef pair<string,actor *> Actor;



