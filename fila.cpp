#include <iostream>
#include "fila.h"

using namespace std;

fila::fila(){
    primeiro = 0;
    ultimo = 0;
    estrutura = new TipoItem[max_itens];
}

fila::~fila(){
    delete [] estrutura;
}

bool fila::estaVazia(){
    return(primeiro == ultimo); //se o primeiro for igual o último, a fila esta vazia (retorna true)
}

bool fila::estaCheia(){
    return(ultimo - primeiro == max_itens); //se o ultimo menos o primeiro for igual ao máximo de itens, a fila esta cheia (retorna true)
}

void fila::inserir(TipoItem item){
    if(estaCheia()){ //verificar primeiro se a fila esta cheia
        cout << "A fila esta cheia! O elemento nao pode ser inserido." << endl;
    } else{
        estrutura[ultimo % max_itens] = item; //coloca na posição do resto da divisao entre o ultimo e o maximo de itens pq a posição pode passar do maximo
        ultimo++; //incrementa o ultimo já que adicionou mais um
    }
}

TipoItem fila::remover(){
    if(estaVazia()){ //verificar primeiro se a fila esta vazia
        cout << "A fila esta vazia! Nenhum elemento foi removido." << endl;
        return 0;
    } else{
        primeiro++; //incrementa o primeiro para a próxima posição
        return estrutura[(primeiro - 1) % max_itens]; //lembrando que remove do começo e insere no fim
    }
}

void fila::imprimir(){
    cout << "Fila: [ ";
    for(int i = primeiro; i < ultimo; i++){
        cout << estrutura[i % max_itens] << " ";
    } cout << "]" << endl;
}
