
#include <iostream>
#include <cstring>

using namespace std;

#define borrar system("cls")

int main(){

    string palabra;
    borrar;
    cout << "ingrese una palabra: "; getline(cin, palabra);

    /*

    // realizar un programa que capitalize una palabra

    for (int pos = 0; pos < palabra.length(); pos++)
        if (pos == 0)
            palabra[pos] = toupper(palabra[pos]);
        else
            palabra[pos] = towlower(palabra[pos]);

    cout << "la palabra capitalizada es: " << palabra << endl;

    //toupper(caracter) --> transforma a mayusculas el caracter
    //toulower(caracter) --> transforma a minuscula el caracter


    // realizar un programa que ponga una palabra en mayusculas

    for (int pos = 0; pos < palabra.length(); pos++)        
        palabra[pos] = toupper(palabra[pos]);
        
    cout << "la palabra en mayusculas es: " << palabra << endl;
    */

    //realizar una rutina que haga un title (primer letra de cada palabra en mayus y todo en minuscula)

    for (int pos = 0; pos < palabra.length(); pos++);
        if(pos == 0)
            palabra[pos] = toupper(palabra[pos]);
        else
            if (palabra[pos] == ' ')
                {
                    pos ++;
                    palabra[pos]=toupper(palabra[pos]);
                }
                else
                    palabra[pos] = tolower(frase[pos]);

    cout << "la palabra con title es: " << palabra << endl;

    return 0;
}