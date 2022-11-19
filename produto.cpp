// TODO implemente essa classe de acordo com o hpp correspondente
#include "produto.hpp"

  /**
   * @brief Retorna a quantidade de itens do produto
   *
   * @return int Quantidade de itens do produto
   */
    int Produto::getQtd() const{
        return _quantidade;
    }

  /**
   * @brief Retorna o valor unitario do produto
   *
   * @return float Valor unitario do produto
   */
    float Produto::getValor() const{
        return _valor_unitario;
    }
