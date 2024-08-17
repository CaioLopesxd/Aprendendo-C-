/*
    5 – Desenvolva um programa para verificar se um ano é bissexto ou não.
*/
#include <iostream>

using namespace std;

int main()
{
    int ano;

    cout << "Digite o ano: ";
    cin >> ano;

    // Verifica se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
    {
        cout << "O ano " << ano << " é bissexto" << endl;
    }
    else
    {
        cout << "O ano " << ano << " não é bissexto" << endl;
    }

    return 0;
}
