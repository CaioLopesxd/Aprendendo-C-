/*4. Faça um Programa que peça para entrar com um ano com 4 dígitos e
determine se o mesmo é ou não bissexto.
*/
#include <iostream>

using namespace std;

int main()
{
    int ano;

    cout << "Digite o ano: ";
    cin >> ano;

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
