



struct objeto
{
    transformacion ubicacion;

    virtual void empezar()
    {

    }

    virtual void mientras(int mils)
    {

    }

    virtual void fin()
    {

    }


};


struct s_imagen : objeto
{

    img data;
    bool auto_;
    int color;

    void initi(punto pos,punto escala)
    {
        ubicacion.posicion=pos;
        ubicacion.escala=escala;
    }

    void mount_imagen(string dir)
    {
        data=load_bitmap(strTochar(dir),NULL);
        auto_=false;
    }

    void crear(int color)
    {
        data =  create_bitmap(ubicacion.escala.x,ubicacion.escala.y);
        auto_=true;
        color=color;
    }

    void print()
    {
        if(!auto_)blit(data,screen,0,0,ubicacion.posicion.x,ubicacion.posicion.y,ubicacion.escala.x,ubicacion.escala.y);
        else
        {

            clear_to_color(data, color);
            blit(data,screen,0,0,ubicacion.posicion.x,ubicacion.posicion.y,ubicacion.escala.x,ubicacion.escala.y);
        }
    }

};

