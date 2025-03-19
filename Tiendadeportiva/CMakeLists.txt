cmake_minimum_required(VERSION 3.30)
project(Tiendadeportiva)

set(CMAKE_CXX_STANDARD 20)

add_executable(Tiendadeportiva main.cpp
        src/Producto.cpp
        src/Producto.h
        src/Cliente.cpp
        src/Cliente.h
        src/Venta.cpp
        src/Venta.h
        src/Sistema.cpp
        src/Sistema.h)
