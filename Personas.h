#ifndef PERSONAS_H
#define  PERSONAS_H
#include <string>
using namespace std;
class Personas{
protected:
    string nombre;  
    string id;
    int edad; 
public:
Personas();
Personas(string ,string ,int);
virtual int ganancias()=0;
string getName();
string getId();
int getEdad();
};

#endif
