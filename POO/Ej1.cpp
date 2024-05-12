#include <iostream>
#include "libEj1.h"

int main(){
    int num;
    Cuenta C1("primera");
    
    
    std:: cout << C1.get_titular() << std::endl;
    std:: cout << C1.get_cantidad() << std::endl;
    std:: cout << "ingrese un numero: ";
    std::cin >> num;
    C1.ingresar(num);
    std:: cout << C1.get_cantidad() << std::endl;
    std:: cout << "ingrese otro numero: ";
    std:: cin >> num;
    C1.retirar(num);
    std:: cout << C1.get_cantidad() << std::endl;
    


    return 0;
}
