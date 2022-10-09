// Dado un vector de caracteres, ordenarlo albábeticamente.

// Language: cpp

#include <iostream>
#include <conio.h>

using namespace std;
#define clear system("cls")

int main()
    {
        char matriz_char []= {'j','z','r','t','h','x','p','u','a','d'};

        int cant_caracteres = sizeof(matriz_char) / sizeof(char);
        int saltos = cant_caracteres /2;
        int pos, aux, cont = 0;
        
        for (int i = 0; i < cant_caracteres; i++)
            {
                for (int j = 0; j < cant_caracteres; j++)
                    {
                        if (matriz_char[i] < matriz_char[j])
                            {
                                aux = matriz_char[i];
                                matriz_char[i] = matriz_char[j];
                                matriz_char[j] = aux;
                            }
                    }
            }
        cout << "Matriz ordenada: "<<endl;
        for (int i=0; i<cant_caracteres; i++)
            cout << matriz_char[i] << " ";
        cout << endl;
        cout << "Cantidad de intercambios: "<<cont<<endl;
        getch();

    }