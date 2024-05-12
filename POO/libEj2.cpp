#include <iostream>
#include <cmath>
#include <cstdlib>
#include "libEj2.h"

    Persona::Persona(){};
    
    Persona::Persona(std::string nom,int ed,char s){
        nombre = nom;
        edad = ed;
        sexo = s;
    };

    Persona::Persona(std::string nom,int ed,char s,float tam,float alt){
        nombre = nom;
        edad = ed;
        sexo = s;
        peso = tam;
        altura = alt;
    };

    void Persona::SetNombre(std::string nom){
        nombre = nom;
    }

    void Persona::SetEdad(int ed){
        edad = ed;
    };

    void Persona::SetSexo(char s){
        sexo = s;
    };

    void Persona::SetPeso(float tam){
        peso = tam;
    };

    void Persona::SetAltura(float alt){
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
        if (s != sexo)
        {
            sexo = 'H';
        }
        
    };

    void Persona::GenerarDNI(){
        dni = rand();
    };

    std::string Persona::GetNombre(){
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
    float Persona::GetPeso(){
        return peso;
    };
    float Persona::GetAltura(){
        return altura;
    };  