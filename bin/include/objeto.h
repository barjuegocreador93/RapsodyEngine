#ifndef OBJETO_H
#define OBJETO_H

#include "transformacion.h"

class objeto
{
public:
    objeto();
    virtual ~objeto();



    virtual void empezar();
    virtual void mientras(int mils);
    virtual void fin();
    transformacion ubicacion;
protected:



private:
};

#endif // OBJETO_H
