#include <iostream>
#include "Pessoa.cpp"
#include <fstream>
#include "Funcionario.cpp"
#include <climits>
using namespace std;

void escreveArquivo(string nome, string texto){
    fstream arquivo;
    arquivo.open(nome, ios::out);
    if(arquivo.is_open()){
        arquivo << texto;
        arquivo.close();
    }
    else {
        cout << "Erro ao abrir o arquivo!\n";
    }
    cout << "Arquivo criado!\n";
}

void leArquivo(string nome){
    fstream arquivo;
    arquivo.open(nome, ios::in);
    string texto;

    cout << "Leitura do Arquivo:\n";
    if(arquivo.is_open()){
        while(getline(arquivo, texto))
            cout << texto << '\n';
        arquivo.close();
    }
    else {
        cout << "Erro ao abrir o arquivo!\n";
    }
}

int main(){

    string nome;

    cout << "Entre com o nome do arquivo: " << endl;
    cin >> nome;

    string frase = "André Araujo\n";

    cout << "Entre com o texto a ser escrito no arquivo: " << endl;
    //cin >> frase;
    cin.ignore(INT_MAX, '\n');
    getline(cin, frase);

    escreveArquivo(nome, frase);
    leArquivo(nome);

    


    // Endereco e("Rua dos Limoeiros", "Vila do Chaves", 4002);
    // Funcionario p("Andre", "Araujo", 12345678900, 11, 9, 2024, e);

    // //p.setNome("Nome");
    // //p.setSobrenome("Sobrenome");
    // //p.setCPF(12345678900);
    // cout << p.getNome() << endl;
    // cout << p.getSobrenome() << endl;
    // cout << p.getCPF() << endl;
    // cout << p.getNascimento() << endl;
    // cout << p.getEndereco() << endl;
}