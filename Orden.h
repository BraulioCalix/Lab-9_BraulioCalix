#ifndef ORDEN_H
#define ORDEN_H
#include "Cliente.h"
#include "Negocios.h"
#include "Repartidor.h"
#include "Productos.h"
class Orden {
private:
    Personas* cliente;
    Negocios* negocio;
    Personas* repartidor;
    Productos* producto;
    string estado;
public:
    Orden();
    Orden(Personas*, Negocios*,Personas*,Productos*, string);
    string nombrecliente(int);
    void setEstado(string);
    string getEstado();
    string getUbica();
    string getnegocio();
    string getproducto();

};
#endif  