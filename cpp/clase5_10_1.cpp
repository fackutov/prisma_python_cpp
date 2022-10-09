#include <iostream>
#include <conio.h>
#include <cstring>

#define clear system("cls")

using namespace std;
#define MAX_NOMBRE 20

/* uso de estructuras en c++
Una estructura es una coleccion de datos de diferentetipo que se puede acceder y manipular como una unica unidad*/

struct figura{
    int base;
    int altura;
    string color;
} triangulo, rectangulo, cuadrado ;

int areaFigura(int base, int altura);
int areaFiguraTri(int base, int altura);

int main(){

    triangulo.base = 10;
    triangulo.altura = 20;
    triangulo.color = "rojo";

    rectangulo.base = 12;
    rectangulo.altura = 10;
    rectangulo.color = "azul";

    cuadrado.base = 10;
    cuadrado.altura = 20;
    cuadrado.color = "verde";

    cout<< "el triangulo es de color: " << triangulo.color << endl;
    cout<< "el rectangulo es de color: " << rectangulo.color << endl;
    cout<< "el cuadrado es de color: " << cuadrado.color << endl;

    cout << "\n";
    
    cout<< "el area del triangulo es de : " << areaFiguraTri(triangulo.base, triangulo.altura) << endl;

    cout<< "el area del rectangulo es de : " << areaFigura(rectangulo.base, rectangulo.altura) << endl;

    cout<< "el area del cuadrado es de : " << areaFigura(cuadrado.base, cuadrado.altura) << endl;

    return 0;
}

int areaFigura(int base, int altura){
    int area = (base*altura);
}

int areaFiguraTri(int base, int altura){
    int area = (base*altura) / 2;
}