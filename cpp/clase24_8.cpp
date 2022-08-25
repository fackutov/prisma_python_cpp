
#include <iostream>

#define borrar system("cls")

using namespace std;

int main(){ 

    int valor_int ;
    double valor_float;

    cout << "deme un entero: "; cin >> valor_int;
    cout << "deme un numero decimal: "; cin >> valor_float;

    cout << "el valor entero es: " << valor_int <<endl;
    cout << "el valor decimal es: " << valor_float <<endl;

    return 0;
}