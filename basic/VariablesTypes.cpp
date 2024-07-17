#include <iostream>
#include <string>

using namespace std;
//importando a biblioteca std para não precisar declarar std:: antes de cada comando

//Bool = verdadeiro ou falso utilizando 1 byte de memoria que pode ser 0 ou 1
//Char = caractere utilizando 1 byte de memoria só retorna uma letra
//string = cadeia de caracteres utilizando 4 bytes de memoria retorna uma cadeia de caracteres
//Int = inteiro utilizando 4 bytes de memoria retorna um numero inteiro
//Float = ponto flutuante utilizando 4 bytes de memoria retorna um numero com casas decimais até 6 casas decimais 
//Double = ponto flutuante utilizando 8 bytes de memoria retorna um numero com casas decimais até 15 casas decimais

int main(){
    int integer;
    integer = 10;
    
    const int number1 = 10; // Definindo tipo para const
    constexpr float number2 = 10.5; // Definindo tipo para constexpr
    //const e constexpr são constantes que não podem ser alteradas, const é caregada no tempo de execução e constexpr é carregada no tempo de compilação

    float real;
    real = 10.5e37;
    double real2;   
    real2 = 10.5e307;
    //float é até 10^38 e double é até 10^308

    cout << integer << endl;
    cout << real << endl;
    cout << real2 << endl;

    bool boolean;
    boolean = true;

    //0 = false e 1 = true
    cout << boolean << endl;

    char caractere;
    caractere = 'a';
    string text;
    text = "texto";

    cout << caractere << endl;
    cout << text << endl;

    return 0;
}