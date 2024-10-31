

#include "Operaciones.h"
#include <math.h>


int suma(int a, int b){
    return a+b;
}

int resta(int A, int B){
    return A-B;
}

int multiplicacion (int numero, int multiplo){
    return numero*multiplo;
}

double division(double C, double D){
    return C/D;
}

double raiz(int numero_1){
    return sqrt(numero_1);
}

void puntero(int *l)
{
    *l = 25;
}

void suma2(int a, int b, int *resultado) {
    *resultado = a + b;
}