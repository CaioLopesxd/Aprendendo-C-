#include <iostream>

using namespace std;

int main()
{

    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    letra = tolower(letra);
    
    for (int i = 0; i < 5; i++)
    {
        if (letra == vogais[i])
        {
            cout << "A letra é uma vogal." << endl;
            return 0;
        }
    }
    cout << "A letra é uma consoante." << endl;
    return 0;
}