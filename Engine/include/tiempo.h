#ifndef TIEMPO_H
#define TIEMPO_H


class tiempo
{
public:
    tiempo();
    virtual ~tiempo();

    int Getmils()
    {
        return mils;
    }
    void Setmils(int val)
    {
        mils = val;
    }
    int Getseg()
    {
        return seg;
    }
    void Setseg(int val)
    {
        seg = val;
    }
    int Getmins()
    {
        return mins;
    }
    void Setmins(int val)
    {
        mins = val;
    }
    int Gethrs()
    {
        return hrs;
    }
    void Sethrs(int val)
    {
        hrs = val;
    }

    void init()
    {
        mils=0;
        seg=0;
        mins=0;
        hrs=0;
    }

    void correTiempo()
    {
        if(60==mins)
        {
            hrs++;
            mins=0;
        }
        if(60==seg)
        {
            mins++;
            seg=0;
        }
        if(1000==mils)
        {
            seg++;
            mils=0;
        }
        mils++;
    }

    int mils;
    int seg;
    int mins;
    int hrs;

protected:

private:

};

#endif // TIEMPO_H
