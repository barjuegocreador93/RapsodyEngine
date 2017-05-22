#ifndef RENDER_H
#define RENDER_H


#include "objeto.h"
namespace rapsody
{

class s_image : public objeto
{
public:
    s_image();
    virtual ~s_image();



    void initi(punto2D pos,punto2D escala);

    void mount_imagen(string dir);

    void crear(int color);

    void print();
    
protected:
    img data;
    int data_render_mode;
    int color;

private:
};
}
typedef vector<rapsody::s_image *> D_Sprites;
typedef rapsody::s_image * D_Image;

#endif // RENDER_H
