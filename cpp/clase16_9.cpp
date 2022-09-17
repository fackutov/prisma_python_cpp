// realizar un program,a que pida al usuario un numero hasta que ponga 0
// cuando termine, debe informar cuantos numeros se ingreso
// do while

#include <iostream>
#include <conio.h>
#include <time.h>

#define borrar system("cls")

using namespace std;

int main(){

    int numero, cantidad = 0;
    bool termine = false;

    borrar;

    while(!termine){
        cout << "Deme un numero distinto de 0 (0 para salir): "; cin >> numero;
        cantidad ++;
        if (numero == 0)
            termine = true;
    }
    cout << "la cantidad de numeros ingresados es de: "<< cantidad << endl;

    getch();

    cantidad  = 0;
    termine = false;
    
    do{
        cout << "Deme un numero distinto de 0 (0 para salir): "; cin >> numero;
        cantidad ++;

    } while(!termine);
    
    cout << "la cantidad de numeros ingresados es de: "<< cantidad << endl;

    return 0;
}