/*
4. Considere a seguinte situação: Uma conta bancária possui um saldo e
um limite. O valor máximo que o usuário da conta pode sacar é a soma
do limite com o saldo. Crie uma função chamada sacar que recebe
como parâmetro um valor e debite do saldo o valor solicitado.
*/

#include <iostream>

using namespace std;

float sacar(float saldo, float limite, float valorSaque)
{

    if (valorSaque <= saldo + limite)
    {
        saldo = saldo - valorSaque;
    }
    else
    {
        cout << "Saldo insuficiente" << endl;
    }

    return saldo;
}

int main()
{

    float saldo, limite, valorSaque;

    cout << "Digite o saldo da conta: ";
    cin >> saldo;
    cout << "Digite o limite da conta: ";
    cin >> limite;

    cout << "Digite o valor do saque: ";
    cin >> valorSaque;

    cout << "Saldo atual: " << sacar(saldo, limite, valorSaque) << endl;

    return 0;
}