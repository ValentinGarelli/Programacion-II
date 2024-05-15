#include <iostream>
#include "Fig_Geo.h"
#include "Circulo.h"

Circulo::Circulo(double x,double y,double r): Fig_Geo(x,y){
    radio = r;
}

double Circulo::Area(){
    return 2*3.1415*radio*radio;
}

double Circulo::Perimetro(){
    return 2*3.1415*radio;
}