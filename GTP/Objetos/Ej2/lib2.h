class Racional
{
    private:
    int numerador;
    int denominador;
    void Igual(Racional &R2);
    void Control();
    public:

    Racional();
    Racional(int num,int den);
    void set_numerador(int num);
    void set_denominador(int den);
    int get_numerador();
    int get_denominador();
    Racional operator+(Racional sumando2);
    Racional operator-(Racional sustraendo);
    Racional operator++(int);
    Racional operator--(int);
    Racional operator+=(int entero);
    Racional operator-=(int entero);
    Racional Simplificar();
    
};

