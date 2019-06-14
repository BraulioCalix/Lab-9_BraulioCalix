#include "Negocios.h"
#include "Oficina.h"
#include "Personas.h"
#include "Productos.h"
#include "Repartidor.h"
#include "Cliente.h"
#include "Orden.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using std::ofstream;
using namespace std;
using std::vector;
int main(){
    vector <Orden*> Noterminado;
    vector <Orden*> Terminado;  
    vector<Personas*> personas;
    vector<Negocios*>negocios;
    int menu=1;
    while (menu==1){
        cout << "que desea hacer? "<< endl;
        cout << "1) crear o eliminar personas"<< endl;
        cout << "2) crear o eliminar negocios con sus productos"<< endl;
        cout << "3) crear, confirmar o cancelar ordenes"<< endl;
        cout << "4) cerrar y pasar las facturas a txt "<< endl;
        cout << "ingrese su opcion: "<< endl;
        int opcion =0;
        cin >> opcion;
        switch (opcion){
            case 1:{// crear o liminar personas
                string nombre="";
                string id="";
                int edad=0;
                cout << "que desa hacer?"<< endl;
                cout<< "1) crear personas "<< endl;
                cout <<"2) eliminar personas"<< endl;
                cout << "ingrese opcion : "<< endl;
                int Mpersona=0; //Menu de personas
                cin>> Mpersona;
                if (Mpersona==1){//crear
                    cout << "que tipo de persona desea crear? "<< endl;
                    cout << "1) cliente "<< endl;
                    cout << "2) repartidor "<< endl;
                    cout << "3) empleado de oficina "<< endl;
                    cout << "ingrese su opcion: "<< endl;
                    int crear=0;
                    cin >>crear;
                    if( crear==1){// clientes
                        cout << " ingrese el nombre: "<< endl;
                        cin >> nombre;
                        cout << "ingrese el id: "<< endl;
                        cin>> id;
                        cout << "ingrese la edad: "<< endl;
                        cin >> edad;
                        cout << "ingrese la direccion: "<< endl;
                        string direc="";
                        cin >> direc;
                        cout << "ingrese el numero de telefono"<< endl;
                        double telefono=0;
                        cin>> telefono;
                        string tarjeta="";
                        cout << "ingrese la tarjeta: "<< endl;
                        cin>> tarjeta;
                        int pedidos=0;
                        personas.push_back(new Cliente(direc,telefono,tarjeta,pedidos,nombre,id,edad));
                    }else if(crear==2){// repaeridor
                        cout << " ingrese el nombre: "<< endl;
                        cin >> nombre;
                        cout << "ingrese el id: "<< endl;
                        cin>> id;
                        cout << "ingrese la edad: "<< endl;
                        cin >> edad;
                        cout << "ingrese la placa"<< endl;
                        string placa="";
                        cin >> placa;
                        cout << "ingrese la zona de preferencia"<< endl;
                        string zona="";
                        cin >> zona;
                        personas.push_back(new Repartidor(placa,zona,0,nombre,id,edad));

                    }else if(crear == 3){// personal de oficina
                        cout << " ingrese el nombre: "<< endl;
                        cin >> nombre;
                        cout << "ingrese el id: "<< endl;
                        cin>> id;
                        cout << "ingrese la edad: "<< endl;
                        cin >> edad;
                        cout << "ingrese las horas de trabajo"<< endl;
                        int horas=0;
                        cin >> horas;
                        string oficina="";
                        cout << "ingrese el local :"<< endl;
                        cin >> oficina;
                        personas.push_back(new Oficina(horas,oficina,0,nombre,id,edad));
                    }//terminan if de crreacion
                }else if(Mpersona==2){//eliminar
                if(personas.size()==0){
                    cout << "no se puede eliminar ya que no hay nada en la lista"<< endl;
                }else{
                    for (int i = 0; i < personas.size(); i++){
                        if (typeid(personas[i])==typeid(Cliente)){
                            cout << "Persona "<<i+1 << ") nombre: "<< personas[i]->getName();
                        }else if(typeid(personas[i])==typeid(Repartidor)){
                            cout << "Persona "<<i+1 << ") nombre: "<< personas[i]->getName();
                        }else if(typeid(personas[i])==typeid(Oficina)){
                            cout << "Persona "<<i+1 << ") nombre: "<< personas[i]->getName();
                        }
                    }// fin del for
                    int posicion=0;
                    cout << "ingrese el numero del que quiere eliminar: "<< endl;
                    cin>> posicion;
                    posicion=posicion-1;
                    personas.erase(personas.begin()+posicion);
                    
                }// fin else de eliminar con tamaNo

                }// fin else del eliminar
                
            }break;
            case 2:{//crear o elimnar negocios
                    cout << "que desea hacer? "<< endl;
                    cout << "1) crear negocios "<< endl;
                    cout << "2) eliminar"<< endl;
                    int opcion=0;
                    cin>> opcion;
                    if (opcion==1){// crear negocios
                        cout << "ingrese el nombre"<< endl;
                        string nom="";
                        cin>> nom;
                        string ubica="";
                        cout << "ingrese la ubicacion: "<< endl;
                        cin >> ubica;
                        int locales=0;
                        cout << "ingrese la cantidad de locales"<< endl;
                        cin >> locales;
                        int op=1;
                        string nompro="";
                        string tipo="";

                        vector<Productos*>prods;
                        while(op==1){
                            cout << "ingrese el nombre del prducto"<< endl;
                            cin>> nompro;
                            cout << "ingrese el tipo del producto: 1) comestible 2) no comestible: "<< endl;
                            int tip=0;
                           cin>>tip;
                            if(tip==1){
                                tipo="comestible";
                            }else {
                                tipo="no comestible";
                            }
                            prods.push_back(new Productos(nompro,tipo));
                        cout<< "desea poner otro producto 1)si 2) no"<< endl;
                         cin >> op;
                        }
                        negocios.push_back(new Negocios(nom,ubica,locales,prods));
                    }else if(opcion==2){//eliminar negocios
                    for (int i = 0; i < negocios.size(); i++){
                        cout << "negocio: "<< i+1 << " de nombre: "<< negocios[i]->getName();
                    }
                    cout << "ingrese la posicion del negocio a eliminar"<< endl;
                    int posi=0;
                    cin>> posi;
                    negocios.erase(negocios.begin()+posi-1);
                    

                    }//fin del if
                    
            }break;
            case 3:{// crear ordenes confimar ordenes , cancelar ordenes
            int posicliente=0;
            int posireparte=0;
            int posnegocios=0;
            cout << "que desea hacer? "<< endl;
            cout << "1) crear orden"<< endl;
            cout << "2) confirmar orden"<< endl;
            cout << "3) cancelar orden"<< endl;
            int opcion2=0;
            cin >> opcion2;
            bool puede=true;
            if(puede==true){
                if(opcion2==1){// crear
                    for (int i = 0; i < personas.size(); i++){
                        if (typeid(personas[i])==typeid(Cliente)){
                                cout << "Cliente "<<i+1 << ") nombre: "<< personas[i]->getName();
                            }
                    }
                    cout << "ingrese el numero del cliente que desea agarrar: "<< endl;
                    cin>> posicliente;
                    posicliente=posicliente-1;
                    for (int i = 0; i < personas.size(); i++){
                        if (typeid(personas[i])==typeid(Repartidor)){
                                cout << "Repartidor "<<i+1 << ") nombre: "<< personas[i]->getName();
                            }
                            
                    }
                    cout << "ingrese el numero del Repartidor que desea agarrar: "<< endl;
                    cin>> posireparte;
                    posireparte=posireparte-1;
                    for (int i = 0; i < negocios.size(); i++){
                         cout << "Negocio "<<i+1 << ") nombre: "<< negocios[i]->getName();
                    }
                    cout << "ingrese el numero del negocio que desea agarrar: "<< endl;
                    cin>> posnegocios;
                    posnegocios=posnegocios-1;
                    Productos* produc;
                    for (int i = 0; i < negocios[posnegocios]->getProductos().size(); i++){
                        
                        cout << "producto: "<< i+1<< ") nombre: "<< negocios[posnegocios]->getProductos()[i]->getNombre();
                    }
                    cout << "ingrese la posicion del producto: "<< endl;
                    int posipro=0;
                    cin>> posipro;
                    posipro=posipro-1;
                    produc=negocios[posnegocios]->getProductos()[posipro];
                    string estao="proceso";
                    Noterminado.push_back(new Orden(personas[posicliente],negocios[posnegocios],personas[posireparte],produc,estao));                    
            }
            }else if(opcion2==2){//confirmar
                for (int i = 0; i <Noterminado.size(); i++){
                    cout << "orden: "<<i+1 <<"del cliente: "<< Noterminado[i]->nombrecliente(i);
                }
                    cout << "ingrese la posicion de la orden que desea confirmar: "<< endl;
                    int posorden=0;
                    cin >>posorden;
                    posorden=posorden-1;
                    Noterminado[posorden]->setEstado("terminado");
                    
                    Terminado.push_back(Noterminado[posorden]);
                    Noterminado.erase(Noterminado.begin()+posorden);
                    
            }else if(opcion2==3){// cancelar
                for (int i = 0; i <Noterminado.size(); i++){
                    cout << "orden: "<<i+1 <<"del cliente: "<< Noterminado[i]->nombrecliente(i);
                }
                    cout << "ingrese la posicion de la orden que desea cancelar: "<< endl;
                    int posorden=0;
                    cin >>posorden;
                    posorden=posorden-1;
                    Noterminado[posorden]->setEstado("cancelado");
                    Terminado.push_back(Noterminado[posorden]);
                    Noterminado.erase(Noterminado.begin()+posorden);
            }//fin de opcion
            }break;
            case 4:{//cerrar y escribir
            ofstream outFile;
	        outFile.open("facturas.txt",std::ios::app);
	//escribir
	        outFile<<"--------Factura--------" << endl;
            for (int i = 0; i < Terminado.size(); i++){
                outFile<< "datos del cliente: "<< endl;
                outFile<< Terminado[i]->nombrecliente(0)<<endl;
                outFile<< "negocio: "<< Terminado[i]->getnegocio();
                outFile<< "Producto: "<< Terminado[i]->getproducto();
                outFile<< "-----------------"<< endl;
            }
	//cerrar
	        outFile.close();
            menu=2;
            }break;
            default:{

            }break;
        }// fin del switch opcion
        cout<< "desea reingresar?? 1) si 2) no :"<<endl;
        cin >> menu;
    }// fin while menu
    /* 
        BORRADO
    */
   for (Orden* i : Noterminado)
    {
        delete i;
    }
    Noterminado.clear();
    for (Orden* i : Terminado)
    {
        delete i;
    }
    Terminado.clear();
    for (Personas* i : personas)
    {
        delete i;
    }
    personas.clear();
    for (Negocios* i : negocios){
        delete i;
    }
    negocios.clear();
    return 0;
}// fin main
