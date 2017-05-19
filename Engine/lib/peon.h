


class peon : public actor
{
public:

    peon()
    {

    }

    ~peon()
    {

    }

    controlador * jugador;

    template<class c>
    void AddControlador()
    {
        jugador=(c*)new(c);
    }

    virtual void empezar()
    {
        actor::empezar();
        jugador->empezar();
    }


    virtual void mientras(int mils)
    {
        actor::mientras(mils);
        jugador->mientras(mils);
    }

    virtual void fin()
    {
        actor::fin();
        jugador->fin();
    }

};
