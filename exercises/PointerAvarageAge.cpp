#include <iostream>

using namespace std;

int media(int* i, int* j){
    return (*i + *j) / 2;
}

int main() {
    int valor1, valor2;
    int* idade1 = &valor1;
    int* idade2 = &valor2;

    cout << "Insira idade da pessoa 1:" << endl;
    cin >> *idade1;

    cout << "Insira idade da pessoa 2:" << endl;
    cin >> *idade2;

    cout << "Idade media: " << media(idade1, idade2) << endl;

    return 0;
}
