#include "Fig_Geo.h"
#include "Poligono_Reg.h"
#include <cmath>

Poligono_Reg::Poligono_Reg(int x,int y,int cantL,double tamL): Fig_Geo(x,y) {
    cord_x = x;
    cord_y = y;
    cantLados = cantL;
    tamLados = tamL;
}

double Poligono_Reg::Area(){
    double A;
    A = cantLados * (pow(tamLados,2)/4) * tan((3.1415/2)*((cantLados-2)/cantLados));
    return A;
}

double Poligono_Reg::Perimetro(){
    return cantLados * tamLados;
}