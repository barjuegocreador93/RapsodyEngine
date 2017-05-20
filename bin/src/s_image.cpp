#include "s_image.h"

s_image::s_image()
{

}

s_image::~s_image() {

}

void s_image::initi(punto pos, punto escala) {
    ubicacion.Setposicion(pos);
    ubicacion.SetEscala(escala);
}

void s_image::mount_imagen(string dir) {
    data = load_bitmap(strTochar(dir), NULL);
    auto_ = false;
}

void s_image::crear(int color) {
    data = create_bitmap(ubicacion.GetEscala().x, ubicacion.GetEscala().y);
    auto_ = true;
    color = color;
}

void s_image::print() {
    if (!auto_)blit(data, screen, 0, 0, ubicacion.Getposicion().x, ubicacion.Getposicion().y, ubicacion.GetEscala().x, ubicacion.GetEscala().y);
    else {
        clear_to_color(data, color);
        blit(data, screen, 0, 0, ubicacion.Getposicion().x, ubicacion.Getposicion().y, ubicacion.GetEscala().x, ubicacion.GetEscala().y);
    }
}
