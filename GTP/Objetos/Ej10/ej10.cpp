#include <iostream>
#include "lib10.h"
using namespace std;

void Mostrar(Matriz M){
    for (int i = 0; i < M.getFilas(); i++)
    {
        for (int j = 0; j < M.getColumnas(); j++)
        {
            cout << M(i,j) << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    Matriz M1(2,3),M2(3,2),M3(2,2),M4(2,2);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            M1(i,j,i+j);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            M2(i,j,i-j*4);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            M3(i,j,i+j);
            M4(i,j,1);
        }
    }
    Matriz suma = M3+M4;
    Matriz mult = M1*M2;

    cout << "Matriz M1" << endl;
    Mostrar(M1);
    cout << "Matriz M2" << endl;
    Mostrar(M2);
    cout << "Matriz M3" << endl;
    Mostrar(M3);
    cout << "Matriz M4" << endl;
    Mostrar(M4);
    cout << "Matriz Suma" << endl;
    Mostrar(suma);
    cout << "Matriz Multiplicacion" << endl;
    Mostrar(mult);
    cout << "Diaonal de la matriz M3: " << endl;
    for (int i = 0; i < M3.getFilas(); i++)
    {
        cout << M3[i] << " ";
    }

    return 0;
}

