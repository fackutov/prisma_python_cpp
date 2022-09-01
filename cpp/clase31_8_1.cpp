// escribir un programa que pida al usuario un numero de 5 digitos y luego mostrarlos separados por un espacio


#include <iostream>

#define borrar system('cls')

using namespace std;

// resolucion mia (no logre separar los digitos con espacios)

int main(){

    int num;

    cout << "deme un numero de 5 digitos: "; cin >> num;

    if (num >= 10000 and num <= 99999)  
            cout << num <<endl;
    else
        cout << "el numero debe de contener 5 digitos" << endl;


    return 0;
}

/*

// resolucion del profe

int main() {

    char numero[5]

    cout << "ingrese un numero de 5 digitos: "cin >> numero;
    int largo_numero = sizeof(numero)/sizeof(char)
    cout << "el largo del numero es: " << largo_numero << endl;

    for (int i = 0; i < largo_numero; i++)
        cout << numero[i]<< " ";

    return 0;    
}

*/





/*

// solucion para strings

int main() {

    string numero;

    cout << "ingrese un numero de 5 digitos: " getline(cin,numero)
    int largo_numero = numero.lenght();
    cout << "el largo del numero es: " << largo_numero << endl;

    for (int i = 0; i < largo_numero; i++)
        cout << numero[i]<< " ";

    return 0;    
}

*/