#include <iostream>
#include <cctype>

void ConvertirMayus(char *str){
    while(*str != '\0')
  {
    *str = toupper(*str);
    str++;
  }
}

int main()
{
    char str[10];
    std::cout <<"ingrese una palabra de menos de 10 letras: ";
    std::cin >> str;

    ConvertirMayus(str);
    std::cout << "La palabra en mayuscula es: "<< str;

    return 0;
}
