#include "objeto.h"
using namespace rapsody;

objeto::objeto(bool priority_debuger) {
    //ctor
    debug_mode=this->priority_debuger=priority_debuger;    
    padre=NULL;
    ubicacion=crear_transformacion(crear_punto(0,0),crear_punto(0,0));
    nombre="objeto";
}

void objeto::setDebug_mode(bool debug_mode) {
    this->debug_mode = debug_mode;
}

bool objeto::isDebug_mode() const {
    return debug_mode;
}

void objeto::setPriority_debuger(bool priority_debuger) {
    debug_mode=this->priority_debuger = priority_debuger;
}

bool objeto::isPriority_debuger() const {
    return priority_debuger;
}

objeto* objeto::getPadre() const {
    return padre;
}

objeto::~objeto() {
    //dtor
}

void objeto::constructor_() {

}

void objeto::destructor_() {

}


void objeto::empezar() {
    
}

void objeto::mientras(int mils) {

}

void objeto::fin() {

}

void objeto::pertenece(objeto* m) {
    padre = m;
    if(!priority_debuger)debug_mode=m->debug_mode;
}

void objeto::SetUbicacion(transformacion value) {
    ubicacion = value;
}

transformacion objeto::GetUbicacion() {
    return ubicacion;
}

void objeto::SetPosicion(punto2D value) {
    ubicacion.SetPosicion(value);
}

punto2D objeto::GetPosicion() {
    return ubicacion.GetPosicion();
}

void objeto::SetEscala(punto2D value) {
    ubicacion.SetEscala(value);
}

punto2D objeto::GetEscala() {
    return ubicacion.GetEscala();
}

string objeto::getNombre() const {
    return nombre;
}

void objeto::setNombre(string nombre) {
    this->nombre = nombre;
}
