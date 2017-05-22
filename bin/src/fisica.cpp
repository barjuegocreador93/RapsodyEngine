#include "fisica.h"
using namespace rapsody;


fisica::fisica()
{
    //ctor
    estatico=false;
    colision_solida=false;
    movimiento=false;
    masa=0.0;    
    velocidad=aceleracion=crear_punto(0,0);
    
    
    
}

void fisica::setMundo(objeto* mundo) {
    this->mundo = mundo;
}

objeto* fisica::getMundo() const {
    return mundo;
}


void fisica::setColision_solida(bool colision_solida) {
    this->colision_solida = colision_solida;
}

bool fisica::isColision_solida() const {
    return colision_solida;
}

void fisica::setMovimiento(bool movimiento) {
    this->movimiento = movimiento;
}

bool fisica::isMovimiento() const {
    return movimiento;
}

void fisica::setEstatico(bool estatico) {
    this->estatico = estatico;
}

bool fisica::isEstatico() const {
    return estatico;
}

void fisica::setMasa(float masa) {
    this->masa = masa;
}

float fisica::getMasa() const {
    return masa;
}

void fisica::setAceleracion(punto2D aceleracion) {
    this->aceleracion = aceleracion;
}

punto2D fisica::getAceleracion() const {
    return aceleracion;
}

void fisica::setVelocidad(punto2D velocidad) {
    this->velocidad = velocidad;
}

punto2D fisica::getVelocidad() const {
    return velocidad;
}

fisica::~fisica()
{
    //dtor
}



void fisica::active_movenets_on_map()
{
    
}

void fisica::mientras(int mils)
{
    
    
    if(!estatico)
    {
        
        
        if(transncurrido.seg == 60)
        {
            
            velocidad += aceleracion;
            if(crear_punto(0,0) != velocidad)
            {
                active_movenets_on_map();
                ubicacion.AcumPosicionX(velocidad.x);
                ubicacion.AcumPosicionY(velocidad.y);
            }
            transncurrido.seg=0;
        }
        if(mils)
        {
           transncurrido.seg++; 
        }
        
    }
}

bool fisica::TieneColisionDeSolidos() {
    return colision_solida;
}

void fisica::SetVelocidad(punto2D value) {
    velocidad = value;
}


