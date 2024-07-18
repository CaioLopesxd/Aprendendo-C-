#include <iostream>

using namespace std;

int main(){

    int var1,var2;
    int* point1;

    var1 = 5;
    point1 = &var1;

    cout << "var1: " << var1 << endl;//printa o valor da variavel
    cout << "point1: " << point1 << endl;//printa o endereço do primeiro byte de memória da variavel
    cout << "*point1: " << *point1 << endl;//printa o valor da variavel atravez do ponteiro

    var2 = *point1;//atribui o valor da variavel var1 para a variavel var2 pelo ponteiro
    cout << "var2: " << var2 << endl;//printa o valor da variavel

    *point1 = 10;//atribui o valor 10 para a variavel var1 pelo ponteiro
    cout << "var1: " << var1 << endl;//printa o valor da variavel

    int* point2;
    point2 = NULL;
    cout << "point2: " << point2 << endl;// uma maneira de verificar se o ponteiro está apontando para algum lugar,

    int* point3 = new int;//crie um espaço de memória para um inteiro
    *point3 = 20;
    cout << "point3: " << *point3 << endl;

    *point3 = *point1; //redefinindo o valor do ponteiro com um ponteiro já existente
    cout << "point3: " << *point3 << endl;

    delete point3;//liberando o espaço de memória alocado para o ponteiro
    point3 = point1;//atribuindo o endereço de um ponteiro para outro, porém, gera vazamento de memoria no caso o codigo anterior *point3 = 20 não é mais acessível sendo necessário uso de delete
    cout << "point3: " << *point3 << endl;


    return 0;
}