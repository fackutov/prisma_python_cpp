/* uso de while

num = 1

mientras (num <=10)
    mostrame el numero

    num = num +1

while (condicion true)

    {
        cuwerpo del while
    }
        
si el cuerpo del while tiene una sola linea los {} no son necesarios.

*/


#include<iostream>

#define borrar system('cls')

using namespace std;

int main(){

    int num = 1;

    // desarrollar un algoritmo que imprima del 1 al 10

    while (num <= 10){
        cout << num << endl;
        num ++;
    }
        


    return 0;
}