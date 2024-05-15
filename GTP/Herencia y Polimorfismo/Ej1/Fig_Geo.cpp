#include <iostream>
#include "Fig_Geo.h"

Fig_Geo::Fig_Geo(double x, double y){
    cord_x = x;
    cord_y = y;
}

double Fig_Geo::Razon(){
    double A,P;
    A = Area();
    P = Perimetro();
    return A/P;
}