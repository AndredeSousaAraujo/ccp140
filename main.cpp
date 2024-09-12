#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Pessoa p;
    p.setNome("Nome");
    p.setSobrenome("Sobrenome");
    p.setCPF(12345678900);
    cout << p.getNome() << endl;
    cout << p.getSobrenome() << endl;
    cout << p.getCPF() << endl;
}