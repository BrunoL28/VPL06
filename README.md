# VPL06

Durante a pandemia, a utilização de aplicativos para fazer pedidos dos mais variados se tornou muito comum. Neste problema, você terá que simular a compra de lanches do festival ICEx para levantar fundos para o DCE. Para isso, implemente seis classes: Venda, Pedido, Produto, Açaí, Cachorro-quente e Pizza. 

OBS: Os arquivos venda.hpp, pedido.hpp e produto.hpp não devem ser modificados.

A classe Produto armazena as informações e métodos listadas a seguir. Note que seus métodos (em itálico) são virtuais e não implementam comportamento padrão.

Produto

--------------------------------------------------------------------------------------------------------------------------

# _quantidade: int

# _valor_unitario: float

+ descricao() = 0 : string

+ calcPreco() = 0 : float


As classes Açaí, Pizza e Cachorro-Quente herdam de Produto, e possuem as seguintes especificidades:

Açai

--------------------------------------------------------------------------------------------------------------------------

- _tamanho: int

- _complementos: string[1..10]

+ Acai(int tam, vector<string>& comp, int qtd)

+ descricao() : string

+ calcPreco() : float


Cachorro-quente

--------------------------------------------------------------------------------------------------------------------------

- _num_salsichas: int

- _complementos: string[1..10]

- _prensado: bool

+ CachorroQuente(int num_s, vector<string>& comp, bool prens, int qtd)

+ descricao() : string

+ calcPreco() : float


Pizza

--------------------------------------------------------------------------------------------------------------------------

- _sabor: string

- _num_pedacos: int

- _borda_recheada: bool

+ Pizza(string sabor, int pedacos, bool borda, int qtd)

+ descricao() : string

+ calcPreco() : float

A classe Pedido deverá ter uma lista de produtos, o endereco de entrega e os seguintes métodos deverão ser implementados (modifiquem apenas o arquivo pedido.cpp):

Pedido

------------------------------------------------------------------

- produtos: std::list<Produto*>

- endereco: string

+ adicionaProduto(Produto* p): void

+ calculaTotal(): float

+ resumo(): string

+ setEndereco(string endereco): void


Breve descrição:

void adicionaProduto(Produto* p); // adiciona um produto ao pedido

float calculaTotal(); // calcula e retorna o valor total do pedido

string resumo(); // retorna um resumo do pedido (uma descrição de todos os produtos que fazem parte do pedido e o endereço de entrega no final)

setEndereco(string endereco); // atualiza o endereço de entrega do pedido


A classe Venda, terá uma lista de pedidos recebidos e os métodos a seguir (modifiquem apenas o arquivo venda.cpp):

Venda

--------------------------------------------------------------------------------------------------------------------------

- pedidos: std::list<Pedido*>

+ adicionaPedido(Pedido* p): void

+ imprimeRelatorio(): void


Breve descrição:

void adicionaPedido(Pedido* p); // adiciona um pedido à lista de pedidos recebidos

void imprimeRelatorio(); // imprime a lista completa de todos pedidos processados, o total de vendas e a quantidade de pedidos recebidos

Referências

https://www.cplusplus.com/doc/tutorial/classes/

https://www.cplusplus.com/reference/list/list/

https://www.cplusplus.com/reference/string/string/

https://www.cplusplus.com/doc/tutorial/inheritance/

https://www.cplusplus.com/doc/tutorial/polymorphism/

http://www.cplusplus.com/forum/beginner/222475/

Formato de entrada

Os pedidos são compostos por uma lista de produtos e um endereço de entrega. A tag pedido indica o início de um novo pedido e a tag endereço indica o final do pedido. Cada linha de  produto informa o tipo do produto (açaí, cachorro-quente ou pizza) seguido dos respectivos atributos na mesma ordem dos seus construtores.

Formato de saída

Após o processamento de todos os pedidos, o método imprimeRelatorio() da classe Venda é executado. O relatório deverá imprimir uma descrição detalhada de todos os pedidos que foram processados, a quantidade de pedidos e o total de vendas. Assim como no exemplo a seguir.
