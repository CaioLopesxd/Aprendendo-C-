/*
2 - Faça um programa para calcular a área de uma circunferência, considerando
a fórmula ÁREA = π * RAIO2. Utilize as variáveis AREA e RAIO, a constante π
(pi = 3,14159) e os operadores aritméticos de multiplicação.
*/

#include <iostream>

using namespace std;

int main()
{

    float raio, area;
    const float pi = 3.14159;

    cout << "Digite o raio da circunferência: ";
    cin >> raio;

    area = pi * (raio * raio);

    cout << "A área da circunferência é: " << area << endl;

    return 0;
}