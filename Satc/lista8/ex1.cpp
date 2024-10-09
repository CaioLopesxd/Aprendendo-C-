/*

1 – Crie uma classe chamada de cidadesBrasil que permita inserir atributos
como nome, data de fundação, número de habitantes e número de eleitores.
Crie as funções para entrada e saída de dados.

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cidadesBrasil
{
private:
    string nome, dataFundacao;
    int habitantes, eleitores;

public:
    cidadesBrasil(string n, string dF, int h, int e)
    {
        nome = n;
        dataFundacao = dF;
        habitantes = h;
        eleitores = e;
    }

    void setNome(string n)
    {
        nome = n;
    }
    void setDataFundacao(string dF)
    {
        dataFundacao = dF;
    }
    void setHabitantes(int h)
    {
        habitantes = h;
    }
    void setEleitores(int e)
    {
        eleitores = e;
    }

    string getNome()
    {
        return nome;
    }
    string getDataFundacao()
    {
        return dataFundacao;
    }
    int getHabitantes()
    {
        return habitantes;
    }
    int getEleitores()
    {
        return eleitores;
    }
    void print()
    {
        cout << "Nome: " << nome << endl;
        cout << "Data de Fundação: " << dataFundacao << endl;
        cout << "Número de Habitantes: " << habitantes << endl;
        cout << "Número de Eleitores: " << eleitores << endl;
    }
};

int main()
{

    vector<cidadesBrasil> cidades;

    while (true)
    {
        string nome, dataFundacao;
        int habitantes, eleitores;
        char f;
        cout << "Digite o nome da cidade:";
        cin >> nome;
        cout << "Digite a data de fundação da cidade:";
        cin >> dataFundacao;
        cout << "Digite o número de habitantes da cidade:";
        cin >> habitantes;
        cout << "Digite o número de eleitores da cidade:";
        cin >> eleitores;

        cidades.push_back(cidadesBrasil(nome, dataFundacao, habitantes, eleitores));

        cout << "Deseja adicionar outra cidade? (s/n)";
        cin >> f;
        if (f == 'n' || f == 'N')
        {
            break;
        }
    }

    for (auto &cidade : cidades)
    {
        cout << "Cidade" << endl;
        cidade.print();
    }

    return 0;
}