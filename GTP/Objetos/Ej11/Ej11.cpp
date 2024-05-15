#include <iostream>
#include "lib11.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Conjunto C1(20),C2(1),C3(1),C4(15),Suma(1),Resta(1),Interseccion(1);
    for (int i = 0; i < C1.getLargo(); i++)
    {
        C1.agregar(i);
    }
    for (int i = 0; i < 20; i++)
    {
        C2.agregar(i+10);
    }
    C1.mostrar();
    C2.mostrar();
    Suma = C1 + C2;
    Suma.mostrar();

    for (int i = 0; i < 15; i++)
    {
        C4.agregar(i*5);
    }
    for (int i = 0; i < 30; i++)
    {
        C3.agregar(i*2);
    }
    C3.mostrar();
    C4.mostrar();
    Resta = C3 - C4;
    Resta.mostrar();
    Interseccion = C3 * C4;
    Interseccion.mostrar();
    Interseccion.eliminar(10);
    Interseccion.mostrar();
    Interseccion = C1 * C2;
    
    return 0;
}
