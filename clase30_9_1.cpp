// Dado una matriz bidimencional de 3 x 2
// obtener una matriz unidireccional con los 
// los numeros pares

#include <iostream>
#include <conio.h>

using namespace std;

#define borrar system("cls")

int main()
    {
        int matriz_b[2][3] = {{1,2,10},{4,8,5}};
        int matriz_u[6];

        int pos = 0;
        int cant_pares = 0;

        int largo_matriz = sizeof(matriz_b)/sizeof(matriz_b[0]);
        int ancho_matriz = sizeof(matriz_b[0]) / sizeof(int);

        for (int fila=0;fila<largo_matriz;fila++)
            {
                for (int columna=0;columna<ancho_matriz;columna++)
                    {
                        if (matriz_b[fila][columna] % 2 == 0)
                            {
                            matriz_u[pos] = matriz_b[fila][columna];
                            pos ++;
                            cant_pares ++;
                            }
                    }

            }
        borrar;
                
        cout <<"La cantidad de pares encontrados es: "<<cant_pares<<endl;
        for (int pos=0; pos<cant_pares;pos++)
            cout << matriz_u[pos]<<" ";
        
        cout<< "\n";

        return 0;

    }
