#include <iostream>
#include "lib3.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Complejo num1(-61, 2);
    Complejo num2;

    num2.set_real(3);
    num2.set_imaginario(-4);

    num2 + num1;
    cout << "Suma 2 + 1: " << num2.get_real() << " + " << num2.get_imaginario() << "i" << endl; /*funciona igual que un operador suma normal (creo)*/

    Complejo suma = num1 + num2;
    Complejo resta = num1 - num2;
    Complejo producto = num1 * num2;
    Complejo conjugado1 = num1.Conjugado();
    Complejo conjugado2 = num2.Conjugado();

    cout << "Numero 1: " << num1.get_real() << " + " << num1.get_imaginario() << "i" << endl;
    cout << "Numero 2: " << num2.get_real() << " + " << num2.get_imaginario() << "i" << endl;
    cout << "Suma 1 + 2: " << suma.get_real() << " + " << suma.get_imaginario() << "i" << endl;
    cout << "Resta 1 - 2: " << resta.get_real() << " + " << resta.get_imaginario() << "i" << endl;
    cout << "Producto 1 * 2: " << producto.get_real() << " + " << producto.get_imaginario() << "i" << endl;
    cout << "Conjugado 1: " << conjugado1.get_real() << " + " << conjugado1.get_imaginario() << "i" << endl;
    cout << "Conjugado 2: " << conjugado2.get_real() << " + " << conjugado2.get_imaginario() << "i" << endl;
    cout << "Conjugado Producto: " << producto.Conjugado().get_real() << " + " << producto.Conjugado().get_imaginario() << "i" << endl;
    cout << "Conjugado Resta: " << resta.Conjugado().get_real() << " + " << resta.Conjugado().get_imaginario() << "i" << endl;

    return 0;
}
