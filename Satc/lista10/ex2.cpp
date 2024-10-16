/*
2 - Crie uma classe chamada Retangulo que possui dois atributos privados:
comprimento e largura. A classe deve ter:
a. Um construtor para inicializar os valores de comprimento e largura.
b. Uma função amiga chamada calcularArea que recebe um objeto da
classe Retangulo e retorna a área do retângulo.
c. Uma função amiga chamada calcularPerimetro que recebe um objeto da
classe Retangulo e retorna o perímetro do retângulo.
d. Implemente a função main() para criar um objeto da classe Retangulo,
calcular e imprimir a área e o perímetro utilizando as funções amigas.
*/

#include <iostream>

using namespace std;

class Retangulo{
    private:
        float comprimento_,largura_;

    public:
        Retangulo(int comprimento,int largura):comprimento_(comprimento),largura_(largura){}
        Retangulo();

        friend double CalcularArea(Retangulo r);

};

double CalcularArea(Retangulo r){
    return r.comprimento_ * r.largura_;
}

int main(){

    Retangulo r(10,20);

    cout << "Area da caixa: " << CalcularArea(r) << endl;

    return 0;
}