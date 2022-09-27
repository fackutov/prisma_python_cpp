// escribir un programa que solicite numeros y que los agregue a un vector, luego debera mostrar el vector inverso y mostrar el valor mas grande

#include<iostream>
#include <conio.h>
#include <time.h>

#define borrar system ('cls')

using namespace std;

int main(){

    int vector[100];
    int numero, cantidad, numeroMayor = 0;
    cout << "Deme un numero para el tamanio del vector: "; cin >> cantidad;

    for (int pos=0; pos < cantidad; pos ++){
        cout <<"Deme un numero a agregar: "; cin >> numero; vector[pos] = numero;
    }

    for (int pos=cantidad -1; pos >= 0; pos--){
        if (vector[pos] > numeroMayor)
            numeroMayor = vector[pos];
              
        cout << pos << " - " << vector[pos] << endl;
    }
    cout << "El numero mas grande es: " << numeroMayor << endl;
    cout << "\n";

    return 0;
}
