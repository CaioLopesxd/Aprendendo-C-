#include <iostream>

using namespace std;

// Função para verificar se o aluno foi aprovado ou reprovado
void checkApproval(float average) {
    if (average >= 6) {
        cout << "Aprovado com média: " << average << endl;
    } else {
        cout << "Reprovado com média: " << average << endl;
    }
}

int main(){
    float avarage,n1,n2,n3;

    cout << "Digite as 3 notas do semestre: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    avarage = (n1 + n2 + n3) / 3;

    checkApproval(avarage);
    
    system("pause");
}