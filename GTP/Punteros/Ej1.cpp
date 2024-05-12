#include <iostream>

int main()
{
    int var1 = 10,var2 = 0,*punt;
    punt = &var1;
    std::cout<<"la variable 1 vale: " << *punt << " la direccion de memoria de la variable 1 es: " << punt << std::endl;
    punt =&var2;
    std::cout<<"la variable 2 vale: " << *punt << " la direccion de memoria de la variable 2 es: " << punt << std::endl;

    system("pause");
    return 0;
}
