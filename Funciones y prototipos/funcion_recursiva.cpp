#include "funcion_recursiva.h"


long factorial(long numero) {
    if (numero<=1){
        return 1;
    }
    else{
        return numero*factorial(numero-1);
    }
}