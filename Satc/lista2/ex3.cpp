/*3 Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme
a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.*/

#include <iostream>

using namespace std;

int main()
{

    char sexo;

    cout << "Digite o sexo (F/M): ";
    cin >> sexo;

    sexo = toupper(sexo);

    if (sexo == 'F')
    {
        cout << "Feminino" << endl;
    }
    else if (sexo == 'M')
    {
        cout << "Masculino" << endl;
    }
    else
    {
        cout << "Sexo inválido" << endl;
    }
}