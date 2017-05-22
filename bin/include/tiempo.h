#ifndef TIEMPO_H
#define TIEMPO_H

namespace rapsody
{
class tiempo
{
public:
    tiempo();
    virtual ~tiempo();

    void correTiempo();

    int mils;
    int seg;
    int mins;
    int hrs;

protected:

private:

};
}

typedef rapsody::tiempo C_Time;

#endif // TIEMPO_H
