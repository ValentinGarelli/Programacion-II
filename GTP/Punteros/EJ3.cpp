#include <iostream>

#include <iostream>

int main()
{
    int datos[5],*p1,*p2;
    p1 = &datos[0];
    p2 = &datos[4];
    std::cout << p2-p1;
    
    return 0;
}
