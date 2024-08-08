#include <iostream>

using namespace std;

int main(){

    float temperatura,fahrenheit;
    
    cout << "Informe a temperatura em graus Celsius: ";
    cin >> temperatura;

    fahrenheit = (temperatura * 9/5) + 32;

    cout << "A temperatura em Fahrenheit é: " << fahrenheit << endl;

    return 0;
}