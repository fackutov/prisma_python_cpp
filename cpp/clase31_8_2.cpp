// escribir un programa que dado un numero de 5 digito me los tranforme a string para luego separarlos con un guion

#include <iostream>
#include <cstring>

#define borrar system('cls')

using namespace std;

int main() {

    int numero_solicitado;
    string numero_string;
    string numero_separado;
    int largo_numero;

    cout << "ingrese un numero de 5 digitos: "; cin >> numero_solicitado;
    numero_string = to_string(numero_solicitado);

    largo_numero = numero_string.length();

    cout << "el largo del numero es: " << largo_numero << endl;

    for (int i = 0; i < largo_numero; i++)
            cout << numero_string[i]<< " ";
        

    return 0;    
}

