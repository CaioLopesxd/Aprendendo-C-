/*
2. Crie a classe Pessoa que tenha 03 construtores sobrecarregados:
a. O primeiro construtor deve receber o nome, idade, email e
telefone da pessoa;
b. O segundo construtor deve receber nome, idade e e-mail da
pessoa;
c. O terceiro é o construtor padrão;
d. Crie um método para mostrar as informações;
e. Crie 03 objetos, um para cada construtor.

*/
#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
private:
    string nome_;
    string email_;
    string telefone_;
    int idade_;

public:
    Pessoa(string nome, string email, string telefone, int idade) : nome_(nome), email_(email), telefone_(telefone), idade_(idade) {}
    Pessoa(string nome, string email, int idade) : nome_(nome), email_(email), telefone_("Não Informado"), idade_(idade) {}
    Pessoa(): nome_("Não Informado"), email_("Não Informado"), telefone_("Não Informado"), idade_(0) {}

    void exibirInfo()
    {
        cout << "Nome: " << nome_ << endl;
        cout << "Email: " << email_ << endl;
        cout << "Telefone: " << telefone_ << endl;
        cout << "Idade: " << idade_ << endl;
    }
};

int main()
{

    Pessoa p1("João", "joao@gmail.com", "9999-9999", 20);
    Pessoa p2("Maria", "maria@hotmail.com", 25);
    Pessoa p3;

    p1.exibirInfo();
    p2.exibirInfo();
    p3.exibirInfo();

    return 0;
}