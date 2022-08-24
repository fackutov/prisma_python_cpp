// dado dos numeros, saber el resto de una division
// si el resto de una div == 0, es par

// dado un n umero solicitado al usuario responder si es par o no

#include <iostream>

#define borrar system("cls")

using namespace std;

int main(){

    int num1;
    borrar;
    cout << "deme un numero: "; cin >> num1;

    if ( num1 % 2 == 0)
        {
           cout << num1 << " es un numero par " << endl;
        }
    else
        {
            cout << num1 << " es un numero impar " << endl;
        }   

    return 0;
}

