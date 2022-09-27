// completar un vector uni-dimensional con numeros aleatorios

#include <iostream>
#include <conio.h>
#include <time.h>

#define MAXIMO 10
#define borrar system ('cls')

using namespace std;

int main(){

    int vector[MAXIMO];
    int largoVector = sizeof(vector) / sizeof(vector[0]);

    for (int pos=0; pos < largoVector ; pos ++)
        vector[pos] = rand()%100;
    
    
    for (int pos=0; pos < largoVector; pos ++)
        cout << vector[pos] << " - ";

    cout << "\n";

    return 0;
}

