//1. realizar un algoritmo en una funcion que dada una matriz de caracteres me devuelva la misma ordenada alfabeticamente - inversa

//2. dada una matriz bidimensional {1,1,1} {1,1,1}
//      me devuelva dos martrices de valores 255 y 0
//      {255,255,255} {255,255,255}
//      {0,0,0} {0,0,0}


#include<iostream>
#include <conio.h>
#include <time.h>

#define borrar system ('cls')

using namespace std;

int main(){

    int matriz_bi[2][3] = { {1,1,1}, {1,1,1} };
    int matriz_255[2][3];
    int matriz_0[2][3];
    int matriz_num[2][3];

    int numero;

    int filas_matriz = sizeof(matriz_bi)/sizeof(matriz_bi[0]);
    int columnas_matriz = sizeof(matriz_bi[0]) / sizeof(int);
    
    cout << "Deme un numero: "; cin >> numero;

    for (int fila = 0; fila < filas_matriz; fila++ )
        for (int columna = 0; columna < columnas_matriz; columna++ ){
            matriz_255[fila][columna] = 255;
            matriz_0[fila][columna] = 0;
            matriz_num[fila][columna] = numero;
        }



    for(int fila = 0 ; fila < filas_matriz; fila++)
        for(int columna = 0 ; columna < columnas_matriz; columna++)
            cout << matriz_255[fila][columna] << " ";

    cout << "\n";

    for(int fila = 0 ; fila < filas_matriz; fila++)
        for(int columna = 0 ; columna < columnas_matriz; columna++)
            cout << matriz_0[fila][columna] << " ";
        
    cout << "\n";

    for(int fila = 0 ; fila < filas_matriz; fila++)
        for(int columna = 0 ; columna < columnas_matriz; columna++)
            cout << matriz_num[fila][columna] << " ";



    return 0;
}

