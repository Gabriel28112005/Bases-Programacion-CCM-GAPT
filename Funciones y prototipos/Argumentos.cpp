#include "Argumentos.h"
#include <cstdarg>

int sumar(int cantidad, ...) {
    int suma = 0;

    va_list argumentos;
    va_start(argumentos, cantidad);

    for (int i = 0; i < cantidad; i++) {
        int numero = va_arg(argumentos, int);
        suma += numero;
    }

    va_end(argumentos);
    return suma;
}