#include <iostream>
#include <string>
#include <vector>

using namespace std;

class City {
private:
    string nome, estado, pais;

public:

    City(string nome, string estado, string pais) : nome(nome), estado(estado), pais(pais) {}


    void exibirCidade() const {
        cout << "Nome: " << nome << ", Estado: " << estado << ", Pais: " << pais << endl;
    }
};

int main() {
    vector<City> cidades;
    string nome, estado, pais;
    int f;

    do {
        cout << "Digite o nome da cidade: ";
        cin >> nome;
        cout << "Digite o estado da cidade: ";
        cin >> estado;
        cout << "Digite o pais da cidade: ";
        cin >> pais;

        City novaCidade(nome, estado, pais);
        cidades.push_back(novaCidade);

        cout << "Insira 1 para adicionar uma cidade ou 0 para encerrar: ";
        cin >> f;
    } while (f == 1);

    cout << "\nLista de cidades adicionadas:\n";
    for (const auto& cidade : cidades) {
        cidade.exibirCidade();
    }

    return 0;
}
