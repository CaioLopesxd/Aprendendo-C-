/*
    3 – Faça um programa em C que lê uma matriz de 3x3 elementos usando um
comando for, multiplica cada elemento por 5 e imprime o resultado.

*/

#include <iostream>

using namespace std;

int main()
{

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
            matriz[i][j] = matriz[i][j] * 5;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
    }

    return 0;
}