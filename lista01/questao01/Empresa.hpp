#ifndef _EMPRESA_
#define _EMPRESA_

#include <string>
#include "Funcionario.hpp"

#define CAPACIDADE_MAX 99

class Empresa
{
private:
    Funcionario* quadro_funcionarios[CAPACIDADE_MAX];
    std::string razao_social;
    std::string cnpj;
    std::string regime_tributos;
    int quantidade_funcionarios = 0;
    

public:
    /*Construtor e destrutor
    Empresa();
    ~Empresa(); */

    /*Getters*/
    std::string getRazao_social();
    std::string getCnpj();
    std::string getRegime_tributos();
    int getQuantidade_funcionarios();
    

    /*Setters*/
    void setRazao_social(std::string var_razao_social);
    void setCnpj(std::string var_cnpj);
    void setRegime_tributos(std::string var_regime_tributos);

    /*Outras funções*/
    void addFuncionarios(Funcionario* novo);
    void mostrarFuncionarios();
    void removerFuncionario(std::string var_nome);
    
};

#endif

