#include <iostream>
#include "Empleado.h"
#include "Comercial.h"
using namespace std;

Comercial::Comercial(){
  comision = 0;
}

void Comercial::set_comision(double com){
  comision = com;
}

double Comercial::get_comision(){
  return comision;
}

void Comercial::toString(){
  Empleado::toString();
  cout << "Comision: " << comision << endl;
}

void Comercial::plus(){
  if (edad > 30 && comision > 12)
  {
    salario += 3000;
  }
  
}


