#include <iostream>
#include "libEj1.h"

Cuenta::Cuenta(std::string nom){
    titular = nom;
}

void Cuenta:: set_titular(std::string nombre){
    titular = nombre;
}

void Cuenta:: set_cantidad(double valor){
    cantidad = valor;
}

std::string Cuenta:: get_titular(){
    return titular;
}

double Cuenta:: get_cantidad(){
    return cantidad;
}

void Cuenta:: ingresar(double num){
    if (num > 0)
    {
        cantidad = cantidad + num;
    }
    
    
}

void Cuenta:: retirar(double num){
    cantidad = cantidad - num;
    if (cantidad < 0)
    {
        cantidad = 0;
    }
    

}