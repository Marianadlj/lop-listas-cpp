//Escreva um programa que lê três números inteiros distintos e imprime o valor do número que não é nem o maior nem o menor.

#include <iostream>

using namespace std;

int main ()
{
    int x, y, z; //declarar
    cin >> x >> y >> z; //ler
    if ((x > y && x < z) || (x < y && x > z)) { //testar a condição de x sendo o intermedio 
        cout << x << endl;
    } else if ((y > x && y < z) || (y < x && y > z)) { //testar a condição de y sendo o intermedio
        cout << y << endl;
    } else { //condição de z sendo o intermedio 
        cout << z << endl;
    }
    
    return 0; //precisa sempre colocar 
}