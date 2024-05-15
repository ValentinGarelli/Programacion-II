#include "Fig_Geo.h"

class Punto: public Fig_Geo{
    public:
    Punto(double x,double y);
    double Area();
    double Perimetro();

};