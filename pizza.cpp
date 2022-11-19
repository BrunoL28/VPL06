// TODO implemente essa classe de acordo com o hpp correspondente
#include "pizza.hpp"

  /**
   * @brief Construtor padrao que inicializa todas as variaveis da classe.
   * Note que o valor unitario (membro da classe mãe) deve ser calculado 
   * através do método calcPreco.
   *
   * @param sabor Sabor da pizza: Ex: 4 queijos
   * @param pedacos Quantidade de pedacos da pizza
   * @param borda_recheada Informa se a pizza tem borda recheada ou nao
   * @param qtd Quantidade de pizzas
   */
    Pizza::Pizza(const std::string& sabor, int pedacos, bool borda_recheada, int qtd):
        _sabor(sabor), _pedacos(pedacos), _borda_recheada(borda_recheada), _qtd(qtd)
    {}

    const std::string Pizza::get_sabor(){
        return _sabor;
    }

    int Pizza::get_pedacos(){
        return _pedacos;
    }

    bool Pizza::get_borda(){
        return _borda_recheada;
    }
      
    int Pizza::get_quantidade(){
        return _qtd;
    }

    int Pizza::find_substring(std::string str, std::string str1){
        str = _sabor;
        str1 = "especial";

        size_t found = str.find(str1);
        if(found != std::string::npos)
            return 1;
        return 0;
    }

  /**
   * @brief Calcula o valor da pizza de acordo com as regras:
   * 5 reais por pedaço + 10 reais se borda recheada  
   * + 8 reais se sabor tiver a palavra "especial" 
   * (ex: especial bacon, frango com catupiry especial)
   * 
   * @return float preço da pizza em reais
   */
    float Pizza::calcPreco(){
        std::string str = "especial";
        float preco = get_pedacos()*5.00 + get_borda()*10.00 + find_substring(get_sabor(), str)*8.00;
        return preco; 
    }

  /**
   * @brief Retorna uma descricao detalhada da pizza.
   *
   * @return std::string Descricao da pizza.
   */
    std::string Pizza::descricao() const{
        std::string fatias = std::to_string(_pedacos);
        std::string sabor = _sabor;
        std::string borda;
        if(_borda_recheada == 1)
            borda = "com borda recheada ";
        if(_borda_recheada == 0)
            borda = "sem borda recheada ";
        std::string quantidade = std::to_string(_qtd);
        std::string desc = quantidade + "X pizza(s) de " + fatias + " fatias, e sabor " + sabor + borda;
        return desc;
    }
