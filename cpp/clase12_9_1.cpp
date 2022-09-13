#include <iostream>

#define borrar system("cls")

using namespace std;

int main(){ 

        // realizar las tablas de multiplicar del 1 al 10

        int num1, num2;    

        for(num1 = 1; num1 <= 10; num1++){
            for(num2 = 1; num2 <= 10; num2++){
               cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
            } 
            cout << endl;          
        }

        return 0;
    }