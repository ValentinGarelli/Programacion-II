#include <iostream>
#include <cmath>
#include <cstdlib>
#include "libEj2.h"

void PedirDatos(std::string &nom,int &edad,char &sexo,float &peso,float &altura){
    
    std::cout << "Ingrese el nombre, la edad, el sexo (H para hombre y M para mujer), el peso y la altura de una persona en ese orden porfavor: ";
    std::cin >> nom >> edad >> sexo >> peso >> altura;

};
void CalcularImc(Persona P){
    switch (P.CalcularIMC())
    {
    case -1:
        std::cout << "la persona esta por debajo de su peso ideal" << std::endl;
        break;
    case 0:
        std::cout << "la persona esta en su peso ideal" << std::endl;
        break;
    case 1:
        std::cout << "la persona esta encima de su peso ideal" << std::endl;
        break;
    default:
        break;
    }
};
void EsMayor(Persona P){
    if (P.EsMayorDeEdad())
    {
        std::cout << "la persona es mayor de edad" << std::endl;
    }
    else
    {
        std::cout << "la persona es menor de edad" << std::endl;
    }
};
void MostrarDatos(Persona P){
    std::cout << "Nombre: " << P.GetNombre() << std::endl;
    std::cout << "Edad: " << P.GetEdad() << std::endl;
    std::cout << "Sexo: " << P.GetSexo() << std::endl;
    std::cout << "Dni: " << P.GetDni() << std::endl;
    std::cout << "Peso: " << P.GetPeso() << std::endl;
    std::cout << "Altura: " << P.GetAltura() << std::endl;
    };

int main()
{
    std::string nom;
    int edad;
    char sexo;
    float peso,altura;
    srand((unsigned) time(NULL));

    PedirDatos(nom,edad,sexo,peso,altura);
    Persona P1(nom,edad,sexo,peso,altura);
    P1.GenerarDNI();
    CalcularImc(P1);
    EsMayor(P1);
    MostrarDatos(P1);

    PedirDatos(nom,edad,sexo,peso,altura);
    Persona P2(nom,edad,sexo,peso,altura);
    P2.GenerarDNI();
    CalcularImc(P2);
    EsMayor(P2);
    MostrarDatos(P2);

    PedirDatos(nom,edad,sexo,peso,altura);
    Persona P3(nom,edad,sexo,peso,altura);
    P3.GenerarDNI();
    CalcularImc(P3);
    EsMayor(P3);
    MostrarDatos(P3);

    return 0;
}
