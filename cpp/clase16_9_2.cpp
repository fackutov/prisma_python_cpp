#include <iostream>
#include <conio.h>
#include <time.h>

#define borrar system("cls")

using namespace std;

// desarrollar una funcion que valide un numero entero

bool validar(int numero);

int main(){

    int numero;

    borrar;
    cout << "Deme un numero entero: "; cin >> numero;
    if (validar(numero))
        cout << "Es un numero valido" << endl;
    else
        cout << "No es un numero valido" << endl;

    return 0;
} 

bool validar(int num){
    if (cin.fail()){
        return false;
    }
    else
        return true;
}