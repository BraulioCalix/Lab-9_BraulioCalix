#ifndef PRODUCTOS_H
#define PRODUCTOS_H
#include <string>
using namespace std;
class Productos
{
protected: 
    string nombre;
    string tipo;
public:
    Productos();
    Productos(string ,string);
    string getNombre();
    string getTipo();
};
#endif