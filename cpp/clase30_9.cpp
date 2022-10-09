// realizar un algoritmo qeu sume todos los numeros de una matriz bidimensional

#include <iostream>
#include <conio.h>
#include <cstring>

#define borrar system("cls")

using namespace std;


int main(){ 

    int matriz[3][3] = { {2,4,6}, {4,6,8} };
    int contador = 0;

    for(int fila = 0 ; fila < 3; fila++)
        for(int columna = 0 ; columna < 3; columna++){
            contador = contador + matriz[fila][columna];
        }
    cout << "La suma de los numeros de la matriz es: " << contador << endl;

    return 0;  
}