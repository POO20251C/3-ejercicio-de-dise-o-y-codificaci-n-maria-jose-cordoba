//
// Created by majo on 15/03/2025.
//

#include "Producto.h"

#include <iostream>
#include <ostream>

Producto::Producto(string N, int c, bool e) {
    this ->nombre = N;
    this -> cantidad = c;
    this -> existencia = e;
}

//GETTERS
string Producto::getNombre() {
    return this->nombre;
}
int Producto::getCantidad() {
    return this->cantidad;
}
bool Producto::getExistencia() {
    return this->existencia;
}

//setters
void Producto::setNombre(string N) {
    this->nombre = N;
}
void Producto::setCantidad(int c) {
    this->cantidad = c;
}
void Producto::setExistencia(bool e) {
    this->existencia = e;

}

void Producto::mostrarProductos() {
    cout<<"Producto:"<<nombre<<endl;
    cout<<"Cantidad: "<<cantidad<<endl;
    cout<<"Existencia: "<<existencia<<endl;
}


//metodo
int Producto::registrarCantidad(int nuevaCantidad) {
    this->cantidad = nuevaCantidad;
    return this->cantidad;
}
