

class Persona
{
    private:
    std::string nombre;
    int edad;
    int dni;
    char sexo;
    float peso;
    float altura;
    
    public:
    Persona();
    Persona(std::string nom,int ed,char s);
    Persona(std::string nom,int ed,char s,float tam,float alt);
    void SetNombre(std::string nom);
    void SetEdad(int ed);
    void SetSexo(char s);
    void SetPeso(float tam);
    void SetAltura(float alt);
    int CalcularIMC();
    bool EsMayorDeEdad();
    void ComprobarSexo(char s);
    void GenerarDNI();
    std::string GetNombre();
    int GetEdad();
    int GetDni();
    char GetSexo();
    float GetPeso();
    float GetAltura();


};
