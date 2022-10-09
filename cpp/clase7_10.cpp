/* Desarrollar un programa muestre info de empleados

nombre, apellido, edad, salario

debe de ingresar un amximo de 100 empleados
*/

#include <iostream>
#include <conio.h>
#include <string.h>


using namespace std;

#define MAX_EMPLEADOS 100
#define clear system("cls")

struct empleado
{
    string nombre;
    string apellido;
    int edad;
    int salario;
};

double calcular_promedio_edad(empleado empleados[MAX_EMPLEADOS], int cant_empleados);
double calcular_promedio_salario(empleado empleados[MAX_EMPLEADOS], int cant_empleados);

int main()
    {
        
        empleado empleados[MAX_EMPLEADOS];

        int nro_empleado = 1;
        int cant_empleado = 0;
        bool termine = false;
        char respuesta;
        string nom_empleado, ape_empleado;
        int edad_empleado, nota_empleado;

        while (true)
            {
                clear;
                cout <<"Nombre del empleado   : "; getline(cin, nom_empleado);
                cout <<"Apellido del empleado : "; getline(cin,ape_empleado);
                cout <<"Ingrese su edad     : ";cin >> edad_empleado;
                cin.ignore();
                cout <<"Ingrese su salario     : ";cin >> nota_empleado;
                cin.ignore();
                cout <<"\n";
                clear;
                cout << "Empelado a ingresar: "<<endl;
                cout << "Nombre   : "<<nom_empleado<<endl;
                cout << "Apellido : "<<ape_empleado<<endl;
                cout << "Edad     : "<<edad_empleado<<endl;
                cout << "Salario     : "<<nota_empleado<<endl;
                cout << "\n";
                cout << "Confirma ingresar este empleado ? (s/n) ";cin >> respuesta;
                cin.ignore();
                respuesta = toupper(respuesta);
                if (respuesta == 'S')
                    {
                        empleados[nro_empleado].nombre   = nom_empleado;
                        empleados[nro_empleado].apellido = ape_empleado;
                        empleados[nro_empleado].edad     = edad_empleado;
                        empleados[nro_empleado].salario     = nota_empleado;

                        nro_empleado ++;
                        cant_empleado ++;
                    }    
                cout <<"Desea agregar otro empleado ? (s/n) ";cin >> respuesta;
                cin.ignore();
                respuesta = toupper(respuesta);
                if (respuesta != 'S')
                    break;
            }

            clear;
            cout << "Datos de Alumnos ingresados:    Cantidad ingresada: "<<cant_empleado<<endl;
            for (int nro = 1; nro <=cant_empleado ;nro++)
                {
                    cout << "Nombre   : "<<empleados[nro].nombre<<endl;
                    cout << "Apellido : "<<empleados[nro].apellido<<endl;
                    cout << "Edad     : "<<empleados[nro].edad<<endl;
                    cout << "Su Nota  : "<<empleados[nro].salario<<endl;
                    cout <<"--------------------"<<endl;
                }

            double promedio_edad = calcular_promedio_edad(empleados, cant_empleado);
            cout << "El promedio de edad es: " << promedio_edad << endl; 

        
        return 0;
    }

double calcular_promedio_edad(empleado empleados[MAX_EMPLEADOS], int cant_empleados){
    int suma_edad = 0;
    for (int pos = 0; pos <= cant_empleados; pos++)
        suma_edad = suma_edad + empleados[pos].edad;

    double promedio_edad = (suma_edad/cant_empleados);

    return promedio_edad;
}  
