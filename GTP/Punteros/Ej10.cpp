#include <iostream>
#include <cstdlib>
#include <time.h>
#include <utility>
using namespace std;

void GenerarNumeros(int *datos,int cant){
    srand(time(0));
    for (size_t i = 0; i < cant; i++)
    {
        datos[i] = rand() % 101;
    }
    
}
void OrdenarMayorMenor(int *datos,int cant){
    bool cambio;
    for (int i = 0; i < cant-1; i++)
    {
        cambio = false;
        for (int j = 0; j < cant-i-1; j++)
        {
            if (datos[j]<datos[j+1])
            {
                swap(datos[j],datos[j+1]);
                cambio = true;
            }
            
            
        }
        if (cambio == false)
        {
            break;
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int cant;
    cout << "ingrese la cantidad de numeros que desea generar: ";
    cin >> cant;
    
    int *datos = new int[cant];
    GenerarNumeros(datos,cant);
    OrdenarMayorMenor(datos,cant);
    for (int i = 0; i < cant; i++)
    {
        cout << datos[i] << endl;
    }
    
    
    return 0;
}
