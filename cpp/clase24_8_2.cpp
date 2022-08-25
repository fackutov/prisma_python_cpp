#include <iostream>

#define borrar system("cls")

using namespace std;

int main(){ 

    //string nombre; ----> forma incorrecta

    char  letra = 'a';
    char nombre[]="";

    int cant_caracteres;

    cout << "la letra es la " << letra <<endl;
    cout << "la letra ocupa " << sizeof(letra)<< " bytes"<<endl;
    cout <<"\n";
    cout << "deme su nombre: "; cin >> nombre;
    cout << "su nombre es : " << nombre <<endl;
    cant_caracteres = sizeof(nombre) / sizeof(char);
    cout << "su nombre tiene " << cant_caracteres << " letras" << endl;

    return 0;
}