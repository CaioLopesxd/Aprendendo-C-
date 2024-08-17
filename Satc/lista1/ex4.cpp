/*
– Efetue um programa para calcular a tensão elétrica a partir da resistência e
da corrente elétrica.
*/

#include <iostream>

using namespace std;

int main(){

    float resistencia,corrente,tensao;

    cout << "Digite a resistência: ";
    cin >> resistencia;
    cout << "Digite a corrente:";
    cin >> corrente;

    tensao = resistencia * corrente;

    cout << "A tensão é: " << tensao <<"v"<< endl;

    return 0;
}