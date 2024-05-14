class Cronometro
{
private:
    int horas;
    int minutos;
    int segundos;
public:
    Cronometro();
    void set_hora(int);
    void set_minuto(int);
    void set_segundo(int);
    int get_hora();
    int get_minuto();
    int get_segundo();
    void reset();
    void operator++(int);
};