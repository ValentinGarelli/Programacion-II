#include <iostream>
#include "Repartidor.h"
#include "Empleado.h"

Repartidor::Repartidor(){
  zona = 0;
}

void Repartidor::set_zona(int zon){
  zona = zon;
}

int Repartidor::get_zona(){
  return zona;
}

void Repartidor::toString(){
  Empleado::toString();
  cout << "Zona: " << zona << endl;
}

void Repartidor::plus(){
  if (edad < 25 && zona == 3)
  {
    salario += 3000;
  }
}