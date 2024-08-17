/*
6 - Faça um Programa que peça 2 números inteiros e um número real. Calcule
e mostre:
a. O produto do dobro do primeiro com metade do segundo.
b. A soma do triplo do primeiro com o terceiro.
c. O terceiro elevado ao cubo.*/

#include <iostream>

using namespace std;

int main()
{

    int num1, num2;
    float num3;

    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    cout << "Digite o segundo número inteiro: ";
    cin >> num2;
    cout << "Digite um número real: ";
    cin >> num3;

    float produto = 2 * num1 * (num2 / 2.0);

    cout << "O produto do dobro do primeiro com metade do segundo é: " << produto << endl;

    float soma = 3 * num1 + num3;

    cout << "A soma do triplo do primeiro com o terceiro é: " << soma << endl;

    float potencia = num3;
    for (int i = 1; i < 3; i++)
    {
        potencia *= num3;
    }

    cout << "O terceiro elevado ao cubo é: " << potencia << endl;

    return 0;
}