#include <iostream>
#include "lib1.h"

    Fecha::Fecha(int D,int M,int A){
        dia = D;
        mes = M;
        anio = A;
    };

    Fecha::Fecha(){
        dia = 1;
        mes = 1;
        anio = 1990;
    };

    void Fecha::set_dia(int D){
        Fecha::dia = D;
    };

    void Fecha::set_mes(int M){
        Fecha::mes = M;
    };

    void Fecha::set_anio(int A){
        Fecha::anio = A;
    };

    int Fecha::get_dia(){
        return dia;
    };

    int Fecha::get_mes(){
        return mes;
    };

    int Fecha::get_anio(){
        return anio;
    };

    Fecha Fecha::operator++(int){
        dia++;
        if (dia > 30)
        {
            dia = 1;
            mes++;
            if (mes > 12)
            {
                mes = 1;
                anio++;
            }
        }
        return *this;
    };
    Fecha Fecha::operator--(int){
        dia--;
        if (dia <1)
        {
            dia = 30;
            mes--;
            if (mes < 1)
            {
                mes = 12;
                anio --;
            }
        }
        return *this;
    };
    
    Fecha Fecha::operator+(const int D){
        dia = dia + D;
        if (dia > 30)
        {
            mes = mes + (dia/30);
            do
            {
                dia = dia - 30;
            } while (dia > 30);
            if (mes > 12)
            {
                mes = mes-12;
                anio = anio +(mes/12);
            }
        }
        return *this;
    }

    Fecha Fecha::operator-(const int D){
        dia = dia - D;
        if (dia < 1)
        {
            mes = mes + (dia/30)-1;
            
            do
            {
                dia = dia + 30;
            } while (dia <1);
            
            
            if (mes < 1)
            {
                anio = anio +(mes/12)-1;
                mes = mes + 12;
            }
        }
        return *this;
    }