/*
2. Crie um sistema de contas bancárias com diferentes tipos de contas. A
classe base será Conta, que terá um método sacar(). A classe
ContaCorrente permite saques com taxas, enquanto a classe
ContaPoupanca não tem taxa de saque. Ambas devem sobrescrever o
método sacar().
Requisitos:
a. Crie a classe base Conta com métodos depositar() e sacar()
(virtual).
b. Crie as classes derivadas ContaCorrente e ContaPoupanca, e
sobrescreva o método sacar().
c. No método principal, crie instâncias de contas correntes e
poupanças, e simule saques e depósitos.*/

#include <iostream>

using namespace std;

class Conta
{
protected:
    float saldo_;

public:
    Conta(float saldo) : saldo_(saldo) {};
    virtual void sacar(float valor) = 0;
    void depositar(float valor)
    {
        saldo_ += valor;
    }
    void exibirSaldo()
    {
        cout << "Saldo: " << saldo_ << endl;
    }
};

class ContaCorrente : public Conta
{
public:
    ContaCorrente(float saldo) : Conta(saldo) {};
    void sacar(float valor) override
    {
        if (valor <= saldo_)
        {
            saldo_ -= valor + (valor * 0.1);
        }
    }
};

class ContaPoupanca : public Conta
{
public:
    ContaPoupanca(float saldo) : Conta(saldo) {};

    void sacar(float valor) override
    {
        if (valor <= saldo_)
        {
            saldo_ -= valor;
        }
    }
};

int main()
{
    ContaCorrente cc(1000);
    ContaPoupanca cp(1000);

    cc.depositar(100);
    cp.depositar(100);

    cc.exibirSaldo();
    cp.exibirSaldo();

    cc.sacar(100);
    cp.sacar(100);

    cc.exibirSaldo();
    cp.exibirSaldo();

    return 0;
}