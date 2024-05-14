#include <iostream>
#include <cmath>
#include <cstdlib>
#include "lib8.h"

Persona::Persona(){};

Persona::Persona(char nom[15],int ed,char s){
    for (int i = 0; i < 15; i++)
    {
        nombre[i] = nom[i];
    }
    edad = ed;
    sexo = s;
    ComprobarSexo(s);
};

Persona::Persona(char nom[15],int ed,char s,double tam,double alt){
    for (int i = 0; i < 15; i++)
    {
        nombre[i] = nom[i];
    }
    edad = ed;
    sexo = s;
    peso = tam;
    altura = alt;
    ComprobarSexo(s);
};

void Persona::SetNombre(char nom[15]){
    for (int i = 0; i < 15; i++)
    {
        nombre[i] = nom[i];
    }
}

void Persona::SetEdad(int ed){
    edad = ed;
};

void Persona::SetSexo(char s){
    sexo = s;
    ComprobarSexo(s);
};

void Persona::SetPeso(double tam){
    peso = tam;
};

void Persona::SetAltura(double alt){
    altura = alt;
};

int Persona::CalcularIMC(){
    int IMC = peso/(pow(altura,2));
    if (IMC < 20)
    {
        return -1;
    }
    else if (IMC >= 20 && IMC <=25)
    {
        return 0;
    }
    else
    {
        return 1;
    }
};

bool Persona::EsMayorDeEdad(){
    if (edad > 18)
    {
        return true;
    }
    else
    {
        return false;
    }
};

void Persona::ComprobarSexo(char s){
    if (s == 'm' || s == 'M')
    {
        sexo = s;
    }
    else
    {
        sexo = 'H';
    }
};

void Persona::GenerarDNI(){
    dni = rand() % 10000000 + 40000000;
};

char* Persona::GetNombre(){
    return nombre;
};

int Persona::GetEdad(){
    return edad;
};

int Persona::GetDni(){
    return dni;
};

char Persona::GetSexo(){
    return sexo;
};

double Persona::GetPeso(){
    return peso;
};

double Persona::GetAltura(){
    return altura;
};


