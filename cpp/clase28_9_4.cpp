// matrices bidimensionales

#include <iostream>
#include <conio.h>
#include <cstring>

#define borrar system("cls")

using namespace std;


int main(){ 

    int matriz_bi [4][4] = {{1,2,3,4}, {6,7,8,9}}; 
    int fila, columna;
    int largo_matriz = sizeof(matriz_bi[0]) / sizeof(int);

    cout << "el numero 7: " << matriz_bi[1][1] << endl;
    cout << "el numero 2: " << matriz_bi[0][1] << endl;

    cout << largo_matriz << endl;

    for(int fila = 0 ; fila < 2; fila++)  // de nada
        for(int columna = 0 ; columna< 4; columna++)
            cout << matriz_bi[fila][columna] << " ";
        cout << "\n";

    return 0;  
}