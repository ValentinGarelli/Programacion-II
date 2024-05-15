#include <iostream>
#include "Empleado.h"

class Comercial: public Empleado{
  
  private:
    double comision;
  public:
    Comercial();
    void set_comision(double com);
    double get_comision();
    void toString() override;
    void plus() override;

};