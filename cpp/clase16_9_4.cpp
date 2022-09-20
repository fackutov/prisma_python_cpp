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
        if (vector[pos] % 2 == 1)
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


/*
void desplegar_impares(int vector[], int largo);
int sumar_valores (int vector[], int largo);

int main(){
    int largo_vector;
    int vector_num[] = {3,5,7,1,8,12,16,24,41,56};

    largo_vector = sizeof(vector_num)/sizeof(int);
    borrar;
    cout << "la cantidad de elementos es: "<< lago_vector<< endl;
    desplegar_impares(vector_num, largo_vector);
    cout << "la suma de los valores es: "<< sumar_valores(vector_num, largo_vector)<< endl;

    getch();

    return 0;
}

void desplegar_impares (int vector[], int largo){
    for (int pos=0; pos < largo; pos++){
        if (vector[pos] % 2 != 0)
            cout << vector[pos] << " ";
    }
}

int sumar_valores(int vector[], int largo){
    int suma = 0;
    for (int pos=0; pos < largo; pos++){
        suma = suma + vector[pos];
    }
    return suma;
}