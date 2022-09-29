#include <iostream>
#include <conio.h>
#include <cstring>

#define borrar system("cls")

using namespace std;

string nombre_completo(string nombre, string apellido);

int main(){ 

    string nombre, apellido;

    cout << "deme su nombre: "; getline(cin,nombre);
    cout << "deme su apellido: "; getline(cin,apellido);

    int largo_nombre = nombre.length();
    int largo_apellido = apellido.length();

    getch();
    borrar;

    for (int pos=0; pos < largo_nombre; pos++)
        cout << nombre[pos] << " ";

    cout << "\n";

    for (int pos=0; pos < largo_apellido; pos++)
        cout << apellido[pos] << " ";
    
    cout << "\n";
  
    cout << nombre_completo(nombre, apellido) << endl;

    return 0;  
}

string nombre_completo(string nombre, string apellido)
// Capitalizar nombre (mas de un nombre) y mas de un apellido
    {
        string nombre_completo;
        int largo_nombre = nombre.length();
        int largo_apellido = apellido.length();
        int pos = 0;
        for (pos=0; pos<largo_nombre; pos++)
            if (pos == 0)
                nombre[pos] = toupper(nombre[pos]);
            else if (nombre[pos] == ' ')
                nombre[pos+1] = toupper(nombre[pos+1]); 
            else
                nombre[pos+1] = tolower(nombre[pos+1]);

        for (pos=0; pos<largo_apellido; pos++)
            if (pos == 0)
                    apellido[pos] = toupper(apellido[pos]);
            else if (apellido[pos] == ' ')
                apellido[pos+1] = toupper(apellido[pos+1]);
            else
                apellido[pos+1] = tolower(apellido[pos+1]);
                
        nombre_completo = nombre + " " + apellido;

        return nombre_completo;
    }
