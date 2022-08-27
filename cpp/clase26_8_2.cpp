// imprimir todos los numeros impares

#include<iostream>

#define borrar system ('cls')

using namespace std;

int main(){

    int num = 1;

    while (num <= 40){

        if (num % 2 == 1)

           cout << num << " ";
        
        num ++;
    }

    return 0;
}