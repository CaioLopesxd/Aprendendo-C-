/*
7. Faça um Programa que leia três números e mostre o maior e o menor deles.
*/
#include <iostream>

using namespace std;

int main()
{
    float numeros[3], maior, menor;

    cout << "Digite o primeiro número: ";
    cin >> numeros[0];
    cout << "Digite o segundo número: ";
    cin >> numeros[1];
    cout << "Digite o terceiro número: ";
    cin >> numeros[2];

    maior = numeros[0];
    menor = numeros[0];

    for (int i = 1; i < 3; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    cout << "O maior número é: " << maior << endl;
    cout << "O menor número é: " << menor << endl;

    return 0;
}