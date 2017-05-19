#ifndef PEON_H
#define PEON_H

#include "rapsody.h"
#include "actor.h"
#include "controlador.h"

class peon : public actor
{
public:
    peon();
    virtual ~peon();

    controlador * jugador;

    template<class controlador_type>
    void AddControlador()
    {
        jugador=(controlador *)new(controlador_type);
    }

    virtual void empezar();


    virtual void mientras(int mils);

    virtual void fin();


protected:

private:
};

#endif // PEON_H
