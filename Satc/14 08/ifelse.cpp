/*
O if/else ou se/senão, testa a primeira condição, se esta não for
verdadeira, pula diretamente para o else.
if (condição é verdadeira) {
executa instruções;
}
else {
outra série de instruções
}
*/

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