#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int **punteroDatos,columnas,filas;
    filas = 0;
    cout << "ingrese la cantidad de filas: ";
    cin >> filas;
    cout << "ingrese la cantidad de columnas: ";
    cin >> columnas;

    punteroDatos = new int *[filas];
    for (int i = 0; i < filas; i++)
    {
        punteroDatos[i] = new int[columnas];
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "ingrese el elemento: [" <<i<<"]"<<"["<<j<<"]";
            cin >> punteroDatos[i][j];
        }
        
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "["<<punteroDatos[i][j]<<"] ";
           
        }
        cout << endl;
    }
    
    for (int i = 0; i < filas; i++)
    {
        delete [] punteroDatos[i];
    }
    delete [] punteroDatos;
    
    

    return 0;
}
