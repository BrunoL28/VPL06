// TODO implemente essa classe de acordo com o hpp correspondente
#include "cachorro_quente.hpp"

  /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * Note que o valor unitario (membro da classe mãe) deve ser calculado 
   * através do método calcPreco.
   *
   * @param num_salsichas número de salsichas
   * @param complementos coleção de complementos
   * @param prensado se o cachorro quente deve ser prensado
   * @param qtd Quantidade do item.
   */
    CachorroQuente::CachorroQuente(int num_salsichas, std::vector<std::string>& complementos, bool prensado, int qtd):
        _num_salsichas(num_salsichas), _complementos(complementos), _prensado(prensado), _qtd(qtd)
    {}

    int CachorroQuente::get_num_salsichas(){
        return _num_salsichas;
    }

    std::vector<std::string> CachorroQuente::get_descricao(){
        return _complementos;
    }

    bool CachorroQuente::get_prensado(){
        return _prensado;
    }
  
    int CachorroQuente::get_quantidade(){
        return _qtd;
    }

  /**
   * @brief Calcula o valor do cachorro quente de acordo com as regras:
   * 5 reais preço base + 1.50 real por salsicha 
   * + 1 real por complemento + 0.50 centavos se for prensar
   * 
   * @return float preço do cachorro quente em reais
   */
    float CachorroQuente::calcPreco(){
        float preco = 5.00 + get_num_salsichas()*1.50 + get_descricao().size()*1.00 + get_prensado()*0.50;
        return preco;
    }

  /**
   * @brief Retorna a descricao detalhada da comida japonesa.
   * Ex: 4X cachorro-quente com 2 salsichas, milho, queijo ralado.
   *
   * @return std::string Descricao da comida japonesa.
   */
    std::string CachorroQuente::descricao() const{
        std::string quantidade = std::to_string(_qtd);
        std::string salsichas = std::to_string(_num_salsichas);
        std::string complementos;
        for(auto &x : _complementos){
            complementos += x;
            complementos += ",";
        }
        std::string desc = quantidade + "X cachorro-quente com " + salsichas + " salsichas, " + complementos;
        return desc;
    }