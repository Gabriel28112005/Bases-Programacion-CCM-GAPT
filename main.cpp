//
// Created by gapt2 on 31/10/2024.
//

#include <iostream>
#include "Variables/Operaciones.h"
#include "Funciones y prototipos/funciones_homonimas.h"
#include "Funciones y prototipos/Argumentos.h"
#include "Funciones y prototipos/Valores_argumentos.h"
#include "Funciones y prototipos/funciones_en_linea.h"
#include "Funciones y prototipos/funcion_recursiva.h"
#include "Ejercicio 7 Referencia//Referencia.h"

std::string nombre;
int edad;
int a=2;

int main(){

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"     EJERCICIO 1   "<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    //EJERCICIO 1.a) - Utilidad de las variables

    std::cout<<"Dime tu nombre: "; std::cin>>nombre;
    std::cout<<"Dime tu edad: "; std::cin>>edad;
    std::cout<<"Entonces, te llamas "<<nombre<<" y tu edad es "<<edad<<std::endl;

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 1.b) - Ámbito de las variables

    int b=10;
    std::cout<<"La suma de la variable global (a) mas la variable local (b) = "<<suma(a,b)<<std::endl;

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 1.c) - Sintaxis de declaración

    std::cout<<"el valor de la variable global (a) es: "<<a<<std::endl;

    std::cout<<"el valor de la variable local (b) del main es: "<<b<<std::endl;

    if(suma(a,b)>=0) {
        int c=suma(a,b)+1;
        std::cout<<"El valor de la variable del bloque if (c=a+b+1) es: "<<c<<std::endl;
    }
    else{
        int d=suma(a,b)-1;
        std::cout<<"El valor de la variable del bloque if (c=a+b-1) es: "<<d<<std::endl;
    }

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 1.d) - Tipos de datos

    int A=6,B=3;       //datos int
    double C=5,D=2;    //datos double
    char letra='z';    //dato char
    bool color="1";    //dato bool

    std::cout<<"El valor de la resta de A(6) - B(3) nos devuelve un entero que es: "<<resta(A,B)<<std::endl;
    std::cout<<"El valor de la division de C (5) entre D (2) es: "<<division(C,D)<<std::endl;
    std::cout<<"La ultima letra del abecedario es la "<<letra<<std::endl;

    std::cout<<"Te gusta el color rojo? (escribe 1 si te gusta, de lo contrario escribe 0): "; std::cin>>color;
    if(color==1){
        std::cout<<"Te gusta el color rojo"<<std::endl;
    }
    else{
        std::cout<<"No te gusta el color rojo"<<std::endl;
    }

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"     EJERCICIO 2   "<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    //EJERCICIO 2.a) Crear un programa que pida al usuario su edad y muestre un mensaje indicando si es mayor de edad o no.

    int operacion_2a, edad_2a, A_2a, B_2a, x;

    std::cout<<"Cual es tu edad?: "; std::cin>>edad_2a;

    if(edad_2a >= 18){
        std::cout<<"Eres mayor de edad"<<std::endl;
    }
    else if(edad_2a == 17){
        std::cout<<"Casi eres mayor de edad"<<std::endl;
    }
    else{
        std::cout<<"Eres menor de edad"<<std::endl;
    }

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 2.b) Crear un programa que pida al usuario dos números y permita elegir entre sumar y restar.

    std::cout<<"Introduce un numero: "; std::cin>>A_2a;
    std::cout<<"Introduce otro numero: "; std::cin>>B_2a;
    std::cout<<"1 para sumar y 2 para restar: "; std::cin>>operacion_2a;

    if(operacion_2a == 1) {
        std::cout<<"La suma es: "<<suma(a, b)<<std::endl;
    }
    else if(operacion_2a == 2) {
        std::cout<<"La resta es: "<<resta(a, b)<<std::endl;
    }

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"     EJERCICIO 3   "<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    //EJERCICIO 3.a) - Bucle for

    std::cout<<"Los numeros del 1 al 10 son: ";
    for(int a=1; a<=10; a++) {
        std::cout<<a<<", ";
    }
    std::cout<<std::endl;

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 3.b) - Tabla de multiplicar con el bucle while

    int numero1, multiplo1;

    std::cout<<"Dime un numero: "; std::cin>>numero1;

    while(numero1>0&&multiplo1<=10)
    {
        std::cout<<numero1<<" x "<<multiplo1<<" = "<<multiplicacion(numero1,multiplo1)<<std::endl;
        multiplo1++;
    }

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 3.c) - Tabla de multiplicar con el bucle do-while

    int numero2, multiplo2=0;

    std::cout<<"Dime otro numero: "; std::cin>>numero2;

    do{
        std::cout<<numero2<<" x "<<multiplo2<<" = "<<multiplicacion(numero2,multiplo2)<<std::endl;
        multiplo2++;
    } while(multiplo2<=10);

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 3.d) - Instrucciones de salto

    int F, buscar;
    std::cout<<"Del 1 al 10, cual es el numero que mas te gusta?: "; std::cin>>buscar;
    for(F=1; F<=10; F++){
        std::cout<<"este es el "<<F<<", ";
        if(F==buscar){
            std::cout<<"\n Aca esta el numero "<<buscar<<", el cual es tu favorito."<<std::endl;
            break;
        }
    }

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"     EJERCICIO 4   "<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    //EJERCICIO 4 - Declaración y uso de arrays

    int numeros_Ej_4[10];

    for (int i = 0; i < 10; i++) {
        numeros_Ej_4[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << numeros_Ej_4[i] <<std::endl;
    }

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"     EJERCICIO 5   "<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    //EJERCICIO 5.a) - Declaración de una función (suma)

    int numero_1, numero_2;

    std::cout<<"Dime un numero otra vez: "; std::cin>>numero_1;
    std::cout<<"Dime el numero que quieres sumarle al numero anterior: "; std::cin>>numero_2;
    std::cout<<"La suma de "<<numero_1<<" + "<<numero_2<<" es igual a "<<suma(numero_1,numero_2)<<std::endl;

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 5.b) - Funciones y procedimientos (una función devuelve un valor y un procedimiento no devuelve el valor)

    int numero_3=4, numero_4=8;
    std::cout<<"la suma de "<<numero_3<<" + "<<numero_4<<" es igual a "<<suma(numero_3,numero_4)<<std::endl;
    void mensaje();{
        std::cout<<"Este es un mensaje desde el procedimiento void"<<std::endl;
    }

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 5.c) - Llamada de las funciones

    std::cout<<"La operacion 20+2 = "<<suma(20,2)<<std::endl;
    std::cout<<"La operacion 20-2 = "<<resta(20,2)<<std::endl;
    std::cout<<"La operacion 20*2 = "<<multiplicacion(20,2)<<std::endl;
    std::cout<<"La operacion 20/2 = "<<division(20,2)<<std::endl;
    std::cout<<"La raiz cuadrada de 20 es: "<<raiz(20)<<std::endl;

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 5.d) - Gestión de las varibales locales

    int numero_5, numero_6;

    std::cout<<"Dime un valor para la variable global n_5: "; std::cin>>numero_5;
    std::cout<<"Dime un valor para la variable global n_6 que sera sumada a la variable n_5: "; std::cin>>numero_6;
    std::cout<<"Vamos a definir la variable global n_7 como n_5 + n_6, de forma que n_7 = "<<suma(numero_5,numero_6)<<std::endl;
    if (suma(numero_5,numero_6)==5){
        int numero_8=8;
        std::cout<<"La operacion "<<numero_8<<" - "<<suma(numero_5,numero_6)<<" = "<<resta(numero_8,suma(numero_5,numero_6))<<std::endl;

        std::cout<<"La resta que vemos encima nuestra usa una variable local n_8 ("<<numero_8<<") y le resta nuestra variable global n_7 ("<<suma(numero_5,numero_6)<<"), aunque no puede usarse el n_8 en otra funcion sin antes definir su valor pues es una variable local."<<std::endl;
    }
    else{
        int numero_9=9;
        std::cout<<"La operacion "<<numero_9<<" + "<<suma(numero_5,numero_6)<<" = "<<suma(numero_9,suma(numero_5,numero_6))<<std::endl;

        std::cout<<"La suma que vemos encima nuestra usa una variable local n_9 ("<<numero_9<<") y le suma nuestra variable global n_7 ("<<suma(numero_5,numero_6)<<"), aunque no puede usarse el n_9 en otra funcion sin antes definir su valor pues es una variable local."<<std::endl;
    }

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 5.e) - Definición de funciones homónimas (polimorfismo)

    mostrar(5);
    mostrar(2.92);
    mostrar("Hola profesor Ruben");

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 5.f) - Funciones con número varibale de argumentos

    std::cout<<"La sumatoria de los argumentos 1, 2, 3 = "<<sumar(3, 1, 2, 3)<<std::endl;
    std::cout<<"La sumatoria de los argumentos 5, 10, 15, 20 = "<<sumar(4, 5, 10, 15, 20)<<std::endl;
    std::cout<<"La sumatoria de los argumentos 7, 14 = "<<sumar(2, 7, 14)<<std::endl;

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 5.g) - Asignación de valores por defecto a los argumentos

    std::string nombre2, calificacion;

    std::cout<<"Como te llamas?: "; std::cin>>nombre2;
    std::cout<<"Como te ha salido el examen?: "; std::cin>>calificacion;

    examen("Oye",nombre2, calificacion);

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 5.h) - Funciones en línea

    int base, exponente;
    std::cout<<"Cual es el numero al que quieres elevar?: "; std::cin>>base;
    std::cout<<"Cual es el exponente que quieres para elevar el numero anterior?: "; std::cin>>exponente;
    std::cout<<potencia(base,exponente)<<std::endl;

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 5.j) - Funciones recursivas

    int numero_factorial;
    std::cout<<"Dime un numero cuyo factorial deseas saber: "; std::cin>>numero_factorial;
    std::cout<<"El resultado de "<<numero_factorial<<"! = "<<factorial(numero_factorial)<<std::endl;

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 5.k) - La función main

    std::cout<<"La expresion int main() es la mas simple pues no usa argumentos argumentos, es ideal cuando el programa no necesita datos de entrada externos."<<std::endl;
    std::cout<<"La expresion int main(int argc, char* argv[]) es ideal para manejar argumentos de la línea de comandos"<<std::endl;
    std::cout<<"La expresion int main(int argc, const char* argv[]) tiene una funcion similar a la forma de arriba, aunque tiene un argumento constante (argv)."<<std::endl;
    std::cout<<"La expresion void main() no es la mas usada pues unicamente se usa en entornos específicos o antiguos."<<std::endl;


    std::cout<<"-------------------"<<std::endl;
    std::cout<<"     EJERCICIO 6   "<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    //EJERCICIO 6.a) - Punteros de variables
    int *px = &x;

    *px = 10;

    std::cout<<"El valor de x gracias al puntero es: "<<x<<std::endl;

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 6.b) - Punteros y arrays

    std::string Carlos = "Carlos";

    for(int c=0; c<Carlos.length(); c++){
        std::cout<<"Caracter de la posicion  "<<c<<":"<<Carlos[c]<<std::endl;
    }

    //EJERCICIO 6.c) - Asignación de memoria

    int suma = 0, n, *p;

    std::cout<<"Introduce el numero de elementos: "; std::cin>>n;
    p = new int[n];
    for(int z_6=0; z_6<n; z_6++){
        std::cout<<"Introduce el elemento "<<z_6+1<<": ";
        std::cin>>p[z_6];
        suma += p[z_6];
    }

    std::cout<<"Elementos introducidos: ";

    for(int z_6=0; z_6<n; z_6++) {
        std::cout<<p[z_6]<<",";

    }
    std::cout<<"Total: "<<suma<<std::endl;
    std::cout<<"Media: "<<(double)suma/n<<std::endl;
    delete[]p;

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 6.d) - Aritmética de los punteros
    int *y;
    char *t;
    t=new char[15];

    for(int j=0; j<13; j++){
        t[j]='1';
    }

    y=(int*)t;

    *(y+1)=0;

    for(int j=0; j<13; j++){
        std::cout<<"El valor de la posicion "<<j<<" es "<<t[j]<<std::endl;
    }

    std::cout<<"---------------"<<std::endl;

    //EJERCICIO 6.e) - Punteros de punteros

    int s, *p1 = &s, *p2 = &*p1;
    *p2 = 10;

    std::cout<<"El valor de s es: "<<s<<std::endl;

    //EJERCICIO 6.f) - Punteros de funciones

    int Hola;

    puntero(&Hola);

    std::cout<<"El valor de Hola es: "<<Hola<<std::endl;

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"     EJERCICIO 7   "<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    //EJERCICIO 7 - Referencias

    int valor = 10;
    int& referenciaValor = valor;

    std::cout << "El valor original es: " << valor << std::endl;

    referenciaValor = 20;
    std::cout << "El nuevo valor usando una referencia es: " << valor << std::endl;

    incrementar(valor);
    std::cout << "El valor despues de incrementar es: " << valor << std::endl;

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"     EJERCICIO 8   "<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    //EJERCICIO 8.a) - Constantes simbólicas

    double radio;

    std::cout<<"Introduce el radio del circulo: ";
    std::cin>>radio;
    std::cout<<"El area del circulo es: "<<multiplicacion(PI,radio*radio)<<std::endl;

    //EJERCICIO 8.b) - El tipo void

    int resultado;

    suma2(5, 3, &resultado);

    std::cout<<"5 + 3 es: "<<resultado<<std::endl;

    //EJERCICIO 8.c) - Los alias de tipo: typedef

    typedef std::string txt;

    txt nombre = "Carlos";

    std::cout<<"Mi nombre es: "<<nombre<<std::endl;

    //EJERCICIO 8.d) - Constantes y enumeraciones

    enum autobuses {ALCALA = 227, TORREJON = 224, MECO = 250, CAMARMA = 255};

    autobuses bus = ALCALA;

    std::cout<<"El autobus que va a Alcala es el: "<<bus<<std::endl;

    return 0;
}