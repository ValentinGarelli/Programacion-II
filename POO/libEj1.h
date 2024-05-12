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