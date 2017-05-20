#include "objeto.h"

objeto::objeto() {
    //ctor
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