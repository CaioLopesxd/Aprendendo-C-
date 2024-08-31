/*
3 - Desenvolva um programa em C++ que calcula a área de diferentes formas
geométricas. O programa deve usar a sobrecarga de funções para calcular a
área de um círculo, um retângulo e um triângulo. Cada forma terá uma função
dedicada para o cálculo da área, e as funções devem ter diferentes assinaturas
para acomodar as diferentes formas.
*/
#include <iostream>
#include <cmath>

using namespace std;

double Pi = M_PI;

double area(double raio){
    return Pi * pow(raio, 2);
}

double area(double base, double altura){
    return base * altura;
}

double area(double base, double altura, double lado){
    double p = (base + altura + lado) / 2;
    return sqrt(p * (p - base) * (p - altura) * (p - lado));
}

int main(){
    double raio, base, altura, lado;
    cout << "Digite o raio do círculo: ";
    cin >> raio;
    cout << "Área do círculo: " << area(raio) << endl;

    cout << "Digite a base do retângulo: ";
    cin >> base;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;
    cout << "Área do retângulo: " << area(base, altura) << endl;

    cout << "Digite a base do triângulo: ";
    cin >> base;
    cout << "Digite a altura do triângulo: ";
    cin >> altura;
    cout << "Digite o lado do triângulo: ";
    cin >> lado;
    cout << "Área do triângulo: " << area(base, altura, lado) << endl;

    return 0;
}

