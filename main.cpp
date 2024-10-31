//
// Created by gapt2 on 31/10/2024.
//

#include <iostream>
#include "Variables/Operaciones.h"

std::string nombre;
int edad;
int a=2;

int main(){
    std::cout<<"---------------"<<std::endl;
    std::cout<<"EJERCICIO 1:"<<std::endl;
    std::cout<<"---------------"<<std::endl;

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

    if(edad_2a >= 18)
    {
        std::cout<<"Eres mayor de edad"<<std::endl;
    }
    else if(edad_2a == 17)
    {
        std::cout<<"Casi eres mayor de edad"<<std::endl;
    }
    else
    {
        std::cout<<"Eres menor de edad"<<std::endl;
    }

    //2.b) Crear un programa que pida al usuario dos números y permita elegir entre sumar y restar.
    //     El programa debe mostrar el resultado de la operación seleccionada.

    std::cout<<"Introduce un numero: "; std::cin>>A_2a;
    std::cout<<"Introduce otro numero: "; std::cin>>B_2a;
    std::cout<<"1 para sumar y 2 para restar: ";
    std::cin>>operacion_2a;

    if(operacion_2a == 1)
    {
        std::cout<<"La suma es: "<<suma(a, b)<<std::endl;
    }
    else if(operacion_2a == 2)
    {
        std::cout<<"La resta es: "<<resta(a, b)<<std::endl;
    }

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"     EJERCICIO 4   "<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    //4) Crear un programa que declare un array de enteros,
    //lo llene con los primeros 10 números naturales y luego
    //los imprima en pantalla.

    int numeros[10];

    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << numeros[i] << "\n";
    }

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"     EJERCICIO 6   "<<std::endl;
    std::cout<<"-------------------"<<std::endl;
    //6.a) Crea un programa que declare punteros a variables y los utilice.
    int *px = &x;

    *px = 10;

    std::cout<<"El valor de x gracias al puntero es: "<<x<<std::endl;

    //6.b)Crea un programa que utilice punteros para recorrer y modificar un array.

    std::string Carlos = "Carlos";

    for(int c=0; c<Carlos.length(); c++)
    {
        std::cout<<"Caracter de la posicion  "<<c<<":"<<Carlos[c]<<std::endl;
    }

    //6.c)Crea un programa que utilice la asignación de memoria dinámica (new y delete).

    int suma = 0;
    int n;
    int *p;

    std::cout<<"Introduce el numero de elementos: ";
    std::cin>>n;

    p = new int[n];

    for(int z=0; z<n; z++)
    {
        std::cout<<"Introduce el elemento "<<z+1<<": ";
        std::cin>>p[z];
        suma += p[z];
    }

    std::cout<<"Elementos introducidos: ";

    for(int z=0; z<n; z++)
    {
        std::cout<<p[z]<<",";

    }
    std::cout<<"Total: "<<suma<<std::endl;
    std::cout<<"Media: "<<(double)suma/n<<std::endl;
    delete[]p;

    //6.d)Crea un programa que demuestre la aritmética de punteros.

    int *y;
    char *t;
    t=new char[15];

    for(int j=0; j<13; j++)
    {
        t[j]='1';
    }

    y=(int*)t;

    *(y+1)=0;

    for(int j=0; j<13; j++)
    {
        std::cout<<"El valor de la posicion "<<j<<" es "<<t[j]<<std::endl;
    }

    //Al ejecutar el programa se puede observar que sobreescribe 4 bytes de memoria.

    //6.e)Crea un programa que declare y utilice punteros a punteros

    int s;
    int *p1 = &s;
    int *p2 = &*p1;
    *p2 = 10;

    std::cout<<"El valor de s es: "<<s<<std::endl;

    //6.f)Crea un programa que declare y utilice punteros a funciones.

    int Hola;

    puntero(&Hola);

    std::cout<<"El valor de Hola es: "<<Hola<<std::endl;

    std::cout<<"-------------------"<<std::endl;
    std::cout<<"     EJERCICIO 8   "<<std::endl;
    std::cout<<"-------------------"<<std::endl;

    //8.a) Declara y utiliza constantes simbólicas en un programa.

    double radio;

    std::cout<<"Introduce el radio del circulo: ";
    std::cin>>radio;
    std::cout<<"El area del circulo es: "<<multiplicacion(PI,radio*radio)<<std::endl;

    //8.b) Muestra cómo se puede utilizar el tipo void en C++.

    int resultado;

    suma2(5, 3, &resultado);

    std::cout<<"5 + 3 es: "<<resultado<<std::endl;

    //8.c) Declara y utiliza alias de tipo en un programa.

    typedef std::string txt;

    txt nombre = "Carlos";

    std::cout<<"Mi nombre es: "<<nombre<<std::endl;

    //8.d) Declara y utiliza constantes y enumeraciones en un programa.

    enum autobuses {ALCALA = 227, TORREJON = 224, MECO = 250, CAMARMA = 255};

    autobuses bus = ALCALA;

    std::cout<<"El autobus que va a Alcala es el: "<<bus<<std::endl;

    return 0;
}