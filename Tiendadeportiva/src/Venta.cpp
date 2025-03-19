//
// Created by majo on 18/03/2025.
//

#include "Venta.h"

#include <iostream>
#include <ostream>

#include "Producto.h"
Venta::Venta(string f, bool es) {
    this-> fechaDeVenta= f;
    this->estado= es;
}

//getters

string Venta::getFechaDeVenta() {
    return fechaDeVenta;
}
bool Venta::getEstado() {
    return estado;
}

//setters
void Venta::setFechaDeVenta(string f) {
    this-> fechaDeVenta= f;
}
void Venta::setEstado(bool e) {
    this-> estado= e;
}

//metodo
void Venta::registrarProductoVendido(Producto producto) {
    if (producto.getExistencia() == false) {
        cout<<"Error no se puede vender:"<<producto.getNombre()<<endl;
    } else {
        cout<<"Si tenemos :)" <<producto.getNombre()<< endl;
    }
}
void Venta::registrarFechaDeVenta(string fechaDeVenta) {
    this-> fechaDeVenta= fechaDeVenta;
}





