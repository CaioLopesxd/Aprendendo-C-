/*
    7 - Tendo como dado de entrada a altura (h) de uma pessoa, construa um
algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72.7*h) – 58
Para mulheres: (62.1*h) - 44.7
*/

#include <iostream>

using namespace std;

float calcularPeso(float h, char sexo)
{
    float peso;
    if (sexo == 'M')
    {
        peso = (72.7 * h) - 58;
        return peso;
    }
    else
    {
        peso = (62.1 * h) - 44.7;
        return peso;
    }
}

int main()

{
    float h;
    char sexo;

    cout << "Digite a altura:";
    cin >> h;
    cout << "Digite o sexo (M/F):";
    cin >> sexo;
    sexo = toupper(sexo);
    cout << "O peso ideal é: " << calcularPeso(h, sexo) << endl;

    return 0;
}