// escribir un programa que solicite numeros y que los agregue a un vector, luego debera mostrar los numneros ingresados a ese vector y su posicion

#include<iostream>
#include <conio.h>
#include <time.h>

#define borrar system ('cls')

using namespace std;

int main(){

    int vector[100];
    int numero, cantidad;
    cout << "Deme un numero para el tamanio del vector: "; cin >> cantidad;

    for (int pos=0; pos < cantidad; pos++){
        cout <<"Deme un numero a agregar: "; cin >> numero; vector[pos] = numero;
    }

    for (int pos=0; pos<cantidad; pos++)
        cout << pos << " - " << vector[pos] << endl;

    cout << "\n";

    return 0;
}