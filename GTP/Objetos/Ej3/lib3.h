class Complejo
{
private:
    double real;
    double imaginario;
public:
    Complejo();
    Complejo(double r, double i);
    void set_real(double r);
    void set_imaginario(double i);
    double get_real();
    double get_imaginario();
    Complejo operator+(Complejo sumando2);
    Complejo operator-(Complejo sustraendo);
    Complejo operator*(Complejo multiplicador);
    Complejo Conjugado();

};
