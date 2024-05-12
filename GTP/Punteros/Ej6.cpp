#include <iostream>
#include <cstring>
using namespace std;

/*using namespace std porque sino no anda swap*/

void Invertir(char *frase){
    int largo =strlen(frase);

    for (int i = 0; i <largo/2; i++)
    {
        swap(frase[i],frase[largo-i-1]);
    }
    

}


int main()
{
    char frase[50];
    cout << "ingrese una frase de menos de 50 caracteres: ";
    cin.get(frase,50);
    Invertir(frase);
    cout << frase;

    return 0;
}
