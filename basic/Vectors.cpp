#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    //alocação estatica
    int vet[4] = {1,2}; //gerando um vetor com tamanho fixo de 4 posições {1,2,0,0}, os zeros por não ter atribuido nada ele ja interpreta como 0
    
    for(int i = 0; i < 4; i++){
        cout << "vet[" << i << "]: " << vet[i] << endl;
    }

    int x = sizeof(vet);//pega o tamanho do vetor em bytes 4x4 = 16 bytes
    cout << "Tamanho do vetor em bytes: " << x << endl;

    int y = sizeof(vet)/sizeof(int);//pega o tamanho do vetor em bytes e divide pelo tamanho de um elemento do vetor
    cout << "Tamanho do vetor em elementos: " << y << endl;
    
    //alocação dinamica
    cout << "Insira o tamanho do vetor: " << endl;
    int size;
    cin >> size;

    int* vet2 = new int[size];//alocando um vetor de tamanho size

    cout << "Insira os valores do vetor: " << endl;
    for(int i = 0; i < size; i++){
        cin >> vet2[i];
    }
    cout << "valores adicionados: " << endl;
    for(int i = 0; i < size; i++){
        cout << "vet2[" << i+1 << "]: " << vet2[i] << endl;
    }

    delete[] vet2;//liberando o espaço de memória alocado para o vetor

    cout << "Vetor dinamico ou lista" << endl;

    vector<int> vet3;//criando um vetor dinamico
    vet3.push_back(5);//adicionando um elemento ao vetor
    vet3.push_back(10);
    vet3.push_back(15);

    size = vet3.size();//pegando o tamanho do vetor
    for (int i = 0; i < size; i++) {
        cout << "vet3[" << i << "]: " << vet3[i] << endl;
    }

    
    return 0; 
}