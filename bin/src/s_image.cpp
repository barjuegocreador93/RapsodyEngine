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
    ubicacion.Setposicion(pos);
    ubicacion.SetEscala(escala);
}

void s_image::mount_imagen(string dir) {
    data = load_bitmap(strTochar(dir), NULL);
    data_render_mode = 1;
}

void s_image::crear(int color) {
    if(debug_mode)cout<<" s_image crear correindo "<<"\n";
    data = create_bitmap(ubicacion.GetEscala().x, ubicacion.GetEscala().y);
    if(!data)cout<<" error s_image crear data."<<"\n";
    data_render_mode = 2;
    color = color;
}

void s_image::print() {
    if(debug_mode)cout<<" s_image print correindo "<<"\n";
    if(debug_mode)cout<<" s_image print en ubicacion \n "<<ubicacion.Getposicion()<<" "<<ubicacion.GetEscala();
    if(debug_mode && !data)cout<<" error s_image en data.\n";
    
    if (data_render_mode==1)blit(data, screen, 0, 0, ubicacion.Getposicion().x, ubicacion.Getposicion().y, ubicacion.GetEscala().x, ubicacion.GetEscala().y);
    else if (data_render_mode==2){
        if(debug_mode)cout<<"   s_image en data color anñadido.\n";
        clear_to_color(data, color);
        blit(data, screen, 0, 0, ubicacion.Getposicion().x, ubicacion.Getposicion().y, ubicacion.GetEscala().x, ubicacion.GetEscala().y);
    }
}
