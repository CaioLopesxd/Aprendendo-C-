/*
1. Faça um programa que possua um vetor denominado A que armazene 6
números inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5,-2,-5, 7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores das
posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posições o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.

*/

#include <iostream>

using namespace std;

int main()
{
    // A
    int A[6] = {1, 0, 5, -2, -5, 7};

    // B
    int soma = A[0] + A[1] + A[5];
    cout << "Soma dos valores A[0], A[1] e A[5]: " << soma << endl;

    // C
    A[4] = 100;

    // D
    for (auto &i : A)
    {
        cout << i << endl;
    }

    return 0;
}
