
struct linea
{
    punto A,B;
    string axi;
    s_imagen data;

    bool tocando(linea &m)
    {
        return (A >= m.A && A <= m.B) || (B >= m.A && B <= m.B);

    }

    bool pasada(linea &m)
    {
        return false;
    }

    friend ostream &operator<<(ostream &ou,const linea &m)
    {
        cout<<"linea: \n"<<m.A<<m.B<<endl;
        return ou;
    }

    void print()
    {
        line(screen,A.x,A.y,B.x,B.y,0xffff);
    }

};


linea crear_linea(punto a, punto b)
{
    linea m;
    m.A=a;
    m.B=b;



    return m;
}
