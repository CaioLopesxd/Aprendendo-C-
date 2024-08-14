/*
    1. Leia o código de um determinado produto e mostre sua classificação. Utilize a seguinte tabela
como referência:
 Código Classificação
1 Alimento não-perecível
 2,3 ou 4 Alimento perecível
 5 ou 6 Vestuário
7 Higiene Pessoal
 8 até 15 Limpeza e Utensílios Domésticos
Qualquer outro código Código inválido
*/

#include <iostream>

using namespace std;

int main()
{
    int cod;

    cout << "Insira o codigo do produto:";
    cin >> cod;

    switch (cod)
    {
    case 1:
        cout << "Alimento não-perecível" << endl;
        break;
    case 2:
        cout << "Alimento perecível" << endl;
        break;
    case 3:
        cout << "Alimento perecível" << endl;
        break;
    case 4:
        cout << "Alimento perecível" << endl;
        break;
    case 5:
        cout << "Vestuário" << endl;
        break;
    case 6:
        cout << "Vestuário" << endl;
        break;
    case 7:
        cout << "Higiene Pessoal" << endl;
        break;
    case 8:
        cout << "Limpeza e Utensílios Domésticos" << endl;
        break;
    case 9:
        cout << "Limpeza e Utensílios Domésticos" << endl;
        break;
    case 10:
        cout << "Limpeza e Utensílios Domésticos" << endl;
        break;
    case 11:
        cout << "Limpeza e Utensílios Domésticos" << endl;
        break;
    case 12:
        cout << "Limpeza e Utensílios Domésticos" << endl;
        break;
    case 13:
        cout << "Limpeza e Utensílios Domésticos" << endl;
        break;
    case 14:
        cout << "Limpeza e Utensílios Domésticos" << endl;
        break;
    case 15:
        cout << "Limpeza e Utensílios Domésticos" << endl;
        break;
    default:
        cout << "Código inválido" << endl;
        break;
    }
    return 0;
}