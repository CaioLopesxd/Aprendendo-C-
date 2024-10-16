/*
1. Crie um programa que modele diferentes tipos de funcionários em uma
empresa. A classe base será Funcionario, que terá atributos como
nome e salarioBase, além de um método virtual calcularSalarioFinal().
A classe derivada FuncionarioComissionado deve adicionar uma
comissão ao salário base, e a classe FuncionarioHorista deve calcular
o salário com base nas horas trabalhadas.
Requisitos:
a. Crie a classe base Funcionario com os atributos nome e
salarioBase, além do método calcularSalarioFinal() (virtual).
b. Crie as classes FuncionarioComissionado e FuncionarioHorista
que sobrescrevem calcularSalarioFinal().
c. No método principal, crie instâncias dos funcionários e calcule
seus salários finais.
*/

#include <iostream>
#include <string>
using namespace std;

class Funcionario
{
protected:
    string nome_;
    float salarioBase_;

public:
    Funcionario(string nome, float salarioBase) : nome_(nome), salarioBase_(salarioBase) {}
    Funcionario() {}

    virtual void calcularSalario()
    {
        cout << "Salario Base" << salarioBase_ << endl;
    }
};

class FuncionarioComissionado : public Funcionario
{
private:
    float comissao_;

public:
    FuncionarioComissionado(string nome, float salarioBase, float comissao) : Funcionario(nome, salarioBase), comissao_(comissao) {}
    FuncionarioComissionado() {}

    void calcularSalario() override
    {
        cout << "usar numeros entre 0 e 1 onde 0 e 0% de comissao e 1 e 100%" << endl;
        cout << "Salario Comissionado " << salarioBase_ + (salarioBase_ * comissao_) << endl;
    }
};

class FuncionarioHorista : public Funcionario
{
private:
    float horas_;

public:
    FuncionarioHorista(string nome, float salarioBase, float horas) : Funcionario(nome, salarioBase), horas_(horas) {}
    FuncionarioHorista() {}
    void calcularSalario() override
    {
        cout << "Usar numeros entre 0 e 1 onde 0 e 0% das horas e 1 e 100%" << endl;
        cout << "Salario Horario " << salarioBase_ * horas_ << endl;
    }
};

int main()
{
    FuncionarioComissionado pessoa1("caio", 1000, 0.2);
    FuncionarioHorista pessoa2("zero", 1200, 0.5);

    pessoa1.calcularSalario();
    pessoa2.calcularSalario();

    return 0;
}
