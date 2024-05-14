#include <iostream>
#include "lib4.h"

Cronometro::Cronometro(){
    horas = 0;
    minutos = 0;
    segundos = 0;
};

void Cronometro::set_hora(int hr){
    horas = hr;
};

void Cronometro::set_minuto(int min){
    minutos = min;
};

void Cronometro::set_segundo(int seg){
    segundos = seg;
};

int Cronometro::get_hora(){
    return horas;
};

int Cronometro::get_minuto(){
    return minutos;
};

int Cronometro::get_segundo(){
    return segundos;
};

void Cronometro::reset(){
    horas = 0;
    minutos = 0;
    segundos = 0;
};

void Cronometro::operator++(int){
    segundos++;
    if (segundos > 59)
    {
        segundos = 0;
        minutos++;
        if (minutos > 59)
        {
            minutos = 0;
            horas++;
            if (horas > 23)
            {
                horas = 0;
            }
        }
    }
};

