/* dado 2 numero solicitados al usuario
    imprimir todos los numeros que hay entre ellos

    si el primer numero es menor al segundo la impresion sera ascendente
    caso contrario la impresion sera descendente

*/


#include <iostream>

#define borrar system('cls')

using namespace std;

int main(){

    int num1, num2;

    cout << "deme un numero: "; cin >> num1;
    cout << "deme otro numero: "; cin >> num2;
    cout << "\n";

    if (num1 < num2)
        while (num1 < num2){
            cout << num1 << " ";
            num1 ++;
        }
    else
        while ( num1 > num2){
            cout << num2 << " ";
            num2--;
        }

    return 0;
}
