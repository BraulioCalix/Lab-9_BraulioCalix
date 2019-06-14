#include "Personas.h"
#ifndef CLIENTE_H
#define CLIENTE_H
class Cliente : public Personas
{
protected: 
    string direccion;
    double telefono;
    string tarjeta;
    int pedidos;
public:
    Cliente();
    Cliente(string, double,string,int,string,string,int);
    string getDireccion();
    virtual int ganancias();  
    string getName();
};
#endif