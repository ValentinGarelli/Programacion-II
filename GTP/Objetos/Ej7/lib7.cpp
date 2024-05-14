#include <iostream>
#include "lib7.h"

void CuentaBancaria::ControlInteres(){
    if(interes < 0){
        interes = interes * -1;
    }

    
}

CuentaBancaria::CuentaBancaria(){
    numeroCuenta = 0;
    saldo = 0;
    interes = 0;
}

CuentaBancaria::CuentaBancaria(int num,double inter){
    numeroCuenta = num;
    interes = inter;
    saldo = 0;
}

void CuentaBancaria::set_numeroCuenta(int num){
    numeroCuenta = num;
}

void CuentaBancaria::set_saldo(double sal){
    saldo = sal;
}

void CuentaBancaria::set_interes(double inter){
    interes = inter;
    ControlInteres();
}

int CuentaBancaria::get_numeroCuenta(){
    return numeroCuenta;
}

double CuentaBancaria::get_saldo(){
    return saldo;
}

double CuentaBancaria::get_interes(){
    return interes;
}

void CuentaBancaria::depositar(double monto){
    saldo += monto;
}

void CuentaBancaria::extraer(double monto){
    saldo -= monto;
}

void CuentaBancaria::acreditarInteres(){
    saldo += saldo * (interes/100 + 1);
}
