/*
3 - Crie uma classe chamada ContaBancaria com os seguintes atributos:
● Privados:
o saldo (do tipo double): Representa o saldo da conta.
o senha (do tipo std::string): Representa a senha da conta.
● Públicos:
o titular (do tipo std::string): Nome do titular da conta.
Crie os seguintes métodos públicos:
● depositar(double valor): Aumenta o saldo da conta em um valor
específico.
● sacar(double valor, std::string senha): Permite sacar um valor da conta,
mas apenas se a senha estiver correta e o saldo for suficiente.
● exibirSaldo(std::string senha): Mostra o saldo da conta se a senha
estiver correta.
No main(), crie um objeto da classe ContaBancaria, teste os métodos depositar,
sacar, e exibirSaldo, e valide a segurança ao tentar sacar ou ver o saldo com
uma senha incorreta.
*/

#include <iostream>
#include <string>

using namespace std;

class contaBancaria
{
private:
    double saldo;
    string senha;

public:
    contaBancaria(double sal, string sen)
    {
        saldo = sal;
        senha = sen;
    }
    void setSaldo(double sal)
    {
        saldo = sal;
    }
    void setSenha(string sen)
    {
        senha = sen;
    }
    double getSaldo()
    {
        return saldo;
    }
    void depositar(double valor)
    {
        cout << "Depósito realizado com sucesso" << endl;
        saldo += valor;
    }
    void sacar(double valor, string sen)
    {
        if (senha == sen && saldo >= valor)
        {
            cout << "Saque realizado com sucesso" << endl;
            saldo -= valor;
        }
        else if (senha != sen)
        {
            cout << "Senha incorreta" << endl;
        }
        else
        {
            cout << "Saldo insuficiente" << endl;
        }
    }
    void exibirSaldo(string sen)
    {
        if (senha != sen)
        {
            cout << "Senha incorreta" << endl;
            return;
        }
        cout << "Saldo: " << saldo << endl;
    }
};

int main()
{

    double sal;
    string sen;
    cout << "Digite o saldo da conta: ";
    cin >> sal;
    cout << "Digite a senha da conta: ";
    cin >> sen;

    contaBancaria c(sal, sen);

    while (true)
    {
        char f;
        double valor;
        string senha;
        cout << "1 - Depositar" << endl;
        cout << "2 - Sacar" << endl;
        cout << "3 - Exibir Saldo" << endl;
        cout << "4 - Sair" << endl;
        cout << "Digite a opção desejada: ";
        cin >> f;
        if (f == '4')
        {
            break;
        }
        switch (f)
        {
        case '1':
            cout << "Digite o valor a ser depositado: ";
            cin >> valor;
            c.depositar(valor);
            break;
        case '2':

            cout << "Digite o valor a ser sacado: ";
            cin >> valor;
            cout << "Digite a senha: ";
            cin >> senha;
            c.sacar(valor, senha);
            break;
        case '3':
            cout << "Digite a senha: ";
            cin >> senha;
            c.exibirSaldo(senha);
            break;
        default:
            break;
        }
    }

    return 0;
}