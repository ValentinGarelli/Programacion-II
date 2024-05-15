#include "Fig_Geo.h"

class Circulo : public Fig_Geo{
    private:
    double radio;

    public:
    Circulo(double x,double y,double r);
    double Area();
    double Perimetro();
    

};