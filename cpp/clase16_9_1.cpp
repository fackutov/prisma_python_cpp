#include <iostream>
#include <conio.h>
#include <time.h>

#define borrar system("cls")

using namespace std;

// sobrecarga de funciones
// c++ usara la funcion correspondiente al tipo de variable enviada como parametro

int cuadrado(int num);
double cuadrado(double num);

int main(){

    int numero;
    double numero_d;

    cout << "Deme un numero entero: "; cin >> numero;
    cout << "El numero " << numero << " al cuadrado es: " << cuadrado(numero) << endl;

    getch();

    cout << "Deme un numero decimal: "; cin >> numero_d;
    cout << "El numero " << numero_d << " al cuadrado es: " << cuadrado(numero_d);


    return 0;
} 

int cuadrado(int num){
    int resultado = num * num;
    return resultado;
} 

double cuadrado(double num){
    double resultado = num * num;
    return resultado;
} 