//
//

#ifndef SISTEMA_H
#define SISTEMA_H
#include<vector>
#include"Cliente.h"
#include"Producto.h"
#include"Venta.h"

using namespace std;


class Sistema {
private:
    vector<Cliente> clientes;
    vector<Producto> productos;
    vector<Venta> ventas;

public:
    Sistema();
    //getters
    vector<Cliente> getClientes();
    vector<Producto> getProductos();
    vector<Venta> getVentas();

    //setters
    void mostrarCliente(Cliente cliente);
    void registrarProducto(Producto producto);
    void mostrarVentas();


};



#endif //SISTEMA_H
