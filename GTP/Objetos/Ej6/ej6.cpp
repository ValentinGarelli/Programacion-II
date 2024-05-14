#include <iostream>
#include "lib6.h"
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    Password p1;
    p1.generarPassword();
    cout << "La contraseña es: " << p1.getContrasena() << endl;
    cout << "La longitud de la contraseña es: " << p1.getLongitud() << endl;
    if (p1.esFuerte())
    {
        cout << "La contraseña es fuerte" << endl;
    }
    else
    {
        cout << "La contraseña no es fuerte" << endl;
    }
    Password p2(20);
    p2.generarPassword();
    cout << "La contraseña es: " << p2.getContrasena() << endl;
    cout << "La longitud de la contraseña es: " << p2.getLongitud() << endl;
    if (p2.esFuerte())
    {
        cout << "La contraseña es fuerte" << endl;
    }
    else
    {
        cout << "La contraseña no es fuerte" << endl;
    }

    
    return 0;
}
