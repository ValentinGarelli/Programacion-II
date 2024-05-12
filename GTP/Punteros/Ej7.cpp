#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void Copia(string *C1,string *C2){
   
    *C2 = *C1;
    
    
}

int main(int argc, char const *argv[])
{
    string cadena1,cadena2,*p1,*p2;
    cout << "ingrese una palabra: ";
    cin >> cadena1;
    p1 = &cadena1;
    p2 = &cadena2;
    Copia(p1,p2);
    cout << cadena2;
    return 0;
}
