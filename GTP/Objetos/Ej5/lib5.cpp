#include <iostream>
#include <cmath>
#include "lib5.h"

Cordenadas::Cordenadas()
{
    x = 0;
    y = 0;
}

Cordenadas::Cordenadas(double i, double j)
{
    x = i;
    y = j;
}

void Cordenadas::set_X(double i)
{
    x = i;
}

void Cordenadas::set_Y(double j)
{
    y = j;
}

double Cordenadas::get_X()
{
    return x;
}

double Cordenadas::get_Y()
{
    return y;
}

Cordenadas Cordenadas::operator++(int)
{
    x++;
    y++;
    return *this;
}

Cordenadas Cordenadas::operator--(int)
{
    x--;
    y--;
    return *this;
}

Cordenadas Cordenadas::operator+(Cordenadas C2)
{
    Cordenadas Suma;
    Suma.x = x + C2.x;
    Suma.y = y + C2.y;
    return Suma;
}

Cordenadas Cordenadas::operator+(int num)
{
    Cordenadas Suma;
    Suma.x = x + num;
    Suma.y = y + num;
    return Suma;
}

Cordenadas Cordenadas::operator-(Cordenadas C2)
{
    Cordenadas Resta;
    Resta.x = x - C2.x;
    Resta.y = y - C2.y;
    return Resta;
}

Cordenadas Cordenadas::operator-(int num)
{
    Cordenadas Resta;
    Resta.x = x - num;
    Resta.y = y - num;
    return Resta;
}

void Cordenadas::PasarPolar(double &magnitud,double &angulo){
    double suma = x*x + y*y;
    double division =  y/x;
    magnitud = sqrt(suma);
    angulo = atan(division)*180/3.1415;

}

Cordenadas Cordenadas::PasarCartesiano(double magnitud,double angulo){
    angulo = angulo/180*3.1415;
    x = cos(angulo) * magnitud;
    y = sin(angulo) * magnitud;
    return *this;
}