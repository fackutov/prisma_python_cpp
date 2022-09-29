#include <iostream>

#define borrar system("cls")

using namespace std;

int main(){ 

    int vector_1[4] = {1,2,3,4};
    int vector_2[] = {7,8,9,10};
    int largoVector1 = sizeof(vector_1)/sizeof(int);
    int largoVector2 = sizeof(vector_1)/sizeof(int);

    cout << "este vector tiene" << largoVector1 << "elementos" <<endl;
    cout << "este vector tiene" << largoVector2 << "elementos" <<endl;

    cout << "\n";
    cout << "vector_1: " << endl;
    for (int pos=0; pos < largoVector1; pos++)
        cout << vector_1[pos] << " ";
    cout << "\n";

    cout << "vector_2: " << endl;
    for (int pos=0; pos < largoVector2; pos++)
        cout << vector_2[pos] << " ";
    cout << "\n";

    return 0;
}