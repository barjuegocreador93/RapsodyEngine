#include "s_image.h"
using namespace rapsody;
s_image::s_image()
{
    data=NULL;
    data_render_mode=0;
    color=0xffff;
}

s_image::~s_image() {
    destroy_bitmap(data);
}

void s_image::initi(punto2D pos, punto2D escala) {
    ubicacion.SetPosicion(pos);
    ubicacion.SetEscala(escala);
}

void s_image::mount_imagen(string dir) {
    data = load_bitmap(strTochar(dir), NULL);
    data_render_mode = 1;
}

void s_image::crear(int color) {
    
    data = create_bitmap(ubicacion.GetEscala().x, ubicacion.GetEscala().y);    
    data_render_mode = 2;
    color = color;
}

void s_image::print() {    
    if (data_render_mode==1)blit(data, screen, 0, 0, ubicacion.GetPosicion().x, ubicacion.GetPosicion().y, ubicacion.GetEscala().x, ubicacion.GetEscala().y);
    else if (data_render_mode==2){        
        clear_to_color(data, color);
        blit(data, screen, 0, 0, ubicacion.GetPosicion().x, ubicacion.GetPosicion().y, ubicacion.GetEscala().x, ubicacion.GetEscala().y);
    }
}
