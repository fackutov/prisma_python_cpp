// vectores
// vectores unidireccionales (arrays)
// es una estructura de elementos de misma naturaleza que se ubican en sectores consecutivos de la memoria
// todo vector o array es ordenado

#include <iostream>
#include <conio.h>
#include <time.h>

#define borrar system("cls")

using namespace std;


int main(){

    int pos;
    int largo_vector;
    int vector_numeros[5] = {2,5,7,8,1};  
    largo_vector = sizeof(vector_numeros)/sizeof(int);
    borrar;
    cout << "La cantidad de elementos es: " << largo_vector << endl;
    getch();
    //recorrer ese vector
    for (int pos = 0; pos < largo_vector; pos ++){
        cout << vector_numeros[pos]<< " ";
    }

    return 0;
} 