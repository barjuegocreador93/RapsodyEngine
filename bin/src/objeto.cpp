#include "objeto.h"

objeto::objeto(bool priority_debuger) {
    //ctor
    debug_mode=this->priority_debuger=priority_debuger;    
    padre=NULL;
    ubicacion=crear_transformacion(crear_punto(0,0),crear_punto(0,0));
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

objeto::~objeto() {
    //dtor
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

void objeto::SetPosicion(punto value) {
    ubicacion.Setposicion(value);
}

punto objeto::GetPosicion() {
    return ubicacion.Getposicion();
}

void objeto::SetEscala(punto value) {
    ubicacion.SetEscala(value);
}

punto objeto::GetEscala() {
    return ubicacion.GetEscala();
}