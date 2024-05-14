#include <iostream>
#include "lib7.h"
using namespace std;

int main(int argc, char const *argv[])
{
    CuentaBancaria cuenta1(1594489, 10),cuenta2;
    double transferencia;
    cuenta1.depositar(1000);
    cout << "Saldo 1: " << cuenta1.get_saldo() << endl;
    cuenta1.acreditarInteres();
    cout << "Saldo 1: " << cuenta1.get_saldo() << endl;
    cuenta1.extraer(500);
    cout << "Saldo 1: " << cuenta1.get_saldo() << endl;

    cuenta2.set_numeroCuenta(7561568);
    cuenta2.set_interes(-50);
    cuenta2.depositar(570.43);
    cout << "ingrese el monton a transferir de la cuenta 1 a la cuenta 2: ";
    cin >> transferencia;
    cuenta1.extraer(transferencia);
    cuenta2.depositar(transferencia);
    cuenta2.acreditarInteres();
    cout << "Numero Cuenta 1: " << cuenta1.get_numeroCuenta() << endl;
    cout << "Saldo cuenta 1: " << cuenta1.get_saldo() << endl;
    cout << "Interes cuenta 1: " << cuenta1.get_interes() << endl;
    cout << "Numero Cuenta 2: " << cuenta2.get_numeroCuenta() << endl;
    cout << "Saldo cuenta 2: " << cuenta2.get_saldo() << endl;
    cout << "Interes cuenta 2: " << cuenta2.get_interes() << endl;

    return 0;
}
