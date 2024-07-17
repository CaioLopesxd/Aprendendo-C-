#include <iostream>

using namespace std;

//função tipo void retorna vazio
void print(){
    cout << "Calculadora de soma de números inteiros:" << endl;

}
//função tipo int retorna algum valor
int Plus(int a, int b){
    return a + b;
}

int main(){
    const string title = "Funções";
    cout << title << endl;
    
    int n1, n2;
    print();
    cin >> n1;
    cin >> n2;

    cout << "Resultado: " << Plus(n1,n2) << endl;
 
    return 0; 
}