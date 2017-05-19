#ifndef MIMAPA_H
#define MIMAPA_H


#include "mapa.h"



class MiMapa : public mapa
{
public:
    /** Default constructor */
    MiMapa();
    /** Default destructor */
    virtual ~MiMapa();

    virtual void empezar();
    virtual void mientras(int mils);
    virtual void fin();



protected:
    actor * a1,*a2;
private:
};

#endif // MIMAPA_H
