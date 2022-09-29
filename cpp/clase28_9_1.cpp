#include <iostream>
#include <conio.h>

#define borrar system("cls")

using namespace std;

int main(){ 

    char nombre[8] = "caballo"; // '\0' # si es una cadena de caracteres hay que agregar uno mas porque agrega un \0 al final de la cadena de caracteres para indicar que ahi termina la linea
    char apellido[9] = "napoleon";

    string palabra;

    int largo_nombre = sizeof(nombre) / sizeof(char);
    int largo_apellido = sizeof(apellido) / sizeof(char);

    cout << "su nombre es: " << nombre << endl;
    cout << "su apellido es: " << apellido << endl;

    cout << "\n";
    cout << "nombre: " << endl;
    for (int pos=0; pos < largo_nombre; pos++)
        cout << nombre[pos] << " ";
    cout << "\n";

    cout << "apellido: " << endl;
    for (int pos=0; pos < largo_apellido; pos++)
        cout << apellido[pos] << " ";
    cout << "\n";

    getch();
    borrar;

    palabra = "triangulo";

    cout << "su nombre es: " << nombre << endl;
    cout << "su apellido es: " << apellido << endl;
    cout << "la palabra es: " << palabra << endl;

    return 0;
}