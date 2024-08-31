/*
1 – Desenvolva um programa em C++ que contém uma função chamada trocar
que recebe duas variáveis inteiras como parâmetros por referência e troca seus
valores. No main, solicite ao usuário dois números, chame a função trocar, e
depois exiba os valores das variáveis após a troca.
*/

#include <iostream>

using namespace std;

void trocarPorReferencia(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Valores antes da troca: a = " << a << " b = " << b << endl;
    trocarPorReferencia(a,b);
    cout << "Valores depois da troca: a = " << a << " b = " << b << endl;

    return 0;
}