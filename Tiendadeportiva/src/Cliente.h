//
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include<string>
#include<vector>
#include"Venta.h"
using namespace std;


class Cliente {
private:
    string nombre;
    vector<Venta> ventas;
    int numeroDeCompras;

public:
    Cliente();
    Cliente(string nombre,int numeroDeCompras);

    //getters
    string getNombre();
    vector<Venta> getCompras();
    int getNumeroDeCompras();

    //setters
    void setNombre(string nombre);
    void setNumeroDeCompras(int numeroDeCompras);
    void mostrarCompras();

    //metodos
    void registrarVenta(Venta venta);


};



#endif //CLIENTE_H
