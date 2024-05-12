#include <iostream>
#include <cstdlib>

int main()
{
    int v[15],*p;
    srand(time(NULL));

    for (int i = 0; i < 15; i++)
    {
        v[i] = rand() % 100;
        p = &v[i];
        std::cout << "el numero en la posicion " << i+1 <<" es "<< *p <<" y su posicion de memoria es " << p << "\n";
    }
    
    


    return 0;
}
