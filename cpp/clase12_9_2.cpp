#include <iostream>

#define borrar system("cls")

using namespace std;

string nombre_completo(string nom, string ape){
    string nom_completo = nom+' '+ape;
    return nom_completo;
}

void nombre_completo2(string nom, string ape){
    cout << "hola como estas "<< nom << " " << ape << endl;
}

    
int main(){ 

    // funciones: es un bloque de codigo que puede o no recibir valores y puede o no retornar resultados
    // a los valores que reciben una funcion se definen dentro de los parentesis y se llaman parametros

    /* tipo_devolucion nombre_funcion(parametros)
                {
                    cuerpo de la funcion
                    return valor_retorno
                }
    */

        string nombre, apellido;

        cout << "Deme su nombre: "; getline(cin,nombre);
        cout << "Deme su apellido: "; getline(cin,apellido);
        cout << "hola como estas " << nombre_completo(nombre,apellido)<< endl;
        nombre_completo2(nombre,apellido);

    return 0; 
    }