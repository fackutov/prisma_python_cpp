// realizar un programa que pida al usuario numeros hasta que ponga 0
// cuando termine debe informar  cuantos numeros se ingreso, la suma de los numeros ingresados y el promedio de los numeros 


#include<iostream>
#include <conio.h>
#include <time.h>

#define borrar system ('cls')

using namespace std;

int main(){

    int numero, cantidad = 0, suma = 0;
    double promedio;

    do{
        cout << "Deme un numero distinto de 0 (0 para salir): "; cin >> numero;
        cantidad +=1;
        suma = suma + numero;

    } while(numero != 0);

    promedio = suma/(cantidad -1);

    cout << "la cantidad de numeros ingresados es de: "<< cantidad - 1 << endl;
    cout << "la suma de los numeros ingresados es de: "<< suma << endl;
    cout << "el promedio de los numeros ingresados es de: "<< promedio << endl;

    return 0;
}

