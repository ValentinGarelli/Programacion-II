#ifndef FIG_GEO_H
#define FIG_GEO_H
#include <iostream>

class Fig_Geo {
        protected:
                double cord_x;
                double cord_y;
        public:
                Fig_Geo(double x,double y);
                virtual double Area() = 0;
                virtual double Perimetro() = 0;
                double Razon();
};

#endif