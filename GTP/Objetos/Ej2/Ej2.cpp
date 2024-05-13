#include <iostream>
#include "lib2.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Racional numero1,numero2(7,2);
    numero1.set_numerador(0);
    numero1.set_denominador(0);
    cout << "Numerador1: " << numero1.get_numerador() << endl;
    cout << "Denominador1: " << numero1.get_denominador() << endl;

    numero2++;
    cout << "Numerador2: " << numero2.get_numerador() << endl;
    cout << "Denominador2: " << numero2.get_denominador() << endl;
    
    numero2-=14;
    cout << "Numerador2: " << numero2.get_numerador() << endl;
    cout << "Denominador2: " << numero2.get_denominador() << endl;

    
    numero1.set_numerador(15);
    numero1.set_denominador(45);
    numero1.Simplificar();
    numero2.set_numerador(35);
    numero2.set_denominador(25);
    numero2.Simplificar();
    cout << "Numerador1: " << numero1.get_numerador() << endl;
    cout << "Denominador1: " << numero1.get_denominador() << endl;
    cout << "Numerador2: " << numero2.get_numerador() << endl;
    cout << "Denominador2: " << numero2.get_denominador() << endl;

    return 0;
}

