class Matriz
{
private:
    int **matriz;
    int filas;
    int columnas;
public:
    Matriz(int f, int c);
    Matriz operator+(Matriz M2);
    Matriz operator-(Matriz M2);
    Matriz operator*(Matriz M2);
    int operator[](int d);
    int operator()(int i, int j);
    Matriz operator()(int i, int j, int v);
    int getFilas();
    int getColumnas();

};

