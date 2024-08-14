/*
    10. As Organizações Tabajara resolveram dar um aumento de salário aos seus
colaboradores e lhe contrataram para desenvolver o programa que calculará os
reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste
segundo o seguinte critério, baseado no salário atual:
• salários até R$ 280,00 (incluindo): aumento de 20%
• salários entre R$ 280,00 e R$ 700,00: aumento de 15%
• salários entre R$ 700,00 e R$ 1500,00: aumento de 10%
• salários de R$ 1500,00 em diante: aumento de 5%
Após o aumento ser realizado, informe na tela:
• o salário antes do reajuste;
• o percentual de aumento aplicado;
• o valor do aumento;
• o novo salário, após o aumento.
*/

#include <iostream>

using namespace std;

float calcularReajuste(float salario)
{
    float novoSalario;
    if (salario <= 280)
    {
        novoSalario = salario * 1.2;
        cout << "Valor do reajuste: 20%" << endl;
        cout << "Salario final: R$";
        return novoSalario;
    }
    else if (salario > 280)
    {
        novoSalario = salario * 1.15;
        cout << "Valor do reajuste: 15%" << endl;
        cout << "Salario final: R$";
        return novoSalario;
    }
    else if (salario > 700)
    {
        novoSalario = salario * 1.1;
        cout << "Valor do reajuste: 10%" << endl;
        cout << "Salario final: R$";
        return novoSalario;
    }
    else if (salario > 1500)
    {
        novoSalario = salario * 1.05;
        cout << "Valor do reajuste: 05%" << endl;
        cout << "Salario final: R$";
        return novoSalario;
    }
    else
    {
        return 0;
    }
}

int main()
{

    float salario;
    cout << "Digite o salário:";
    cin >> salario;
    cout << "O salário antes do reajuste é: " << salario << endl;
    cout << "O salário depois do reajuste é:" << endl
         << calcularReajuste(salario) << endl;

    return 0;
}