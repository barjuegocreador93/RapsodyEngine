#ifndef FISICA_H
#define FISICA_H



#include "objeto.h"
#include "tiempo.h"

namespace rapsody {

    class fisica : public objeto {
    public:
        fisica();
        virtual ~fisica();

        virtual void mientras(int mils);

        void active_movenets_on_map();

        bool TieneColisionDeSolidos();

        void SetVelocidad(punto2D value);
        void setMundo(objeto* mundo);
        objeto* getMundo() const;

    protected:

        punto2D velocidad;
        punto2D aceleracion;

        objeto * mundo;

        float masa;

        bool estatico;
        bool movimiento;
        bool colision_solida;
        tiempo transncurrido;

    private:
    };
}

typedef rapsody::fisica * D_Physic;

#endif // FISICA_H
