#ifndef RENDER_H
#define RENDER_H


#include "objeto.h"


class s_image : public objeto
{
public:
    s_image();
    virtual ~s_image();



    void initi(punto pos,punto escala);

    void mount_imagen(string dir);

    void crear(int color);

    void print();
    
protected:
    img data;
    int data_render_mode;
    int color;

private:
};

typedef vector<s_image *> Sprite;
typedef s_image * Image;

#endif // RENDER_H
