//ejercicio
// dado un vector inicializado con los sigyuientes valores: 3,5,7,1,8,12,16,24,41,56
// realizar una funcion que me despliegue los numeros impares y otra que sume todos los valores

#include <iostream>
#include <conio.h>
#include <time.h>

#define borrar system("cls")

using namespace std;

void vector_impar(int vector);
int vector_suma(int vector);

int main(){

    int vector_numeros[] = {3,5,7,1,8,12,16,24,41,56}; 

    cout << "lista numeros impares: " << vector_impar(vector_numeros) << endl;
    cout << "la suma de los numeros es: " << vector_suma(vector_numeros) << endl;

    return 0;
} 


void vector_impar(int vector[]){
    int largo_vector;
    largo_vector = sizeof(vector)/sizeof(int);

    for (int pos = 0; pos < largo_vector; pos ++){
        if (vector[pos] % 2 == 0)
            cout << vector[pos];
    }
}

int vector_suma(int vector[]){
    int largo_vector;
    largo_vector = sizeof(vector)/sizeof(int);
    int total = 0;

    for (int pos = 0; pos < largo_vector; pos ++){
        total = total + vector[pos];
    }
    return total;
}