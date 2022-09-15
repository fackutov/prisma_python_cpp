// escribir un programa que pida a la maquina que piense un numero y tengamos qeu adivinarlo

#include <iostream>
#include <conio.h>
#include <time.h>

#define borrar system("cls")

using namespace std;

int main(){

    int numero, num_random, intentos = 0;
    bool acertado = false;

    srand(time(NULL));
    num_random = 1 + rand()%100;

    while (!acertado){
        borrar;
        //cout << "el numero a adivinar es: "<< num_random << endl;
        cout << "deme un numero: "; cin >> numero;
        if (numero != num_random){
            intentos ++;
            if (numero > num_random)
                {
                cout << "el numero es menor" << endl;
                getch();
                }
            else
                {
                cout << "el numero es mayor" << endl;
                getch();
                }
        }
        else
        acertado = true;
    }
    cout << "el numero adivinado es el: "<< num_random << endl;
    cout << "la cantidad d eintentos fue de: " << intentos << endl;

    return 0;
}