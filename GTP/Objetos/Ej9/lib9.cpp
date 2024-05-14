#include <iostream>
#include "lib9.h"

Arreglo::Arreglo(){
    longitud = 0;
    datos = new int[0];
    datos[0] = 0;
};

Arreglo::Arreglo(int l){
    if (l < 0)
    {
        l = l*-1;
    }
    
    longitud = l;
    datos = new int[l];
    for (int i = 0; i < l; i++)
    {
        datos[i] = 0;
    }
};

Arreglo Arreglo::operator+(Arreglo A2){
    Arreglo M,Aux;
    Aux.datos = datos;
    M = mayor(Aux,A2);
    for (int i = 0; i < M.longitud; i++)
    {
        Aux.datos[i] = datos[i] + A2.datos[i];
    }
    return Aux;
    
};

Arreglo Arreglo::operator-(Arreglo A2){
    Arreglo M,Aux;
    Aux.datos = datos;
    M = mayor(Aux,A2);
    for (int i = 0; i < M.longitud; i++)
    {
        Aux.datos[i] = datos[i] - A2.datos[i];
    }
    return Aux;
};

int Arreglo::operator*(Arreglo A2){
    int resultado = 0;
    Arreglo M,Aux;
    Aux.datos = datos;
    M = mayor(Aux,A2);
    for (int i = 0; i < M.longitud; i++)
    {
        resultado = resultado + datos[i]*A2.datos[i];
    }
    return resultado;
};

int Arreglo::operator[](int i){
    
    return datos[i];
};

Arreglo Arreglo::mayor(Arreglo A1,Arreglo A2){
    if (A1.longitud >= A2.longitud)
    {
        return A1;
    }
    else
    {
        return A2;
    }
};

Arreglo Arreglo::menor(Arreglo A1, Arreglo A2){
    if (A1.longitud <= A2.longitud)
    {
        return A1;
    }
    else
    {
        return A2;
    }
};

Arreglo Arreglo::operator()(int i,int j){
    if (i > longitud)
    {
        longitud = i;
    }
    datos[i] = j;
    return *this;  
};

int Arreglo::getLongitud(){
    return longitud;
};

void Arreglo::setLongitud(int l){
    if (l < 0)
    {
        l = l*-1;
    }
    longitud = l;
    datos = new int[l];
    for (int i = 0; i < l; i++)
    {
        datos[i] = 0;
    }
};
