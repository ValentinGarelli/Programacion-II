class Conjunto
{
private:
    int *elementos;
    int numElementos;
    void eliminarRepetidos();
    int Interseccion(Conjunto C2);
public:
    Conjunto(int n);
    Conjunto(int n,int *elem);
    int getLargo();
    int getElemento(int i);
    void agregar(int elem);
    void eliminar(int elem);
    void mostrar();
    Conjunto operator+(Conjunto C2);
    Conjunto operator-(Conjunto C2);
    Conjunto operator*(Conjunto C2);
    
    

       
};


