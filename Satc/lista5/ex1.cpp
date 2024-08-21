/*
Escreva uma função que recebe três parâmetros do tipo inteiro e retorna
a soma destes três parâmetros.
*/

#include <iostream>

using namespace std;

int soma(int n1, int n2, int n3)
{
    return n1 + n2 + n3;
}

int main()
{
    int n1, n2, n3;

    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;

    cout << "A soma dos três números é: " << soma(n1, n2, n3) << endl;

    return 0;
}