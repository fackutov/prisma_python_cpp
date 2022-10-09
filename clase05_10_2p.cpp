/* Desarrollar un programa que construya
 una estructura "alumno"
 Cada alumno se identifica por un numero unico
 nombre, apellido, edad, nota

Agregar varios alumnos, luego mostrarlos
*/

#include <iostream>
#include <conio.h>
#include <string.h>


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
        string nom_alumno, ape_alumno;
        int edad_alumno, nota_alumno;

        while (true)
            {
                clear;
                cout <<"Nombre del Alumno   : "; getline(cin, nom_alumno);
                cout <<"Apellido del Alumno : "; getline(cin,ape_alumno);
                cout <<"Ingrese su edad     : ";cin >> edad_alumno;
                cin.ignore();
                cout <<"Ingrese su Nota     : ";cin >> nota_alumno;
                cin.ignore();
                cout <<"\n";
                clear;
                cout << "Alumno a ingresar: "<<endl;
                cout << "Nombre   : "<<nom_alumno<<endl;
                cout << "Apellido : "<<ape_alumno<<endl;
                cout << "Edad     : "<<edad_alumno<<endl;
                cout << "Nota     : "<<nota_alumno<<endl;
                cout << "\n";
                cout << "Confirma ingresar este alumno ? (s/n) ";cin >> respuesta;
                cin.ignore();
                respuesta = toupper(respuesta);
                if (respuesta == 'S')
                    {
                        alumno[nro_alumno].nombre   = nom_alumno;
                        alumno[nro_alumno].apellido = ape_alumno;
                        alumno[nro_alumno].edad     = edad_alumno;
                        alumno[nro_alumno].nota     = nota_alumno;

                    }    
                cout <<"Desea agregar otro alumno ? (s/n) ";cin >> respuesta;
                cin.ignore();
                respuesta = toupper(respuesta);
                if (respuesta != 'S')
                    break;
                else
                    {
                        nro_alumno ++;
                        cant_alumnos++;
                    }
            }

            clear;
            cout << "Datos de Alumnos ingresados:    Cantidad ingresada: "<<cant_alumnos<<endl;
            for (int nro = 1; nro <=cant_alumnos+1;nro++)
                {
                    cout << "Nombre   : "<<alumno[nro].nombre<<endl;
                    cout << "Apellido : "<<alumno[nro].apellido<<endl;
                    cout << "Edad     : "<<alumno[nro].edad<<endl;
                    cout << "Su Nota  : "<<alumno[nro].nota<<endl;
                    cout <<"--------------------"<<endl;
                }
        
        return 0;
    }
