// TODO implemente essa classe de acordo com o hpp correspondente

#include "venda.hpp"

/**
   * @brief Adiciona um novo pedido a lista de pedidos processados.
   * @param p Representa o novo pedido que foi recebido.
   */
  void Venda::adicionaPedido(Pedido* p){
    _pedidos.push_back(p);
  }

  /**
   * @brief Imprime um relatorio de vendas detalhado com todos os pedidos
   * realizados, a quantidade de pedidos recebidos e o total de venda.
   * 
   * Aqui voce tem que percorrer a lista de todos os pedidos e imprimir o resumo
   * de cada um. Por ultimo, devera ser exibido o total de vendas e a quantidade
   * de pedidos processados.
   */
  void Venda::imprimeRelatorio() const{
    std::list<Pedido*>::iterator it;
    for(auto it = 0; it != _pedidos.size(); it++){
        std::cout << it << std::endl;
    }
    std::cout << "Total de pedidos: " << _pedidos.size() << std::endl;
  }

  /**
   * @brief Destrutor da classe
   * Aqui voce deve deletar os ponteiros contidos na lista m_pedidos
   */
  Venda::~Venda(){
    for(auto &x : _pedidos){
        delete [] x;
    }
  }
  
