//
//

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include<string>
using namespace std;

class Producto {

private:
    string nombre;
    int cantidad;
    bool existencia;

public:
    Producto();
    Producto(string nombre, int cantidad, bool existencia);

    //getters
    string getNombre();
    int getCantidad();
    bool getExistencia();

    //setters
    void setNombre(string nombre);
    void setCantidad(int cantidad);
    void setExistencia(bool existencia);
    void mostrarProductos();

    //Metodos
    int registrarCantidad(int nuevaCantidad);


};



#endif //PRODUCTO_H