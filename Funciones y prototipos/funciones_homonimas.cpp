#include "funciones_homonimas.h"
#include <iostream>

void mostrar(int numero_entero){
    std::cout<<"La funcion mostrar imprime el numero entero: "<<numero_entero<<std::endl;
}

void mostrar(double numero_decimal){
    std::cout<<"La funcion mostrar imprime el numero decimal: "<<numero_decimal<<std::endl;
}

void mostrar(std::string texto){
    std::cout<<"La funcion mostar imprime el texto: "<<texto<<std::endl;
}