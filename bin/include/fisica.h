#ifndef FISICA_H
#define FISICA_H

#include "rapsody.h"
#include "tiempo.h"
#include "objeto.h"

class fisica : public objeto
{
public:
    fisica();
    virtual ~fisica();

    virtual void mientras(int mils);

    void active_movenets_on_map();

    punto velocidad;
    punto aceleracion;
    objeto * mundo;

    float masa;

    bool estatico;
    bool movimiento;
    bool colision_solida;
    tiempo transncurrido;


protected:

private:
};

#endif // FISICA_H
