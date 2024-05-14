#include <iostream>
#include "lib6.h"
#include <ctime>
#include <cstdlib>
using namespace std;


Password::Password()
{
    longitud = 8;
    contrasena = new char[longitud];
}

Password::Password(int largo)
{
    longitud = largo;
    contrasena = new char[longitud];
}

void Password::generarPassword()
{
    srand(time(0));
    for (int i = 0; i < longitud; i++)
    {
        contrasena[i] =  + rand() % 126 + 33;
    }
}

bool Password::esFuerte(){
    int mayusculas = 0, minusculas = 0, numeros = 0;

    for (int i = 0; i < longitud; i++)
    {
        if (contrasena[i] >= 65 && contrasena[i] <= 90 )
        {
            mayusculas++;
        }
        else if (contrasena[i] >= 97 && contrasena[i] <= 122)
        {
            minusculas++;
        }
        else
        {
            numeros++;
        }
    }
    if (mayusculas > 2 && minusculas > 1 && numeros > 5)
    {
        return true;
    }
    else
    {
        return false;
    }
};

char* Password::getContrasena()
{
    return contrasena;
}

int Password::getLongitud()
{
    return longitud;
}

void Password::setLongitud(int largo)
{
    longitud = largo;
}



