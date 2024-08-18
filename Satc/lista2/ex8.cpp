/*
8. Faça um programa que pergunte o preço de três produtos e informe qual
produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
*/

#include <iostream>

using namespace std;

int main()
{
    float precos[3], menor;

    cout << "Digite o preço do primeiro produto: ";
    cin >> precos[0];
    cout << "Digite o preço do segundo produto: ";
    cin >> precos[1];
    cout << "Digite o preço do terceiro produto: ";
    cin >> precos[2];

    menor = precos[0];

    for (int i = 1; i < 3; i++)
    {
        if (precos[i] < menor)
        {
            menor = precos[i];
        }
    }

    cout << "O produto mais barato é: " << menor << endl;

    return 0;
}