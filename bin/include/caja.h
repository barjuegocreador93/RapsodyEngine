#ifndef CAJA_H
#define CAJA_H

#include "rapsody.h"
#include "colision.h"

class caja : public colision
{
public:
    caja();
    virtual ~caja();

    void init(punto escala);

    virtual void empezar();

    virtual void attach();

    virtual void mientras(int mils);

    void movimientos(linea &line_a,linea &line_b,linea &line_c,linea &line_d);

protected:

private:
};

#endif // CAJA_H
