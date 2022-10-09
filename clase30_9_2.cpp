// REalizar un algoritmo que dado una matriz
// de int me devuelva la misma, ordenada ascendente


#include <iostream>
#include <conio.h>

using namespace std;

#define borrar system("cls")

int main()
    {
        int matriz_numeros[] = {4,13,2,6,5};

        int largo_matriz= sizeof(matriz_numeros)/ sizeof(int);

        int min = 0;
        int aux = 0;

        for (int pos=0; pos <largo_matriz;pos++)
            {
                min = pos;
                for (int pos2=pos+1;pos2 <largo_matriz;pos2++)
                    {
                        if (matriz_numeros[pos2]< matriz_numeros[min])
                            min = pos2;

                    }
                aux = matriz_numeros[pos];
                matriz_numeros[pos] = matriz_numeros[min];
                matriz_numeros[min] = aux;
            }
        
        cout << "Ordenamiento ascendente "<<endl;
        for (int pos=0;pos <largo_matriz;pos++)
            cout <<matriz_numeros[pos]<<" ";
        
        getch();

        int matriz_descendente[largo_matriz];

        for (int pos=largo_matriz-1; pos>=0; pos--)
            matriz_descendente[pos]=matriz_numeros[pos];

        cout << matriz_descendente<<endl;

        getch();
        
        cout << "Matriz descendente : "<<endl;
        for (int pos = 0; pos<largo_matriz;pos++)
            cout <<matriz_descendente[pos]<<" ";
            
        return 0;
    }


