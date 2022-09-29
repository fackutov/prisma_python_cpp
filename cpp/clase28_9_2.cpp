#include <iostream>
#include <conio.h>
#include <cstring>

#define borrar system("cls")

using namespace std;

int main(){ 

    string nombre, apellido;

    nombre = "Facundo";
    apellido = "Tovagliare";

    int largo_nombre = nombre.length();
    int largo_apellido = apellido.length();

    cout << "El largo del nombre es: "<< largo_nombre << endl;
    cout << "El largo del apellido es: "<< largo_apellido << endl;

    getch();
    borrar;

    for (int pos=0; pos < largo_nombre; pos++)
        cout << nombre[pos] << " ";

    cout << "\n";

    for (int pos=0; pos < largo_apellido; pos++)
        cout << apellido[pos] << " ";

    return 0;
}