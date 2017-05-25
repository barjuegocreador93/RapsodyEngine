#ifndef RENDER_H
#define RENDER_H


#include "objeto.h"
#include "xmltree.h"
namespace rapsody
{

class s_image : public XMLelement<s_image>
{
public:
    s_image();
    virtual ~s_image();
    
    void AddS_Image(s_image* image)
    {
        AddElement(image);
    }

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
