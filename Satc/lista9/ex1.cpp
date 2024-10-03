/*1. Modifique a classe ContaCorrente vista na Aula 08 e inclua:
a. Um método para saque;
b. Um método para transferência de valor;
c. Um método privado para validação de saque: não permite sacar
se o valor solicitado for maior que a soma do saldo + limite;
d. Crie dois objetos do tipo ContaCorrente e teste cada um dos itens
solicitados acima.*/

#include <iostream>
#include <string>
using namespace std;

class ContaCorrente
{
private:
    string titular_;
    float saldo_;
    float limite_;

    bool validarSaque(float valor)
    {
        if (valor <= saldo_ + limite_)
        {
            return true;
        }
        return false;
    }

public:
    ContaCorrente(string titular, float saldo, float limite) : titular_(titular), saldo_(saldo), limite_(limite) {}

    void saque(float valor)
    {
        if (validarSaque(valor))
        {
            limite_ -= valor - saldo_; // atualiza o limite
            saldo_ -= valor;           // atualiza o saldo
            cout << "Saque realizado com sucesso!" << endl;
            return;
        }
        cout << "Saldo insuficiente!" << endl;
    }

    void transferencia(float valor, ContaCorrente &conta)
    {
        if (validarSaque(valor))
        {
            limite_ -= valor - saldo_; // atualiza o limite
            saldo_ -= valor;           // atualiza o saldo
            conta.setSaldo(valor);
            cout << "Transferencia realizado com sucesso!" << endl;
            return;
        }
    }

    void exibirSaldo()
    {
        cout << "Saldo: " << saldo_ << endl;
        cout << "Limite: " << limite_ << endl;
    }
    void setSaldo(float saldo)
    {
        saldo_ += saldo;
    }

};

int main()
{

    ContaCorrente conta1("Joao", 1000, 500);
    ContaCorrente conta2("Maria", 2000, 1000);

    cout << "Saldo Conta 1" << endl;
    conta1.exibirSaldo();
    cout << endl;
    cout << "Saldo Conta 2" << endl;
    conta2.exibirSaldo();
    cout << endl;

    cout << "Saque de 1500 da conta 1" << endl;
    conta1.saque(1500);
    conta1.exibirSaldo();
    cout << endl;
    cout << "Saque de 1800 da conta 2" << endl;
    conta2.saque(1500);
    conta2.exibirSaldo();
    cout << endl;
    cout << "Saque de 500 da conta 1" << endl;
    conta1.saque(500);
    conta1.exibirSaldo();
    cout << endl;

    cout << "Saldo antes da transfrencia" << endl;
    cout << "Saldo Conta 1" << endl;
    conta1.exibirSaldo();
    cout << endl;
    cout << "Saldo Conta 2" << endl;
    conta2.exibirSaldo();
    cout << endl;

    cout << "Transferencia de 500 da conta 2 para conta 1" << endl;
    conta2.transferencia(500, conta1);
    cout << endl;

    cout << "Saldo pós da transfrencia" << endl;
    cout << "Saldo Conta 1" << endl;
    conta1.exibirSaldo();
    cout << endl;
    cout << "Saldo Conta 2" << endl;
    conta2.exibirSaldo();
    cout << endl;

    return 0;
}