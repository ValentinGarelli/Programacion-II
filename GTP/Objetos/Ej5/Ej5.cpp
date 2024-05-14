#include <iostream>
#include "lib5.h"
using namespace std;

int main()
{
    Cordenadas C1(1.7, 12);
    Cordenadas C2(3.5, 4.2);
    Cordenadas C3;
    double magnitud1, angulo1, magnitud2, angulo2;
    C3.set_X(24);
    C3.set_Y(0);

    cout << "C1: (" << C1.get_X() << ", " << C1.get_Y() << ")" << endl;
    cout << "C2: (" << C2.get_X() << ", " << C2.get_Y() << ")" << endl;
    cout << "C3: (" << C3.get_X() << ", " << C3.get_Y() << ")" << endl;

    Cordenadas Suma = C1 + C2;
    Cordenadas Resta = Suma - C3;
    C1++;
    C2-8;
    C3--;

    Resta.PasarPolar(magnitud1, angulo1);
    angulo2 = 149.6;
    magnitud2 = 5.3;
    Cordenadas C4;
    C4 = C4.PasarCartesiano(magnitud2, angulo2);

    cout << "despues de las operaciones:" << endl;
    cout << "C1: (" << C1.get_X() << ", " << C1.get_Y() << ")" << endl;
    cout << "C2: (" << C2.get_X() << ", " << C2.get_Y() << ")" << endl;
    cout << "C3: (" << C3.get_X() << ", " << C3.get_Y() << ")" << endl;
    cout << "Suma: (" << Suma.get_X() << ", " << Suma.get_Y() << ")" << endl;
    cout << "Resta: (" << Resta.get_X() << ", " << Resta.get_Y() << ")" << endl;
    cout << "C4: (" << C4.get_X() << ", " << C4.get_Y() << ")" << endl;
    cout << "Resta en polar:" << endl << "Magnitud: " << magnitud1 << endl <<"Angulo: " << angulo1 << endl;


    return 0;
}
