#ifndef CONTROLADOR_H
#define CONTROLADOR_H


#include "objeto.h"


class controlador : public objeto
{
public:
    controlador();
    virtual void empezar();
    virtual void mientras(int mils);
    virtual void terminar();
protected:

private:
};

#endif // CONTROLADOR_H
