class Conjunto
{
private:
    int *elementos;
    int numElementos;
public:
    Conjunto();
    Conjunto(int n);
    Conjunto(int n,int *elem);
    void agregar(int elem);
    void eliminar(int elem);
    void mostrar();
    Conjunto operator+(Conjunto C2);
    Conjunto operator-(Conjunto C2);
    Conjunto operator*(Conjunto C2);
    
    

       
};


