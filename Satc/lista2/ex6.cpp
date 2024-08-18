/*
6. Faça um programa para a leitura de duas notas parciais de um aluno. O
programa deve calcular a média alcançada por aluno e apresentar:
• A mensagem "Aprovado", se a média alcançada for maior ou igual a
sete;
• A mensagem "Reprovado", se a média for menor do que sete;
• A mensagem "Aprovado com Distinção", se a média for igual a dez*/

#include <iostream>

using namespace std;

int main()
{

    float notas[2], media;

    cout << "Digite a primeira nota:";
    cin >> notas[0];
    cout << "Digite a segunda nota:";
    cin >> notas[1];

    media = (notas[0] + notas[1]) / 2;

    if (media == 10)
    {
        cout << "Aprovado com Distinção " << media;
    }
    else if (media >= 7)
    {
        cout << "Aprovado " << media;
    }
    else
    {
        cout << "Reprovado " << media;
    }

    return 0;
}