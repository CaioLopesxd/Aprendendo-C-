//2 Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Digite um número: ";
    cin >> num;

    if (num < 0)
    {
        cout << "O número é negativo." << endl;
    }
    else if (num > 0)
    {
        cout << "O número é positivo." << endl;
    }
    else
    {
        cout << "O número é zero." << endl;
    }

    return 0;
}