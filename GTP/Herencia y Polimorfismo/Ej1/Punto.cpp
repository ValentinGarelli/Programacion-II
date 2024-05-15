#include "Fig_Geo.h"
#include "Punto.h"

Punto::Punto(double x,double y): Fig_Geo(x,y){
    cord_x = x;
    cord_y = y;
};

double Punto::Area(){
    return 0;
}

double Punto::Perimetro(){
    return 0;
}

