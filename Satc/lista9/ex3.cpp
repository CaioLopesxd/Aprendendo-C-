/*
3. Crie uma classe DataHora que implemente a combinação de data e
hora, com sobrecarga dos construtores:
a. Um construtor que inicializa a data e hora com valores passados
pelo usuário;
b. Um construtor que inicializa apenas a data, definindo a hora como
meia-noite (00:00:00);
c. Um construtor que inicializa apenas a hora, definindo a data como
1º de janeiro de 1970;
d. Um construtor padrão;
e. Adicione um método para exibir a data e hora;
f. Crie um objeto para cada tipo de construtor*/
#include <iostream>
#include <string>

using namespace std;

class DataHora
{
private:
    int dia_, mes_, ano_;
    string hora_;

public:
    DataHora(int dia, int mes, int ano, string hora) : dia_(dia), mes_(mes), ano_(ano), hora_(hora) {}
    DataHora(int dia, int mes, int ano) : dia_(dia), mes_(mes), ano_(ano), hora_("00:00:00") {}
    DataHora(string hora) : dia_(1), mes_(1), ano_(1970), hora_(hora) {}
    DataHora() : dia_(1), mes_(1), ano_(1970), hora_("00:00:00") {}

    void exibirDataHora()
    {
        cout << "Data: " << dia_ << "/" << mes_ << "/" << ano_ << endl;
        cout << "Hora: " << hora_ << endl;
    }
};

int main()
{
    DataHora dh1(10, 10, 2021, "10:10:10");
    DataHora dh2(10, 10, 2021);
    DataHora dh3("10:10:10");
    DataHora dh4;

    dh1.exibirDataHora();
    dh2.exibirDataHora();
    dh3.exibirDataHora();
    dh4.exibirDataHora();

    return 0;
}
