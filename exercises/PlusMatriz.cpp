//crie um algoritmo que soma duas matriz1es de tamanho n x m, onde n e m são valores informados pelo usuário.

#include <iostream>

using namespace std;

int main(){

    int tamanho;

    // Alocação dinâmica da matriz1 
    cout << "Insira o tamanho da matriz simetrica:" << endl;
    cin >> tamanho;
    int** matriz1 = new int*[tamanho];
    for (int i = 0; i < tamanho; ++i) {
        matriz1[i] = new int[tamanho];
    }
    //adicionando os valores da matriz1
    for(int i =0; i< tamanho;i++){
        for(int j=0;j<tamanho;j++){
            cout << "Matriz 1 linha: " << i+1 << " coluna: " << j+1 << endl;
            cin >> matriz1[i][j];
        }
    }
    
    // Alocação dinâmica da matriz1 
    int** matriz2 = new int*[tamanho];
    for (int i = 0; i < tamanho; ++i) {
        matriz2[i] = new int[tamanho];
    }
    //adicionando os valores da matriz2
    for(int i =0; i< tamanho;i++){
        for(int j=0;j<tamanho;j++){
            cout << "Matriz 2 linha: " << i+1 << " coluna: " << j+1 << endl;
            cin >> matriz2[i][j];
        }
    }

    int** somaMatrizes = new int*[tamanho];
    for (int i = 0; i < tamanho; ++i) {
        somaMatrizes[i] = new int[tamanho];
    }

    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            somaMatrizes[i][j] = matriz1[i][j]+matriz2[i][j];
        }
    }

    cout << "Soma das matrizes:" << endl;
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            cout <<somaMatrizes[i][j] << " ";
        }
        cout << endl;
    }
    
    // Libera a memória alocada
    for (int i = 0; i < tamanho; ++i) {
        delete[] matriz1[i];
        delete[] matriz2[i];
        delete[] somaMatrizes[i];
    }
    delete[] matriz1;
    delete[] matriz2;
    delete[] somaMatrizes;

    return 0;
}