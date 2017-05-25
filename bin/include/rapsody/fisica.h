#ifndef FISICA_H
#define FISICA_H



#include "objeto.h"
#include "tiempo.h"
#include "xmltree.h"
#include "actores/componentes/actor_component.h"

namespace rapsody {

    class fisica : public XMLelement<actor_componente> {
    public:
        fisica();
        virtual ~fisica();

        virtual void mientras(int mils) override;

        void active_movenets_on_map();

        bool TieneColisionDeSolidos();

        void SetVelocidad(punto2D value);
        void setMundo(objeto* mundo);
        objeto* getMundo() const;        
        void setColision_solida(bool colision_solida);
        bool isColision_solida() const;
        void setMovimiento(bool movimiento);
        bool isMovimiento() const;
        void setEstatico(bool estatico);
        bool isEstatico() const;
        void setMasa(float masa);
        float getMasa() const;
        void setAceleracion(punto2D aceleracion);
        punto2D getAceleracion() const;
        void setVelocidad(punto2D velocidad);
        punto2D getVelocidad() const;

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
