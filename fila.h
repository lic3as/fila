//fila = queue
typedef int TipoItem;
const int max_itens = 100;

class fila{

    private:
    int primeiro, ultimo; //posições na fila
    TipoItem* estrutura; //vetor que conterá a fila

    public:
    fila(); //construtor
    ~fila(); //destrutor
    bool estaVazia(); //isEmpty
    bool estaCheia(); //isFull 
    void inserir(TipoItem item); //push //enqueue
    TipoItem remover(); //pop //dequeue
    void imprimir(); //print

};
