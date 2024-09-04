/*
4 – Faça um programa que permita ao usuário entrar com uma matriz 3x3
números inteiros. Em seguida, gere um vetor unidimensional pela soma dos
números de cada coluna da matriz e mostre na tela este vetor. Por exemplo, a
matriz:
5 -8 10
1 2 15
25 10 7
*/

#include <iostream>

using namespace std;

int main()
{
    int vetor[3] = {0, 0, 0};
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Insira o valor da matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vetor[j] += matriz[i][j];
        }
    }
    cout << "Vetor resultante: ";
    for (auto &i : vetor)
    {
        cout << i << " ";
    }

    return 0;
}