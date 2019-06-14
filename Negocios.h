#ifndef NEGOCIOS_H
#define NEGOCIOS_H
#include "Productos.h"
#include <string>
#include <vector>
using std::vector;
using namespace std;
class Negocios{
protected:
    string nombre;
    string ubicacion;
    int locales;
    vector <Productos*> productos;
public:
    Negocios();
    Negocios(string, string, int, vector<Productos*>);
    string getName();
    vector<Productos*> getProductos();
};
#endif