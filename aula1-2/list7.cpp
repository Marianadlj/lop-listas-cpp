//Escreva um programa que lê três valores inteiros, que correspodem, respectivamente, aos coeficientes a, b e c, de uma equação do segundo grau a*x^2 + b*x + c. O seu programa deve calcular e mostrar as raízes dessa equação, de acordo com os seguintes critérios:Imprima a mensagem Sem raiz real, caso não existam raízes reais.Se a equação possui uma única raiz, imprima ela somente uma vez.Se a equação possui duas raízes, imprima primero a raiz de menor valor.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, delta;
    float raiz1, raiz2;
    cin >> a >> b >> c;
   
    delta =  pow(b, 2) - 4 * (a * c);
    raiz1 = (- b + sqrt(delta)) / (2 * a);
    raiz2 = (- b - sqrt(delta)) / (2 * a);
    
    if(delta < 0){
        cout << "Sem raiz real" << endl;
    }else if (raiz1 == raiz2){
        cout << fixed << setprecision(1);
        cout << raiz1 << endl;
    } else {
        if(raiz1 < raiz2){
            cout << raiz1 << " " << raiz2 << endl;
        } else {
            cout << raiz2 << " " << raiz1 << endl;}
    }
    
    return 0;
}