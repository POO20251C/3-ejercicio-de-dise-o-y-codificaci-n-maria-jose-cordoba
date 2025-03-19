#include <iostream>

#include "src/Cliente.h"
#include "src/Producto.h"
#include "src/Venta.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Producto p1("Pesas",7,true); //si existem hay 7
    Producto p2("tenis",0,false); //no existen
    //ahora siguen los cout que mostran la informacion
    cout<<"el nombre del producto es:"<<p1.getNombre()<< "\n Cantidad:" <<p1.getCantidad()<<"\n¿Existe?:"<<(p1.getExistencia() ? "si" : "No") <<endl;
    cout<<"\nEl nombre del producto es:"<<p2.getNombre()<< "\n Cantidad:" <<p2.getCantidad()<<"\n¿Existe?:"<<(p2.getExistencia() ? "si" : "No") <<endl;
    cout<<"\nprodcutos en existencia";
    p1.mostrarProductos();
    p2.mostrarProductos();

    //ahora de venta
    Venta vent1("18-02-2025",true);
    Venta vent2("26-03-2025",false);
    //couts de venta
    cout<<"\nla fecha de la venta fue:"<<vent1.getFechaDeVenta()<<"\nLa venta fue completada:"<<(vent1.getEstado()? "si" : "No") <<endl;
    cout<<"\nla fecha de la venta fue:"<<vent2.getFechaDeVenta()<<"\nLa venta fue completada:"<<(vent2.getEstado()? "si" : "No") <<endl;
    cout<<"\n Se puede vender el producto?";
    vent1.registrarProductoVendido(p1);
    vent2.registrarProductoVendido(p2);

    // Con clientes
    Cliente cliente1("Dulce",3);
    Cliente cliente2("Canela",1);

    cliente1.registrarVenta(vent1);
    cliente2.registrarVenta(vent2);

    // mostrar las compras del cliente
    cliente1.mostrarCompras();
    cliente2.mostrarCompras();

    //couts de clientes
    cout<<"\nNombre del cliente registrado:"<<cliente1.getNombre()<<"\nNumero de compras relizadas:"<<cliente1.getNumeroDeCompras()<<endl;
    cout<<"\nNombre del cliente registrado:"<<cliente2.getNombre()<<"\nNumero de compras relizadas:"<<cliente2.getNumeroDeCompras()<<endl;


    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.