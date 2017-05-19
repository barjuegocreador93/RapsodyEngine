#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "rapsody.h"
#include "objeto.h"


class controlador : public objeto
{
public:
    controlador();
    

    objeto *peon;

    virtual void empezar();
    virtual void mientras(int mils);
    virtual void terminar();
protected:

private:
};

#endif // CONTROLADOR_H
