class Arreglo
{
private:
    long int longitud;
    int *datos;

    
public:
    Arreglo();
    Arreglo(int l);
    Arreglo operator+(Arreglo A2);
    Arreglo operator-(Arreglo A2);
    int operator*(Arreglo A2);
    int operator[](int i);
    static Arreglo mayor(Arreglo A1, Arreglo A2);
    static Arreglo menor(Arreglo A1, Arreglo A2);
    Arreglo operator()(int i,int j);
    int getLongitud();
    void setLongitud(int l);
};

