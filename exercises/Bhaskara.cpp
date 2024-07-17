#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float a,b,c,delta,x1,x2;

    cout << "insira o valor de A:" << endl;
    cin >> a;
    cout << "insira o valor de B:" << endl;
    cin >> b;
    cout << "insira o valor de C:" << endl;
    cin >> c;

    delta = (b*b) -4*a*c;

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    cout << "Valor do Delta: " << delta << endl;
    cout << "Valor de X1: " << x1 << endl;
    cout << "Valor de X2: " << x2 << endl;
    

    return 0;
}