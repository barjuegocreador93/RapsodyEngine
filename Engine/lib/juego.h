


class juego : objeto
{
public:
    juego(int ancho,int largo,int left,int rigth)
    {
        inicia_allegro(ancho,largo);
        inicia_audio(left,rigth);/**Sonido*/
        mundo=NULL;
        gameend=false;
        time.init();
        /**code here*/

    }

    ~juego()
    {

    }

    template <class mapa>
    void ComienzaEnMapa()
    {
        if(mundo!=NULL)delete mundo;
        mundo=(mapa*)new(mapa);
        mundo->game=this;
    }


    virtual void empezar()
    {
        mundo->empezar();
    }

    virtual void mientras(int mils)
    {
        while(!gameend)
        {
            if(!mundo->pausa)
            {
                mundo->mientras(time.mils);
                time.correTiempo();
            }

        }



    }

    virtual void fin()
    {
        mundo->fin();
    }




protected:
    mapa * mundo;
    tiempo time;
    bool gameend;

};
