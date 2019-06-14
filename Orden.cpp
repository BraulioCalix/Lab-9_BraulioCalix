#include "Orden.h"
Orden::Orden(){

}
Orden::Orden(Personas* clien, Negocios* nego, Personas* repar,Productos* prod, string estado){
    cliente =clien;
    negocio=nego;
    repartidor=repar;
    producto=prod;
    this->estado= estado;
}
string Orden::nombrecliente(int i){
    return cliente->getName();
}
void Orden::setEstado(string esta){
    estado=esta;
}
string Orden::getEstado(){
    return estado;
}
string Orden::getnegocio(){
    return negocio->getName();
}
string Orden::getproducto(){
    return producto->getNombre();
}