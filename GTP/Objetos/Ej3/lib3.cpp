#include <iostream>
#include "lib3.h"

Complejo::Complejo(){};

Complejo::Complejo(double r, double i)
{
    real = r;
    imaginario = i;
}

void Complejo::set_real(double r)
{
    real = r;
}

void Complejo::set_imaginario(double i)
{
    imaginario = i;
}

double Complejo::get_real()
{
    return real;
}

double Complejo::get_imaginario()
{
    return imaginario;
}

Complejo Complejo::operator+(Complejo sumando2){
    Complejo Suma;
    Suma.real = real + sumando2.real;
    Suma.imaginario = imaginario + sumando2.imaginario;
    return Suma;
};

Complejo Complejo::operator-(Complejo sustraendo){
    Complejo Resta;
    Resta.real = real - sustraendo.real;
    Resta.imaginario = imaginario - sustraendo.imaginario;
    return Resta;
};

Complejo Complejo::operator*(Complejo multiplicador){
    Complejo Producto;
    Producto.real = real * multiplicador.real - imaginario * multiplicador.imaginario;
    Producto.imaginario = real * multiplicador.imaginario + imaginario * multiplicador.real;
    return Producto;

};
Complejo Complejo::Conjugado(){
    Complejo Conju;
    Conju.real = real;
    Conju.imaginario = imaginario * -1;
    return Conju;
};
