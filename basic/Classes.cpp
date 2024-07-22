#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Carro {
private:
    int ano;
    string modelo;

public:
    void adicionarCarro(int ano, string modelo) {
        this->ano = ano;
        this->modelo = modelo;
    }
    
    void exibirCarro() const {
        cout << "Modelo: " << modelo << ", Ano: " << ano << endl;
    }
};

int main() {
    vector<Carro> carros;
    int ano;
    string modelo;
    char escolha;

    do {
        cout << "Digite o modelo do carro: ";
        cin >> modelo;
        cout << "Digite o ano do carro: ";
        cin >> ano;

        Carro novoCarro;
        novoCarro.adicionarCarro(ano, modelo);
        carros.push_back(novoCarro);

        cout << "Deseja adicionar outro carro? (s/n): ";
        cin >> escolha;

    } while (escolha == 's' || escolha == 'S');

    cout << "\nLista de carros adicionados:\n";
    for (const auto& carro : carros) {
        carro.exibirCarro();
    }

    return 0;
}
