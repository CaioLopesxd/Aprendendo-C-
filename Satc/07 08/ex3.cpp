#include <iostream>

using namespace std;

int main(){
    int num1,num2;
    
    cout << "Insira um número" << endl;
    cin >> num1;
    cout << "Insira outro número" << endl;
    cin >> num2;

    cout << "A soma: "<< num1+num2 << endl;
    cout << "A subtração: "<< num1-num2 << endl;
    cout << "A multiplicação: "<< num1*num2 << endl;
    cout << "A divisão: "<< num1/num2 << endl;

    return 0;
}