/*
Escreva uma função que recebe um parâmetro do tipo inteiro . A função
deverá retornar o caracter ‘P’ se o parâmetro for positivo ou ‘N’ se o
parâmetro for igual a zero ou negativo.
*/
#include <iostream>

using namespace std;

char PositivoNegativo(int n)
{
    if (n > 0)
    {
        return 'P';
    }
    else if (n < 0)
    {
        return 'N';
    }
    else
    {
        return '0';
    }
}

int main()
{

    int n;

    cout << "Digite um número:";
    cin >> n;

    cout << "O número " << n << " é: " << PositivoNegativo(n) << endl;

    return 0;
}