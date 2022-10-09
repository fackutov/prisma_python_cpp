/* desarrollar un programa que construya una estructura "alumno"
cada alumno se identifica por un numero unico, nombre, apellido, edad, nota*/

#include <iostream>
#include <conio.h>
#include <cstring>

#define clear system("cls")

using namespace std;

struct alumno{
    int pk;
    string nombre;
    string apellido;
    int edad;
    int nota;
} Facundo, Joel, Alejandro, Tamara, Caballo ;

int main(){

    Facundo.pk = 01;
    Facundo.nombre = "Facundo";
    Facundo.apellido = "Tovagliare";
    Facundo.edad = 28;
    Facundo.nota = 10;

    Joel.pk = 02;
    Joel.nombre = "Joel";
    Joel.apellido = "Perez";
    Joel.edad = 20;
    Joel.nota = 9;

    Alejandro.pk = 03;
    Alejandro.nombre = "Alejandro";
    Alejandro.apellido = "Benzo";
    Alejandro.edad = 35;
    Alejandro.nota = 5;

    Tamara.pk = 04;
    Tamara.nombre = "Tamara";
    Tamara.apellido = "De los Santos";
    Tamara.edad = 65;
    Tamara.nota = 2;

    Caballo.pk = 05;
    Caballo.nombre = "Caballo";
    Caballo.apellido = "Verde";
    Caballo.edad = 1580;
    Caballo.nota = 11;

    cout << "\n";
    cout << "Alumno: " << Facundo.nombre << " " << Facundo.apellido << ", tiene " << Facundo.edad << " anios y su nota es de : " << Facundo.nota << endl;

    cout << "Alumno: " << Joel.nombre << " " << Joel.apellido << ", tiene " << Joel.edad << " anios y su nota es de : " << Joel.nota << endl;

    cout << "Alumno: " << Alejandro.nombre << " " << Alejandro.apellido << ", tiene " << Alejandro.edad << " anios y su nota es de : " << Alejandro.nota << endl;

    cout << "Alumno: " << Tamara.nombre << " " << Tamara.apellido << ", tiene " << Tamara.edad << " anios y su nota es de : " << Tamara.nota << endl;

    cout << "Alumno: " << Caballo.nombre << " " << Caballo.apellido << ", tiene " << Caballo.edad << " anios y su nota es de : " << Caballo.nota << endl;
    cout << "\n";

    return 0;
}