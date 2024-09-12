#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Endereco e("Rua dos Limoeiros", "Vila do Chaves", 4002);
    Pessoa p("Andre", "Araujo", 12345678900, 11, 9, 2024, e);
    //p.setNome("Nome");
    //p.setSobrenome("Sobrenome");
    //p.setCPF(12345678900);
    cout << p.getNome() << endl;
    cout << p.getSobrenome() << endl;
    cout << p.getCPF() << endl;
    cout << p.getNascimento() << endl;
    cout << p.getEndereco() << endl;
}