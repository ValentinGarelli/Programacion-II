#include <iostream>

int main()
{
    int datos[5],*p;
    for (int i = 0; i < 5; i++)
    {
        p = &datos[i];
        std::cout << "La posicion numero " << i << " tiene la direccion de memoria " << p << std::endl;
    }

    
    return 0;
}
