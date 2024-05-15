#include "Fig_Geo.h"

class Poligono_Reg: public Fig_Geo{
    
    private:
        int cantLados;
        double tamLados;

    public:
    Poligono_Reg(int x,int y,int cantL,double tamL);
    double Area();
    double Perimetro();
};
    


    