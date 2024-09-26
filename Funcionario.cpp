#include "Pessoa.cpp"

class Funcionario: public Pessoa{
    public:
        Funcionario(string nome, string sobrenome, long cpf, int dia, int mes, int ano, Endereco endereco):
            Pessoa(nome, sobrenome, cpf, dia, mes, ano, endereco){}
};