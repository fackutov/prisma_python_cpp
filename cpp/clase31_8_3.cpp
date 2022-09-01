#include <iostream>
#include <cstring>

#define borrar system('cls')

using namespace std;


int main(){
    string nombre = "facundo";
    string apellido = "tovagliare";
    int cant_caracteres = 0;

    string nom_completo = nombre + " " + apellido;

    cout << nom_completo << endl;

    int largo_nombre = nom_completo.length();

    cout << "el nombre tiene " << largo_nombre << " letras" << endl;

    return 0;
}
// no lo escucho bien

