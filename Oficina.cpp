#include "Oficina.h"
Oficina::Oficina(){
    horas=0;
    local="";
    ordenes=0;
}
Oficina::Oficina(int hora,string loca,int ordenes,string nombre,string id,int edad):Personas(nombre, id,edad){
    horas=hora;
    local=loca;
    this->ordenes=ordenes;
}
int Oficina::ganancias(){
    return (30*ordenes)+ordenes;
}
