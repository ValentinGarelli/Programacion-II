class Persona
{
private:
    char nombre[15];
    int edad;
    long int dni;
    char sexo;
    double peso;
    double altura;
public:
    Persona();
    Persona(char nom[15],int ed,char s);
    Persona(char nom[15],int ed,char s,double tam,double alt);
    void SetNombre(char nom[15]);
    void SetEdad(int ed);
    void SetSexo(char s);
    void SetPeso(double tam);
    void SetAltura(double alt);
    int CalcularIMC();
    bool EsMayorDeEdad();
    void ComprobarSexo(char s);
    void GenerarDNI();
    char* GetNombre();
    int GetEdad();
    int GetDni();
    char GetSexo();
    double GetPeso();
    double GetAltura();

};

