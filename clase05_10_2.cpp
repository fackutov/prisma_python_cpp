/* Desarrollar un programa que construya
 una estructura "alumno"
 Cada alumno se identifica por un numero unico
 nombre, apellido, edad, nota

Agregar varios alumnos, luego mostrarlos
*/

#include <iostream>
#include <conio.h>

using namespace std;

#define MAX_ALUMNOS 100
#define clear system("cls")

struct alumnos
{
    string nombre;
    string apellido;
    int edad;
    int nota;
};

int main()
    {
        
        alumnos alumno[MAX_ALUMNOS];

        int nro_alumno = 1;
        int cant_alumnos = 0;
        bool termine = false;
        char respuesta;

        while (true)
            {
                clear;
                cout <<"Nombre del Alumno   : ";getline(cin,alumno[nro_alumno].nombre);
                cout <<"Apellido del Alumno : ";getline(cin,alumno[nro_alumno].apellido);
                cout <<"Ingrese su edad     : ";cin >> alumno[nro_alumno].edad;
                cout <<"Ingrese su Nota     : ";cin >> alumno[nro_alumno].nota;
                cout <<"\n";
                cout <<"Desea agregar este alumno ? (s/n)";
                cin >> respuesta;
                cin.ignore();
                respuesta = toupper(respuesta);
                if (respuesta == 'N')
                    {
                        break;
                    }
                else
                    nro_alumno ++;
                    cant_alumnos++;

            }
            clear;
            cout << "Datos de Alumnos ingresados:"<<endl;
            for (int pos = 0; pos <cant_alumnos;pos++)
                {
                    cout << "Nombre   : "<<alumno[pos].nombre<<endl;
                    cout << "Apellido : "<<alumno[pos].apellido<<endl;
                    cout << "Edad     : "<<alumno[pos].edad<<endl;
                    cout << "Su Nota  : "<<alumno[pos].nota<<endl;
                    cout <<"--------------------"<<endl;
                }
        return 0;
    }
