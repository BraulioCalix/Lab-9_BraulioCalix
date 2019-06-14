#include "Negocios.h"
Negocios::Negocios(){
    nombre="";
    ubicacion="";
    locales=0;
}
Negocios::Negocios(string name,string ubica, int local ,vector <Productos*> prodc){
    nombre=name;
    ubicacion=ubica;
    locales=local;
    productos=prodc;
}
string Negocios::getName(){
    return nombre;
}
vector<Productos*> Negocios::getProductos(){
    return productos;
}