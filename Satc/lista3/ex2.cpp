/*
O cardápio de uma casa de lanches é dado pela tabela abaixo:
Código Produto Preço Unitário (R$)
 100 Cachorro quente R$ 1,70
 101 Bauru Simples R$ 2,30
 102 Bauru com ovo R$ 2,60
 103 Hamburguer R$ 2,40
 104 Cheeseburguer R$ 2,50
 105 Refrigerante R$ 1,00
Escreva um programa que leia o código do item escolhido pelo consumidor e a
quantidade (você deverá inicializar estas variáveis atribuindo valores a elas, já que não estamos
obtendo informação do usuário) calculando e mostrando o valor a pagar. Não será necessário
exibir o produto e o valor, somente o valor final.
*/
#include <iostream>
#include <string>
#include <vector>
#include <clocale>
#include <cstdlib>

using namespace std;

class Cardapio
{
private:
    int codigo;
    string produto;
    float preco;

public:
    Cardapio(int codigo, string produto, float preco) : codigo(codigo), produto(produto), preco(preco) {}

    int getCodigo()
    {
        return this->codigo;
    }
    string getProduto()
    {
        return this->produto;
    }
    float getPreco()
    {
        return this->preco;
    }
};

class Pedido
{
private:
    int codigo;
    int quantidade;

public:
    Pedido(int codigo, int quantidade) : codigo(codigo), quantidade(quantidade) {}

    int getCodigo()
    {
        return this->codigo;
    }
    int getQuantidade()
    {
        return this->quantidade;
    }
};

Pedido adicionarPedidio()
{
    int codigo, quantidade;
    cout << "Digite o código do item: ";
    cin >> codigo;
    cout << "Digite a quantidade: ";
    cin >> quantidade;
    return Pedido(codigo, quantidade);
}

void mostrarPedido(vector<Pedido> pedidos, vector<Cardapio> cardapio)
{
    float total = 0;
    for (auto &pedido : pedidos)
    {
        for (auto &item : cardapio)
        {
            if (pedido.getCodigo() == item.getCodigo())
            {
                cout << "Produto: " << item.getProduto() << ", Quantidade: " << pedido.getQuantidade() << ", Preço: R$ " << item.getPreco() << endl;
                total += item.getPreco() * pedido.getQuantidade();
            }
        }
    }
    cout << "Total: R$ " << total << endl;
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    vector<Cardapio> cardapio;
    vector<Pedido> pedidos;

    cardapio.push_back(Cardapio(100, "Cachorro quente", 1.70));
    cardapio.push_back(Cardapio(101, "Bauru Simples", 2.30));
    cardapio.push_back(Cardapio(102, "Bauru com ovo", 2.60));
    cardapio.push_back(Cardapio(103, "Hamburguer", 2.40));
    cardapio.push_back(Cardapio(104, "Cheeseburguer", 2.50));
    cardapio.push_back(Cardapio(105, "Refrigerante", 1.00));

    while (true)
    {
        for (auto &item : cardapio)
        {
            cout << "Código: " << item.getCodigo() << ", Produto: " << item.getProduto() << ", Preço: R$ " << item.getPreco() << endl;
        }

        int f;
        cout << "Digite a função desejada: " << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Adicionar item ao carrinho" << endl;
        cout << "2 - Mostrando carrinho atual" << endl;

        cin >> f;
        switch (f)
        {
        case 0:
            cout << "Encerrando..." << endl;
            return 0;
        case 1:
            system("cls");
            cout << "Adicionando item ao pedido..." << endl;
            pedidos.push_back(adicionarPedidio());
            break;
        case 2:
            system("cls");
            cout << "Mostrando Pedido..." << endl;
            mostrarPedido(pedidos, cardapio);
            break;
        default:
            cout << "Opção inválida" << endl;
            break;
        }
    }

    cout << "Pedido completo: " << endl;
    mostrarPedido(pedidos, cardapio);
    system("pause");
    return 0;
}