#include <iostream>
#include "lib2.h"


Racional::Racional(){
    numerador = 1;
    denominador = 1;
};

Racional::Racional(int num,int den){
    numerador = num;
    denominador = den;
    Control();
}; 

void Racional::set_numerador(int num){
    numerador = num;
};

void Racional::set_denominador(int den){
    denominador = den;
    Control();

};

int Racional::get_denominador(){
    return denominador;
}

int Racional::get_numerador(){
    return numerador;
};

Racional Racional::operator+(Racional sumando2){
    Racional sumando1(numerador,denominador);
    Racional suma;
   
    Igual(sumando2);
    suma.denominador =  sumando1.denominador;
    suma.numerador = sumando1.numerador + sumando2.numerador;
    return suma;
};

Racional Racional::operator-(Racional sustraendo){
    Racional minuendo(numerador,denominador);
    Racional resta;
    
    Igual(sustraendo);
    resta.denominador = minuendo.denominador;
    resta.numerador = minuendo.numerador - sustraendo.numerador;
    return resta;
};

Racional Racional::operator++(int){
    numerador = numerador + denominador;
    return *this;
};
Racional Racional::operator--(int){
    numerador = numerador - denominador;
    return *this;
};
Racional Racional::operator+=(int entero){
    numerador = numerador + (entero*denominador);
    return *this;
};
Racional Racional::operator-=(int entero){
    numerador = numerador - (entero*denominador);
    return *this;
};
Racional Racional::Simplificar(){
    int i;
    Control();
    
    if (denominador > numerador)
    {
        i = numerador;
    }
    else
    {
        i = denominador;
    }
    while (i > 1)
    {
        if ((numerador % i) == 0 && (denominador % i)== 0)
        {
            numerador = numerador / i;
            denominador = denominador /i;
        }
        else
        {
            i--;
        }
    }
    return *this;
};

void Racional::Igual(Racional &R2){
    int diff;

    if (denominador < R2.denominador)
    {
        diff = R2.denominador-denominador;
        if ((diff%denominador) == 0)
        {
            denominador = denominador *(R2.denominador/denominador);
            numerador = numerador* (R2.denominador/denominador);
        }
        else
        {
            denominador = denominador *R2.denominador;
            numerador = numerador * R2.denominador;
            R2.denominador = R2.denominador * denominador;
            R2.numerador = R2.numerador * denominador;
        }
    }
    else
    {
        diff = denominador-R2.denominador;
        if ((diff%R2.denominador) == 0)
        {
            R2.denominador = R2.denominador *(denominador/R2.denominador);
            R2.numerador = R2.numerador* (denominador/R2.denominador);
        }
        else
        {
            denominador = denominador *R2.denominador;
            numerador = numerador * R2.denominador;
            R2.denominador = R2.denominador * denominador;
            R2.numerador = R2.numerador * denominador;
        }
    }    
}

void Racional::Control(){
    if (denominador == 0)
    {
        denominador = 1;
    }
    if (numerador < 0 && denominador < 0)
    {
        numerador = numerador * -1;
        denominador = denominador * -1;
    }

    
}
