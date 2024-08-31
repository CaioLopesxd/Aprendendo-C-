/*
2 - Escreva uma função chamada calcular que recebe três parâmetros: dois
números inteiros e um caractere que indica a operação a ser realizada (+, -, *, /).
- O operador deve ter um valor padrão de '+'.
- No main, solicite ao usuário dois números e, opcionalmente, um operador. Se
o operador não for fornecido, a função deve realizar a soma.
- Exiba o resultado da operação.

*/

#include <iostream>

using namespace std;

int calcular(int n1, int n2, char op = '+'){
    switch (op)
    {
    case '+':
        return n1 + n2;
        break;
    case '-':
        return n1 - n2;
        break;
    case '*':
        return n1 * n2;
        break;
    case '/':
        return n1 / n2;
        break;
    default:
        break;
    }
}

int main(){
    int n1,n2;
    char op;
    cout << "Digite o primeiro valor: ";
    cin >> n1;
    cout << "Digite o segundo valor: ";
    cin >> n2;
    cout << "Digite o operador (+, -, *, /): ";
    cin >> op;
    cout << "Resultado: " << calcular(n1,n2,op) << endl;

    return 0;
}
