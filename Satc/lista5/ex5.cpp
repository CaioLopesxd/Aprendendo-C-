/*
5. Modifique a função sacar. Crie outra função chamada validarSaque que
recebe o mesmo parâmetro da função sacar. Esta função deverá
retornar um valor Booleano e ser chamada dentro da função sacar para
validar o saque nas seguintes condições:
● Retorna true se o valor solicitado for menor ou igual ao valor
máximo permitido para saque;
● Retorna false se caso contrário.*/

#include <iostream>

using namespace std;

bool ValidarSaque(float saldo, float limite, float valorSaque)
{

    if (valorSaque <= saldo + limite)
    {
        return true;
    }
    else
    {
        return false;
    }
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

    if (ValidarSaque(saldo, limite, valorSaque))
    {
        cout << "Saque realizado com sucesso : TRUE" << endl;
    }
    else
    {
        cout << "Saldo insuficiente : FALSE" << endl;
    }

    return 0;
}