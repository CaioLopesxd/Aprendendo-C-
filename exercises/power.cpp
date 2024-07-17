#include <iostream>

using namespace std;

int main(){

    int n,power,v;
    cout << "Insira o número que deseja elevar: " << endl;
    cin >> n;
    v = n;
    cout << "Insira a potência: " << endl;
    cin >> power;
    
    for(int i = 1; i < power; i++){
        v = v * n;
    }

    cout << "O resultado é: ";
    cout << v << endl;


    return 0;
}