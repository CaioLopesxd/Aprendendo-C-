#include <iostream>

using namespace std;

int main(){
    const string title = "Estrutura de Repetição";
    cout << title << endl;
    
    int n;
    cout << "Digite um número: ";
    cin >> n;
    
    cout << "For" << endl;
    for(int i = 0; i <= n; i++){
        cout << i << endl;
    }

    cout << "While" << endl;
    int i = 0;
    while (i< n){
        i++;
        cout << i << endl;
    }

    cout << "Do While" << endl;
    do{
        i++;
        cout << i << endl;
    }while (i < n);
    
    
    return 0;
}