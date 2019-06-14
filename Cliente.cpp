#include "Cliente.h"
Cliente::Cliente(){
    direccion="";
    telefono=0;
    tarjeta="";
    pedidos=0;
}
Cliente::Cliente(string direc, double telef,string tarje, int pedido,string nombre, string id,int edad):Personas(nombre,id,edad){
direccion=direc;
telefono=telef;
tarjeta=tarje;
pedidos=pedido;
}
string Cliente::getDireccion(){
    return direccion;
}
int Cliente::ganancias(){
    return pedidos*(-100);
}
string Cliente::getName(){
    return nombre;
}
