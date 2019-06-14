#include "Personas.h"
#ifndef REPARTIDOR_H
#define REPARTIDOR_H
class Repartidor: public Personas
{
protected: 
string placa;
string zona;
int ordenes;
public:
    Repartidor();
    Repartidor(string,string,int,string,string,int);
    void setPedido(int);
    virtual int ganancias();
    string getName();
};
#endif