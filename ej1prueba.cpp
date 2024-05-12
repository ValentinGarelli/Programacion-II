#include <iostream>


class Cuenta
{
private:
    std::string titular;
    double cantidad;
public:
    Cuenta(std:: string nom);
    void set_titular(std:: string nombre);
    void set_cantidad(double valor);
    std::string get_titular();
    double get_cantidad();
    void ingresar(double num);
    void retirar(double num);

};

Cuenta::Cuenta(std::string nom){
    titular = nom;
}

void Cuenta:: set_titular(std::string nombre){
    titular = nombre;
}

void Cuenta:: set_cantidad(double valor){
    cantidad = valor;
}

std::string Cuenta:: get_titular(){
    return titular;
}

double Cuenta:: get_cantidad(){
    return cantidad;
}

void Cuenta:: ingresar(double num){
    if (num > 0)
    {
        cantidad = cantidad + num;
    }
    
    
}

void Cuenta:: retirar(double num){
    cantidad = cantidad - num;
    if (cantidad < 0)
    {
        cantidad = 0;
    }
    

}

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
