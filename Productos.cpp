#include "Productos.h"
Productos::Productos(){
    nombre=" ";
    tipo="";
}
Productos::Productos(string name,string type){
    nombre=name;
    tipo=type;
}
string Productos::getNombre(){
    return nombre;
}

string Productos::getTipo(){
    return tipo;
}