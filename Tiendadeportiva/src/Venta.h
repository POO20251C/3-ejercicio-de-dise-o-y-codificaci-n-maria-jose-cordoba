//
// Created by majo on 18/03/2025.
//

#ifndef VENTA_H
#define VENTA_H
#include<list>
#include<string>
#include"Producto.h"

using namespace std;

class Venta {
private:
    string fechaDeVenta;
    list<Producto> productosVendidos;
    bool estado;


public:
    Venta();
    Venta(string fechaDeVenta,bool estado);

    //getters
    string getFechaDeVenta();
    bool getEstado();
    list<Producto> getProductosVendidos();

    //setters
    void setFechaDeVenta(string fechaDeVenta);
    void setEstado(bool estado);

    //metodos
    void registrarProductoVendido(Producto producto);
    void registrarFechaDeVenta(string fechaDeVenta);

};


#endif //VENTA_H
