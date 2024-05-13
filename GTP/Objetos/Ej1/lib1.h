class Fecha
{
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha();
    Fecha(int D,int M,int A);
    void set_dia(int D);
    void set_mes(int M);
    void set_anio(int A);
    int get_dia();
    int get_mes();
    int get_anio();
    Fecha operator++(int);
    Fecha operator--(int);
    Fecha operator+(const int D);
    Fecha operator-(const int D);
};


