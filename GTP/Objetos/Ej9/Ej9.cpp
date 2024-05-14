#include <iostream>
#include "lib9.h"
using namespace std;

void Mostrar(Arreglo A){
    for (int i = 0; i < A.getLongitud(); i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    Arreglo A1(10),A2,suma,resta;
    int producto,x;
    
    for (int i = 0; i < 10; i++)
    {
        A1(i,i*3);
    }
    

    for (int i = 0; i < 5; i++)
    {
        x = A1[5]*A1[6];
        A2(i,x);
        
    }

    
    suma = A1 + A2;
    resta = A1 - A2;
    producto = A1 * A2;

    cout << "Arreglo A1: ";
    Mostrar(A1);
    cout << "Arreglo A2: ";
    Mostrar(A2);
    cout << "Arreglo suma: ";
    Mostrar(suma);
    cout << "Arreglo resta: ";
    Mostrar(resta);
    cout << "Producto escalar: " << producto << endl;
    
    return 0;
}

