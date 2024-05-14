class CuentaBancaria
{
private:
    int numeroCuenta;
    double saldo;
    double interes;
    void ControlInteres();
public:
    CuentaBancaria();
    CuentaBancaria(int num,double inter);
    void set_numeroCuenta(int num);
    void set_saldo(double sal);
    void set_interes(double inter);
    int get_numeroCuenta();
    double get_saldo();
    double get_interes();
    void depositar(double monto);
    void extraer(double monto);
    void acreditarInteres();
    
};

