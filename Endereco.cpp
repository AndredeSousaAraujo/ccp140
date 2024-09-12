#include <iostream>
using namespace std;

class Endereco{
    string rua, bairro;
    int numero;

    public:
        Endereco(string rua, string bairro, int numero):
        rua{rua}, bairro{bairro}, numero{numero}{}

        string getEndereco(){
            return rua+", "+to_string(numero)+" - "+bairro;
        }
};