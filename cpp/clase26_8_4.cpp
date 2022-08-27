#include<iostream>

#define borrar system ('cls')

using namespace std;

int main (){

    int num1, num2 = 100;

    while(num1 <= num2){

        cout << num1 << " ";
        num1 ++;

        //'quebrar' una condicion de while

        if (num1 == 20)
            break;
    }
}
