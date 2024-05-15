#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
using namespace std;

class Empleado{

    protected:
    string nombre;
    int edad;
    double salario;

    public:
    Empleado();
    void set_nombre(string nom);
    void set_edad(int ed);
    void set_salario(double paga);
    string get_nombre();
    int get_edad();
    double get_salario();
    virtual void toString();
    virtual void plus() = 0;

};

#endif
