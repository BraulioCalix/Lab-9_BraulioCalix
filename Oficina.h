#include "Personas.h"
#ifndef OFICINA_H
#define OFICINA_H
class Oficina: public Personas{
protected:
    int horas;
    string local;
    int ordenes;
public:
    Oficina();
    Oficina(int,string,int,string,string,int);
    virtual int ganancias();
};
#endif
