// TODO implemente essa classe de acordo com o hpp correspondente
#include "pedido.hpp"

  /**
   * @brief Destrutor da classe.
   * Aqui voce deve deletar os ponteiros contidos na lista _produtos
   */
    Pedido::~Pedido(){
        for(auto &x : _produtos)
            delete x;
    }

  /**
   * @brief Adiciona um novo produto ao pedido.
   * @param p Ponteiro do tipo base Produto.
   * Pode ser da classe derivada: Pizza, Hamburguer ou Japonesa.
   */
    void Pedido::adicionaProduto(Produto* p){
        _produtos.push_back(p);
    }

  /**
   * @brief Calcula o valor total do pedido.
   * @return float Valor total do pedido
   */
    float Pedido::calculaTotal(Produto* p) const{
        float preco;
        for(auto &x : _produtos)
            preco += p->calcPreco();
        return preco;
    }

  /**
   * @brief Retorna um resumo detalhado do pedido, com todos os produtos.
   * Aqui voce deve percorrer a lista de produtos para criar um resumo completo
   * do pedido. A cada iteracao, utilize o metodo descricao de cada produto para
   * montar o resumo do pedido. Por fim, adicione o endereco de entrega.
   * @return std::string Resumo do pedido
   */
    std::string Pedido::resumo(Produto* p) const{
        std::string resumo;
        for(auto &p : _produtos)
            resumo += p->descricao();
        return resumo;
  }

  /**
   * @brief Atualiza o endereco de entrega
   *
   * @param endereco Endereco de entrega
   */
    void Pedido::setEndereco(const std::string& endereco){
        _endereco = endereco;
    }