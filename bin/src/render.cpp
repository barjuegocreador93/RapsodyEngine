#include "render.h"

render::render() : objeto() {

}

render::~render() {

}

void render::initi(punto pos, punto escala) {
    ubicacion.Setposicion(pos);
    ubicacion.Setescala(escala);
}

void render::mount_imagen(string dir) {
    data = load_bitmap(strTochar(dir), NULL);
    auto_ = false;
}

void render::crear(int color) {
    data = create_bitmap(ubicacion.Getescala().x, ubicacion.Getescala().y);
    auto_ = true;
    color = color;
}

void render::print() {
    if (!auto_)blit(data, screen, 0, 0, ubicacion.Getposicion().x, ubicacion.Getposicion().y, ubicacion.Getescala().x, ubicacion.Getescala().y);
    else {
        clear_to_color(data, color);
        blit(data, screen, 0, 0, ubicacion.Getposicion().x, ubicacion.Getposicion().y, ubicacion.Getescala().x, ubicacion.Getescala().y);
    }
}
