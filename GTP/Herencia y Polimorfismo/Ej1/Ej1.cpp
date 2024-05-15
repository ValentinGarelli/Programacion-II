#include <iostream>
#include "Fig_Geo.h"
#include "Circulo.h"
#include "Punto.h"
#include "Poligono_Reg.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Circulo c1(0,0,5);
    Punto p1(3,7.4);
    Poligono_Reg pol1(4,-1,5,5);
    cout << "Area del circulo: " << c1.Area() << endl;
    cout << "Perimetro del circulo: " << c1.Perimetro() << endl;
    cout << "Area del poligono: " << pol1.Area() << endl;
    cout << "Perimetro del poligono: " << pol1.Perimetro() << endl;
    cout << "Area del punto: " << p1.Area() << endl;
    cout << "Perimetro del punto: " << p1.Perimetro() << endl;
    cout << "Razon del circulo: " << c1.Razon() << endl;
    cout << "Razon del poligono: " << pol1.Razon() << endl;
    cout << "Razon del punto: " << p1.Razon() << endl;
    return 0;
}


