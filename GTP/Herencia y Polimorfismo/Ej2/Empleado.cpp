#include <iostream>
#include "Empleado.h"
using namespace std;

Empleado::Empleado(){
    nombre = "";
    edad = 0;
    salario = 0;
}

void Empleado::set_nombre(string nom){
    nombre = nom;
}

void Empleado::set_edad(int ed){
    edad = ed;
}

void Empleado::set_salario(double paga){
    salario = paga;
}

string Empleado::get_nombre(){
    return nombre;
}

int Empleado::get_edad(){
    return edad;
}

double Empleado::get_salario(){
    return salario;
}

void Empleado::toString(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Salario: " << salario << endl;
}

