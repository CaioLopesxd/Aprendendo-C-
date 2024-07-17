#include <iostream>
#include <string>

//função principal, cria uma função do tipo inteiro que precisa retornar 0 se não o sistema interpreta como erro
int main(){
    //declaração de variável do tipo string com classe string
    std::string name;

    //std::cout é um objeto da classe ostream que representa a saída padrão
    std::cout << "Insira seu nome:" << std::endl;
    //std::cin é um objeto da classe istream que representa a entrada padrão
    std::cin >> name;

    //printando o nome inserido
    std::cout << "seu nome e: " << name << std::endl;

    //pausando o sistema para que o usuário possa ver o resultado
    system("pause");

    return 0;
}