#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_

#include <string>

class Funcionario
{
private:
    std::string nome;
    float salario;
    std::string data_admissao;


public:
    
    ~Funcionario();
    std::string getNome();
    float getSalario();
    std::string getData_admissao();
    void setNome(std::string var_nome);
    void setSalario(float var_salario);
    void setData_admissao(std::string var_data_admissao);
};
#endif