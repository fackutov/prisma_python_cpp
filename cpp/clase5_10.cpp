#include <iostream>
#include <conio.h>
#include <cstring>

#define clear system("cls")

using namespace std;
#define MAX_NOMBRE 20

int main(){

    int id;
    char nombre[MAX_NOMBRE];
    string apellido;

    clear;
    cout << "ingrese Id: "; cin >> id;
    cin.ignore();
    cout << "Deme su nombre: "; cin.getline(nombre, MAX_NOMBRE); 
    cout << "Deme su apellido: "; getline(cin, apellido);

    clear;
    cout << "Id ingresado       : " << id << endl;
    cout << "Nombre ingresado   : " << nombre << endl;
    cout << "Apellido ingresado : " << apellido << endl;
    getch();

    return 0;
} 