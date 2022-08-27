#include <iostream>

#define borrar system('cls')

using namespace std;

int main(){


    int num1, num2, suma, resta, multiplicacion;
    double division;

    cout << "deme un numero: "; cin >> num1;
    cout << "deme otro numero: "; cin >> num2;
    cout << "\n";

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1/num2;

    cout <<num1 << " + " <<num2 << " = "<<suma <<endl;
    cout <<num1 << " - " <<num2 << " = "<<resta <<endl;
    cout <<num1 << " * " <<num2 << " = "<<multiplicacion <<endl;
    cout <<num1 << " / " <<num2 << " = "<<division <<endl;

    return 0;
}

