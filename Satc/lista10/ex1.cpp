/*
1 - Crie uma classe chamada Complexo que representa um número complexo
com duas partes: a parte real e a parte imaginária.
Sobrecarregue o operador + para permitir a adição de dois objetos da
classe Complexo.
Implemente um método para imprimir o número complexo no formato
"(real + imagi)".

*/

#include <iostream>
using namespace std;

class Complexo{
    public:
        float real_,imaginario_;

        Complexo(float real,float imaginario): real_(real),imaginario_(imaginario){}
        Complexo();

        Complexo operator+(Complexo c){
            real_ = real_ + c.real_;
            imaginario_ = imaginario_ + c.imaginario_;

            return Complexo(real_,imaginario_);
        }

        void getComplexo(){
            cout << "("<< real_ << " + " << imaginario_ << "i)" << endl; 
        }

};

int main(){

    Complexo c1(1,2);
    Complexo c2(3,4);
    Complexo c3 = c1 + c2;
    
    c3.getComplexo();

    return 0;
}