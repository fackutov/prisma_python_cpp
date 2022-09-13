#include <iostream>

#define borrar system("cls")

using namespace std;

int suma(int num1,int num2){
    int sumar = num1 + num2;
    return sumar;
}

int resta(int num1,int num2){
    int restar = num1 - num2;
    return restar;
}

int multiplicacion(int num1,int num2){
    int multiplicar = num1 * num2;
    return multiplicar;
}

int division(int num1,int num2){
    int dividir = num1 / num2;
    return dividir;
}

int main(){ 

        int numero1, numero2; 
        char operador;

        cout << "ingrese primer numero: "; cin >> numero1;
        cout << "ingrese primer numero: "; cin >> numero2;
        cout << "ingrese un operador (+ - * /): "; cin >> operador;

        if (operador == '+')
            cout << numero1 << " + " << numero2 << " = " << suma(numero1, numero2);
        
        if (operador == '-')
            cout << numero1 << " - " << numero2 << " = " << resta(numero1, numero2);

        if (operador == '*')
            cout << numero1 << " x " << numero2 << " = " << multiplicacion(numero1, numero2);

        if (operador == '/')
            cout << numero1 << " / " << numero2 << " = " << division(numero1, numero2);

        else {
            cout << "Caracter no valido" << endl;
        }
            
        return 0;
    }

/* resolucion del profe en clase

#include <iostream>

#define borrar system("cls")

using namespace std;

double operar (int num1, int num2, char op) {
    double resultado
    switch (op){
        case '+':
            resultado = num1 + num2;
            break;

        case '-':
            resultado = num1 - num2;
            break;

        case '*':
            resultado = num1 * num2;
            break;

        case '/':
            resultado = num1 / num2;
            break;

        default:
            return 0;
    }
    return resultado;
}


int main(){

    int v1, v2;
    char operador;

    cout << "ingrese primer numero: "; cin >> v1;
    cout << "ingrese primer numero: "; cin >> v2;
    cout << "ingrese un operador (+ - * /): "; cin >> operador;

    double result = operar(v1, v2, operador);
    cout << v1 << " " << operador << " " << v2 << " = " << result << endl;

    return 0;
}


*/