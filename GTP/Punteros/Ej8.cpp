#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


int VocalesMin(char *cadena){
    int cantVocal=0;
    for (int i = 0; i < strlen(cadena); i++)
    {
        if (islower(cadena[i]))
        {
            switch (cadena[i])
        {
        case 'a':
            cantVocal++;
            break;
        case 'e':
            cantVocal++;
            break;
        case 'i':
            cantVocal++;
            break;
        case 'o':
            cantVocal++;
            break;
        case 'u':
            cantVocal++;
            break;
        default:
            break;
        }
        }
        
        
    }
    return cantVocal;
}


int main(int argc, char const *argv[])
{
    char cadena[50];
    int cant;
    cout << "Ingrese una cadena de maximo 50 caracteres: ";
    cin.get(cadena,50);
    cant = VocalesMin(cadena);
    cout << cant;
    return 0;
}

