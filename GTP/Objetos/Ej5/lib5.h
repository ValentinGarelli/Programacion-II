class Cordenadas
{
private:
    double x;
    double y;
public:
    Cordenadas();
    Cordenadas(double i, double j);
    void set_X(double i);
    void set_Y(double j);
    double get_X();
    double get_Y();
    Cordenadas operator++(int);
    Cordenadas operator--(int);
    Cordenadas operator+(Cordenadas C2);
    Cordenadas operator+(int num);
    Cordenadas operator-(Cordenadas C2);
    Cordenadas operator-(int num);
    void PasarPolar(double &magnitud, double &angulo);
    Cordenadas PasarCartesiano(double magnitud, double angulo);

};
