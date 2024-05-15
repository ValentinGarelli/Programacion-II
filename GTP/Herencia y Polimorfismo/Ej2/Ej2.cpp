#include <iostream>
#include "Empleado.h"
#include "Comercial.h"
#include "Repartidor.h"
using namespace std;

int main()
{
  Comercial C1;
  Repartidor R1;

  C1.set_nombre("Goku");
  C1.set_edad(35);
  C1.set_salario(2000);
  C1.set_comision(15);
  R1.set_nombre("Vegeta");
  R1.set_edad(25);
  R1.set_salario(1500);
  R1.set_zona(3);

  C1.toString();
  C1.plus();

  R1.toString();
  R1.plus();

  cout << "Salario de " << C1.get_nombre() << ": " << C1.get_salario() << " despues del plus"<<endl;
  cout << "Salario de " << R1.get_nombre() << ": " << R1.get_salario() << " despues del plus"<<endl;


  return 0;
}
