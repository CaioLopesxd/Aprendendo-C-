/*
2. Escreva um programa que leia 10 números inteiros e os armazene em um
vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.*/

#include <iostream>

using namespace std;

int main()
{

    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Insira o " << i + 1 << "º número: ";
        cin >> vetor[i];
    }

    int maior = vetor[0];

    for (auto &i : vetor)
    {
        if (i > maior)
        {
            maior = i;
        }
    }

    cout << "Maior elemento: " << maior << endl;

    return 0;
}