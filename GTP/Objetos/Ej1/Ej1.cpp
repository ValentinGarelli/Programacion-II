#include <iostream>
#include "lib1.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Fecha f1,f2(26,3,2001);

    cout << "Fecha 1: " << f1.get_dia() << "/" << f1.get_mes() << "/" << f1.get_anio() << endl;
    cout << "Fecha 2: " << f2.get_dia() << "/" << f2.get_mes() << "/" << f2.get_anio() << endl;
    
    f1++;
    f2+ 35;

    for (int i = 0; i < 32; i++)
    {
        f1--;
    }
    f2.set_dia(28);
    f2.set_mes(2);
    f2.set_anio(1913);
    f1.set_anio(2020);
    f1.set_dia(20);
    f1.set_mes(7);
    f1-470;
    cout << "Fecha 1: " << f1.get_dia() << "/" << f1.get_mes() << "/" << f1.get_anio() << endl;
    cout << "Fecha 2: " << f2.get_dia() << "/" << f2.get_mes() << "/" << f2.get_anio() << endl;
    return 0;
}
