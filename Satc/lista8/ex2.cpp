/*
2 - Criar uma classe para representar um retângulo e calcular sua área e
perímetro.
Requisitos:
Crie uma classe chamada Retangulo com dois atributos privados: largura e
altura.
Crie métodos públicos para:
Calcular a área do retângulo.
Calcular o perímetro do retângulo.
Crie métodos getters e setters para modificar e acessar os valores de largura e
altura.
No main(), crie um objeto da classe Retangulo, atribua valores de largura e
altura e calcule a área e o perímetro.
*/

#include <iostream>

using namespace std;

class retangulo
{
private:
    float largura, altura;

public:
    retangulo(float l, float a)
    {
        largura = l;
        altura = a;
    }
    void setLargura(float l)
    {
        largura = l;
    }
    void setAltura(float a)
    {
        altura = a;
    }
    float getLargura()
    {
        return largura;
    }
    float getAltura()
    {
        return altura;
    }
    float calcularArea()
    {
        return largura * altura;
    }
    float calcularPerimetro()
    {
        return 2 * (largura + altura);
    }
    void mostrar()
    {
        cout << "Largura: " << largura << endl;
        cout << "Altura: " << altura << endl;
        cout << "Área: " << calcularArea() << endl;
        cout << "Perímetro: " << calcularPerimetro() << endl;
    }
};

int main()
{
    float alt, larg;
    cout << "Digite a altura do retângulo: ";
    cin >> alt;
    cout << "Digite a largura do retângulo: ";
    cin >> larg;

    retangulo r(alt, larg);
    r.mostrar();

    return 0;
}