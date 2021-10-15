//Escreva um programa lê um número inteiro e imprime a mensagem Menor que 10 caso esse número seja menor do que dez, e imprime o quadrado desse número caso contrário.​

#include <iostream>

using namespace std;

int main (){
    int x;
    cin >> x;
    if(x >= 10){
        x = x * x;
        cout << x << endl;
    } else {
        cout << "Menor que 10" << endl;
    }

    return 0;
}