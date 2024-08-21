/*
3. Escreva uma função que recebe três parâmetros do tipo inteiro. Ela
deverá retornar true se os parâmetros estiverem ordenados de forma
crescente ou false, caso contrário.
*/

#include <iostream>

using namespace std;

bool ordenado(int n1, int n2, int n3)
{
    return n1 < n2 && n2 < n3;
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

    cout << "Os números estão ordenados de forma crescente? " << endl;

    if (ordenado(n1, n2, n3))
    {
        cout << "Sim" << endl;
    }
    else
    {
        cout << "Não" << endl;
    }
    return 0;
}