//Media Escreva um programa que lê três números inteiros e imprime a média aritmética deles.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n1, n2, n3, media;
    cin >> n1 >> n2 >> n3;
    media = (n1 + n2 + n3) / 3;
    cout << media << endl;
    
    return 0;
}