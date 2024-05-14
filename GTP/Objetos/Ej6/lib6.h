class Password
{
private:
    int longitud;
    char *contrasena;
public:
    Password();
    Password(int largo);
    void generarPassword();
    bool esFuerte();
    char* getContrasena();
    int getLongitud();
    void setLongitud(int largo);
};