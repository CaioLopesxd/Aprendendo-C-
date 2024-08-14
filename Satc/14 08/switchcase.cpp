#include <iostream>

/*
Ao encontrar o comando switch-case, o computador avalia a expressão e indica dentro
do parênteses que segue a palavra switch e executa apenas o comando associado ao
valor da constante tem o valor igual da expressão.
switch (condição de teste) {
 case 0: instruções;
 break;
 case 1: instruções;
 break;
 default: intruções;
 break;
 }
*/

using namespace std;

int main()
{
    int num;
    cout << "Digite um número de 0 a 6: ";
    cin >> num;

    switch (num)
    {
    case 0:
        cout << "Domingo" << endl;
        break;
    case 1:
        cout << "Segunda-feira" << endl;
        break;
    case 2:
        cout << "Terça-feira" << endl;
        break;
    case 3:
        cout << "Quarta-feira" << endl;
        break;
    case 4:
        cout << "Quinta-feira" << endl;
        break;
    case 5:
        cout << "Sexta-feira" << endl;
        break;
    case 6:
        cout << "Sábado" << endl;
        break;
    default:
        cout << "Número inválido" << endl;
        break;
    }

    return 0;
}