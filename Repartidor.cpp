#include "Repartidor.h"
Repartidor::Repartidor(){
    placa="";
    zona="";
    ordenes=0;
}
Repartidor::Repartidor(string placa,string zona,int orden,string name,string id,int edad):Personas(name,id,edad){
    this->placa= placa;
    this->zona=zona;
    this->ordenes=orden;
}
int Repartidor::ganancias(){
    return 40*ordenes;
}
string Repartidor::getName(){
    return nombre;
    
}