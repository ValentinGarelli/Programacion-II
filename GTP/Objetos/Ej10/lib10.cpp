#include <iostream>
#include "lib10.h"

Matriz::Matriz(int f, int c){
    if (f < 0){
        f = f*-1;
    }
    if (c < 0){
        c = c*-1;
    }
    filas = f;
    columnas = c;
    matriz = new int*[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }
};

Matriz Matriz::operator+(Matriz M2){
    Matriz Suma(filas,columnas);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            Suma.matriz[i][j] = matriz[i][j] + M2.matriz[i][j];
        }
    }
    return Suma;
};

Matriz Matriz::operator-(Matriz M2){
    Matriz Resta(filas,columnas);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            Resta.matriz[i][j] = matriz[i][j] - M2.matriz[i][j];
        }
    }
    return Resta;
};

Matriz Matriz::operator*(Matriz M2){
    Matriz Multiplicacion(filas,M2.columnas);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < M2.columnas; j++)
        {
            for (int k = 0; k < columnas; k++)
            {
                Multiplicacion.matriz[i][j] = matriz[i][k] * M2.matriz[k][j];
            }
        }
    }
    return Multiplicacion;
};

int Matriz::operator[](int d){
    if (d > filas || d > columnas)
    {
        return 0;
    }
    
    return matriz[d][d];
};
int Matriz::operator()(int i, int j){
    if (i > filas || j > columnas)
    {
        return 0;
    }
    
    return matriz[i][j];
};

Matriz Matriz::operator()(int i, int j, int v){
    if (i > filas)
    {
        filas = i;
    }
    if (j > columnas)
    {
        columnas = j;
    }
    matriz[i][j] = v;
    return *this;
};

int Matriz::getFilas(){
    return filas;
};

int Matriz::getColumnas(){
    return columnas;
};