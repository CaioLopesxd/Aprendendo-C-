#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n,factorial = 1;

    cout << "Enter a calculadora de fatorial: " << endl;
    cin >> n;
    

    for(int i = 1;i <= n; i++){
        factorial = i * factorial;
    }
    cout << "O fatorial de " << n << " é: " << endl;
    cout << factorial << endl;

    return 0;
}