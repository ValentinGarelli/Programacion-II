#include <iostream>
#include "lib4.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Cronometro reloj;

    cout << "Hora: " << reloj.get_hora() << endl;
    cout << "Minuto: " << reloj.get_minuto() << endl;
    cout << "Segundo: " << reloj.get_segundo() << endl;

    reloj.set_hora(13);
    reloj.set_minuto(45);
    reloj.set_segundo(30);

    cout << "Hora: " << reloj.get_hora() << endl;
    cout << "Minuto: " << reloj.get_minuto() << endl;
    cout << "Segundo: " << reloj.get_segundo() << endl;

    reloj.reset();

    cout << "Hora: " << reloj.get_hora() << endl;
    cout << "Minuto: " << reloj.get_minuto() << endl;
    cout << "Segundo: " << reloj.get_segundo() << endl;

    reloj.set_minuto(59);
    while (reloj.get_hora() < 1)
    {
        reloj++;
        cout << "Hora: " << reloj.get_hora() << endl;
        cout << "Minuto: " << reloj.get_minuto() << endl;
        cout << "Segundo: " << reloj.get_segundo() << endl;
    }
    cout << "Hora: " << reloj.get_hora() << endl;
    cout << "Minuto: " << reloj.get_minuto() << endl;
    cout << "Segundo: " << reloj.get_segundo() << endl;

    return 0;
}
