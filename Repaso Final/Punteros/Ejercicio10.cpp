#include <iostream>
using namespace std;

void CantidadNumeros(int *numeros){
  do
  {
    cin >> *numeros;
  } while (*numeros <= 0);
  
};

void GenerarDatos(int *datos[],int *tam){
  for (int i = 0; i < *tam; i++)
  {
    cout << "entro al for de generar datos interaccion numero:" << i << endl; 
    *datos[i] = rand()% 100 + 1;
  }
};

void OrdenarDatos(int *datos[],int *tam){
  bool cambio;
  for (int i = 0; i < *tam; i++)
  {
    cambio = false;
    for (int j = i; j < *tam-i-1; j++)
    {
      if (datos[j]<datos[j+1])
      {
        swap(datos[j],datos[j+1]);
        cambio = true;
      }
      if (!cambio)
      {
        break;
      }
    }
  }
};


int main()
{
  int n,*datos;

  cout << "Ingrese la cantidad de numeros (debe ser mayor a 0): ";
  CantidadNumeros(&n);
  datos = new int [n];
  GenerarDatos(&datos,&n);
  cout << "los numeros son: ";
  for (int i = 0; i < n; i++)
  {
    cout << datos[i] << "\n";
  }
  

  system("pause");
  return 0;
}
