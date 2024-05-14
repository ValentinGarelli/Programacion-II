#include <iostream>
#include "lib11.h"


Conjunto::Conjunto()
{
    numElementos = 0;
    elementos = new int[numElementos];
}

Conjunto::Conjunto(int n)
{
    numElementos = n;
    elementos = new int[numElementos];
}

Conjunto::Conjunto(int n, int *elem)
{
    numElementos = n;
    elementos = new int[numElementos];
    for (int i = 0; i < numElementos; i++)
    {
        elementos[i] = elem[i];
    }
}

void Conjunto::agregar(int elem)
{
    int *aux = new int[numElementos + 1];
    for (int i = 0; i < numElementos; i++)
    {
        aux[i] = elementos[i];
    }
    aux[numElementos] = elem;
    numElementos++;
    delete[] elementos;
    elementos = aux;
}

void Conjunto::eliminar(int elem){
    int *aux = new int[numElementos - 1];
    for (int i = 0; i < numElementos; i++)
    {
        if (elementos[i] != elem)
        {
            aux[i] = elementos[i];
        }
    }
    numElementos--;
    delete[] elementos;
    elementos = aux;    
}