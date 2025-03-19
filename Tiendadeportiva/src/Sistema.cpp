//
// Created by majo on 18/03/2025.
//

#include "Sistema.h"
Sistema::Sistema() {
}
//getters
vector<Cliente> Sistema::getClientes(){
    return clientes;
}
vector<Producto> Sistema::getProductos() {
    return productos;
}
vector<Venta> Sistema::getVentas() {
    return ventas;
}

//setters
void Sistema::mostrarCliente(Cliente cliente) {
    clientes.push_back(cliente);

}

void Sistema::registrarProducto(Producto producto) {
    productos.push_back(producto);
}
void Sistema::mostrarVentas() {

}
