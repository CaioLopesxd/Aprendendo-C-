#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 5;

    // operadores aritméticos
    int sum = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int remainder = a % b;

    // operadores de incrementação e decrementação
    int c = 5;
    c++; // incrementar
    int d = 10;
    d--; // decrementar

    // operadores de atribuição
    int x = 10;
    x += 5; // x = x + 5
    int y = 20;
    y -= 10; // y = y - 10
    int z = 30;
    z *= 2; // z = z * 2
    int w = 40;
    w /= 4; // w = w / 4

    // operadores de comparação
    bool equal = (a == b);
    bool notEqual = (a != b);
    bool greater = (a > b);
    bool lesser = (a < b);
    bool greaterOrEqual = (a >= b);
    bool lesserOrEqual = (a <= b);

    // operadores lógicos
    bool condition1 = true;
    bool condition2 = false;
    bool resultAnd = (condition1 && condition2);// e
    bool resultOr = (condition1 || condition2);// ou
    bool resultNot = !condition1;// não

    // Operador ternario
    int age = 18;
    string message = (age >= 18) ? "Adult" : "Minor";

    return 0;
}