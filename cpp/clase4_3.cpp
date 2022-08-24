#include <iostream>

#define borrar system("cls")

using namespace std;

int main(){

    int num1, num2;
    borrar;
    cout << "deme un numero: "; cin >> num1;
    cout << "deme otro numero: "; cin >> num2;

    if ( num1 > num2 )
        {
            cout << num1 << " es mayor que " << num2<< endl;
        }
    else
        {
            cout << num2 << " es mayor que "<< num1<< endl;
        }   
}