// TODO implemente essa classe de acordo com o hpp correspondente
#include "acai.hpp"

 /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * Note que o valor unitario (membro da classe mãe) deve ser calculado 
   * através do método calcPreco.
   *
   * @param tamanho Tamanho do açai em ml
   * @param complementos Coleção de strings com os complementos 
   * @param qtd Quantidade de açaís do mesmo tamanho e complementos
   */
    Acai::Acai(int tamanho, std::vector<std::string>& complementos, int qtd):
        _tamanho(tamanho), _complementos(complementos), _qtd(qtd)
    {}

    int Acai::get_tamanho(){
        return _tamanho;
    }

    int Acai::get_quantidade(){
        return _qtd;
    }

    std::vector<std::string> Acai::get_descricao(){
        return _complementos;
    }

  /**
   * @brief Calcula o valor do açaí de acordo com as regras:
   * 0.02 centavos por ml + 2 reais cada complemento
   * 
   * @return float preço do açaí em reais
   */
    float Acai::calcPreco(){
        float preco = get_tamanho()*0.02 + get_descricao().size()*2.00;
        return preco;
    }

  /**
   * @brief Retorna uma descricao detalhada do açaí.
   * Exemplo: 2X açai 700ml com leite em pó, granola.
   *
   * @return std::string Descricao detalhada do açai
   */
    std::string Acai::descricao() const{
        std::string quantidade = std::to_string(_qtd);
        std::string tamanho = std::to_string(_tamanho);
        std::string complementos;
        for(auto &x : _complementos){
            complementos += x;
            complementos += ",";
        }
        std::string desc = quantidade + "X acai " + tamanho + "ml com " + complementos;
        return desc;
    }
