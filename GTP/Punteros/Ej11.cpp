#include <iostream>
using namespace std;


void CargarDatos(float *datos,int tam){
    for (int i = 0; i < tam; i++)
    {
        cin >> datos[i];
    }
    
}
float Maximo(float *datos,int tam){
    float max = datos[0];
    for (int i = 0; i < tam; i++)
    {
        if (datos[i] > max)
        {
            max = datos[i];
        }
    }
    return max;
}
float Minimo(float *datos,int tam){
    float min = datos[0];
    for (int i = 0; i < tam; i++)
    {
        if (datos[i] < min)
        {
            min = datos[i];
        }
    }
    return min;
}
float Media(float *datos,int tam){
    float suma = 0;
    for (int i = 0; i < tam; i++)
    {
        suma += datos[i];
    }
    return suma/tam;
}

int main(int argc, char const *argv[])
{
    int tam;
   
    cout << "ingrese la cantidad de datos que quiere cargar: ",
    cin >> tam;
    
    float *datos = new float[tam];
    cout << "ingrese " << tam << " datos presionando enter entre cada uno: " << endl;
    CargarDatos(datos,tam);
    cout << "El maximo es: " << Maximo(datos,tam) << endl;
    cout << "El minimo es: " << Minimo(datos,tam) << endl;
    cout << "La media es: " << Media(datos,tam) << endl;

    return 0;
}
