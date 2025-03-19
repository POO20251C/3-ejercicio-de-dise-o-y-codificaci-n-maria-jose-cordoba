//
// Created by majo on 18/03/2025.
//
#include<iostream>
#include "Cliente.h"
Cliente::Cliente(string n,int D ) { //me toco ponerle numeroDecompras=D para no cofndunri creo jaja
    this->nombre = n;
    this->numeroDeCompras=D;
}

//getters
string Cliente::getNombre() {
    return nombre;
}
int Cliente::getNumeroDeCompras() {
    return numeroDeCompras;
}
vector<Venta> Cliente::getCompras() {
    return ventas;
}


//setters
void Cliente::setNombre(string n) {
    this->nombre = n;
}
void Cliente::setNumeroDeCompras(int D) {
    this->numeroDeCompras = D;
}
    //metodos
void Cliente::registrarVenta(Venta venta) {
    ventas.push_back(venta);
    numeroDeCompras++;

}

void Cliente::mostrarCompras() {
    if (ventas.size()== 0) {
        cout<< "el cliente no ha realizado compras"<<endl;
    }else {
        cout<<"Su numero de compras fue"<<numeroDeCompras<<endl;
    }
}

