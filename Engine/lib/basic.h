

typedef BITMAP *img;

char * strTochar(string a)
{
    char * x=new char[a.length()+1];
    strcpy(x,a.c_str());
    return x;
}

struct punto
{

    int x;
    int y;

    punto &operator=(const punto &otro)
    {
        x=otro.x;
        y=otro.y;
        return *this;
    }
    bool operator==(punto &otro)
    {
        return x == otro.x && y == otro.y;
    }

    bool operator!=(punto &otro)
    {
        return ! (*this == otro);
    }

    punto operator+(punto &otro)
    {
        punto m;
        m.x=x + otro.x;
        m.y=y + otro.y;
        return m;
    }

    bool operator>=(punto &otro)
    {
        return (x>=otro.x && y>=otro.y);
    }
    bool operator<=(punto &otro)
    {
        return (x<=otro.x && y<=otro.y);
    }

    punto operator-(punto &otro)
    {
        punto m;
        m.x=x - otro.x;
        m.y=y - otro.y;
        return m;
    }

    float div()
    {
        if(x != 0)
            return y/x;
        return 0;
    }

    void operator*=(int c)
    {
        x*=c;
        y*=c;
    }


    friend ostream &operator<<(ostream &ou, const punto &otro)
    {
        cout<<"point: "<<otro.x<<","<<otro.y<<endl;
        return ou;
    }


};

punto crear_punto(int x, int y)
{
    punto m;
    m.x=x;
    m.y=y;
    return m;
}

struct transformacion{
    punto posicion;
    punto escala;

    transformacion & operator=(const transformacion &otro)
    {
        posicion=otro.posicion;
        escala=otro.escala;
        return *this;
    }

};


transformacion crear_transformacion(punto pos, punto escala)
{
    transformacion u;
    u.posicion=pos;
    u.escala=escala;
    return u;
}


struct tiempo
{
    int mils,seg,mins,hrs;
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
};
