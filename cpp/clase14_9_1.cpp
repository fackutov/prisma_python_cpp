// seguimos con funciones basicas
// realizar un  dialogo entre el usuario y la computadora

#include <iostream>
#include <cstring>

#define borrar system("cls")

using namespace std;

void saludar();
void error();
void dialogo();

int main(){

    string nombre;

    saludar();
    cout << "cual es tu nombre: "; getline(cin,nombre);

    if ( nombre == "joel" )
        error();            
        
    else if ( nombre == "tamara" )
        error();
        
    else
        dialogo();      
    
    return 0;
}

void saludar(){

    borrar;
    cout << "Hola usuario" << endl;
}

void error(){

    cout << "\n";
    cout << "Error amenaza para el sistema detectada" << endl;
    cout << "Ese nombre es de pecadores" << endl;
    cout << "\n";
}

void dialogo(){

    cout << "\n";
    cout << "bienvenido " << endl;
    cout << "Espero tengas un muy bonito dia" << endl;
    cout << "\n";
}