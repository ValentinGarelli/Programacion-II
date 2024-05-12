#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int tam;
    cout << "ingrese la cantidad de elemetos que tendra el arreglo: ";
    cin >>tam;

    int *datos;
    datos = new int[tam];
    for (int i = 0; i < tam; i++)
    {
        cout << "ingrese el elemento numero: " << i+1 << ": ";
        cin >> datos[i];
    }
    for (int i = 0; i <tam; i++)
    {
        cout <<  datos[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < tam; i++)
    {
        cout << *datos << " ";
        datos++;
    }
    
    

    return 0;
}
