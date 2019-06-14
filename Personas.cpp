#include "Personas.h"
Personas::Personas(){
    nombre="";
    id="";
    edad=0;
}
Personas::Personas(string nom,string id,int edad){
    nombre=nom;
    this->id=id;
    this->edad=edad;
}
string Personas::getName(){
    return nombre;
}
string Personas::getId(){
    return id;
}
int Personas::getEdad(){
    return edad;
}
