#include <iostream>

#define borrar system("cls")

using namespace std;

// zona de declaraciones usadas
int sumar(int n1, int n2);
int restar(int n1, int n2);
int multiplicar(int n1, int n2);
float dividir(float n1, float n2);
void saludar();

int main(){ 

    int num1, num2;
    char op;
    borrar;

    saludar();

    cout << "ingrese 1er numero: ";cin >> num1;
    cout << "ingrese 2do numero: ";cin >> num2;
    cout << "ingrese opeador (+ - * /): "; cin >> op;
    switch (op){
        case '+':
            cout << num1 << " + " << num2 << " = " << sumar(num1, num2);
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << restar(num1, num2);
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << multiplicar(num1, num2);
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << dividir(num1, num2);
            break;

        default:
            break;
    }

    return 0;
}

int sumar(int n1, int n2)
    { return n1+n2; }

int restar(int n1, int n2)
    { return n1-n2; }

int multiplicar(int n1, int n2)
    { return n1*n2; }

float dividir(float n1, float n2)
    { return n1/n2; }

void saludar(){
        borrar;
        cout << "bienvenido a mi 1er calculadora en c++" << endl;  
        system("pause");
    }