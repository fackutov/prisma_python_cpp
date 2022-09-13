#include <iostream>

#define borrar system("cls")

using namespace std;

int main(){ 

        //switch
        int num1, num2, result; 
        char operador;

        cout << "ingrese primer numero: "; cin >> num1;
        cout << "ingrese primer numero: "; cin >> num2;
        cout << "ingrese un operador (+ - * /): "; cin >> operador;

        switch (operador){
            case '+':
                result = num1 + num2;
                break;

            case '-':
                result = num1 - num2;
                break;
         
            case '*':
                result = num1 * num2;
                break;

            case '/':
                result = num1 / num2;
                break; 
            
            default:
                cout << "No reconosco el operador" <<endl;
        }

        cout << num1 << " " << operador << " " << num2 << " = " << result << endl;

        return 0;
    }