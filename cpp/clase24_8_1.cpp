#include <iostream>

#define borrar system("cls")

using namespace std;

int main(){ 

    int valor_int, valor_int2, suma ;
    double valor_float;

    cout << "deme un entero: "; cin >> valor_int;
    cout<<"\n";
    cout << "deme un numero decimal: "; cin >> valor_float;

    cout << "el valor entero es: " << valor_int << endl;
    cout << "el valor decimal es: " << valor_float << endl;

    valor_int2 = 'a';
    suma = valor_int + valor_int2;
    cout<<"\n";
    cout << "la suma de "<<valor_int <<" + " << valor_int2 << " = "<< suma;

    return 0;
}