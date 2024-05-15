#include <iostream>
#include "Empleado.h"
using namespace std;

class Repartidor: public Empleado{

  private:
    int zona;
  public:
    Repartidor();
    void set_zona(int zon);
    int get_zona();
    void toString() override;
    void plus() override;

};