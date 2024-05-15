#include <iostream>
#include "lib11.h"


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
    int pos = 0;
    for (int i = 0; i < numElementos; i++)
    {
        if (elementos[i] != elem)
        {
            aux[pos] = elementos[i];
            pos++;
        }
    }
    numElementos--;
    delete[] elementos;
    elementos = aux;    
}

void Conjunto::mostrar()
{
    for (int i = 0; i < numElementos; i++)
    {
        std::cout << elementos[i] << " ";
    }
    std::cout << std::endl;
}

int Conjunto::getLargo()
{
    return numElementos;
}

int Conjunto::getElemento(int i)
{
    return elementos[i];
}

Conjunto Conjunto::operator+(Conjunto C2)
{
    Conjunto Suma(numElementos + C2.numElementos);
    for (int i = 0; i < numElementos; i++)
    {
        Suma.elementos[i] = elementos[i];
    }
    for (int i = 0; i < C2.numElementos; i++)
    {
        Suma.elementos[numElementos + i] = C2.elementos[i];
    }
    Suma.eliminarRepetidos();
    return Suma;
}

void Conjunto::eliminarRepetidos(){
    int *aux = new int[numElementos];
    bool repetido;
    int j = 0;
    for (int i = 0; i < numElementos; i++)
    {
        repetido = false;
        for (int k = 0; k < i; k++)
        {
            if (elementos[i] == aux[k])
            {
                repetido = true;
            }
        }
        if (repetido == false)
        {
            aux[j] = elementos[i];
            j++;
        }
    }
    
    numElementos = j;
    delete[] elementos;
    elementos = aux;
}

Conjunto Conjunto::operator-(Conjunto C2)
{
    Conjunto Resta(numElementos);
    for (int i = 0; i < numElementos; i++)
    {
        Resta.elementos[i] = elementos[i];
    }
    for (int i = 0; i < C2.numElementos; i++)
    {
        Resta.eliminar(C2.elementos[i]);
    }
    return Resta;
}

Conjunto Conjunto::operator*(Conjunto C2){
    int tam = Interseccion(C2);
    int *aux = new int[tam];
    int pos = 0;
    for (int i = 0; i < numElementos; i++)
    {
        for (int j = 0; j < C2.numElementos; j++)
        {
            if (elementos[i] == C2.elementos[j])
            {
                aux[pos] = elementos[i];
                pos++;
            }
        }
    }
    Conjunto Interseccion(tam,aux);
    return Interseccion;

}

int Conjunto::Interseccion(Conjunto C2){
    int interseccion = 0;
    for (int i = 0; i < numElementos; i++)
    {
        for (int j = 0; j < C2.numElementos; j++)
        {
            if (elementos[i] == C2.elementos[j])
            {
                interseccion++;
            }
        }
    }
    return interseccion;
}



