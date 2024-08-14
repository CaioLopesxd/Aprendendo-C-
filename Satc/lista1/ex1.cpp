/*– A nota de um estudante é calculada a partir de 3 notas atribuídas,
respectivamente, a um trabalho (peso 2), a uma avaliação semestral (peso 3) e
um exame final (peso 5). Efetue um programa que calcule a nota final do aluno.*/

#include <iostream>

using namespace std;

int main()
{
    float notas[3], soma;

    for (int i = 0; i < 3; i++)
    {
        switch (i)
        {
        case 0:
            cout << "Digite a nota do trabalho: ";
            cin >> notas[0];
            if (notas[0] > 2)
            {
                cout << "Nota inválida, digite novamente: " << endl;
                i--;
            }
            break;
        case 1:
            cout << "Digite a nota da avaliação semestral: ";
            cin >> notas[1];
            if (notas[1] > 3)
            {
                cout << "Nota inválida, digite novamente: " << endl;
                i--;
            }
            break;
        case 2:
            cout << "Digite a nota do exame final: ";
            cin >> notas[2];
            if (notas[2] > 5)
            {
                cout << "Nota inválida, digite novamente: " << endl;
                i--;
            }
            break;
        }
    }
    soma = notas[0] + notas[1] + notas[2];
    cout << "Nota final: " << soma << endl;

    return 0;
}