/*1- Faça um Programa que peça dois números e imprima o maior deles.*/
#include <iostream>

using namespace std;

int main()
{
    double num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "O maior número é: " << num1 << endl;
    }
    else if (num1 < num2)
    {
        cout << "O maior número é: " << num2 << endl;
    }
    else
    {
        cout << "Os números são iguais." << endl;
    }

    return 0;
}