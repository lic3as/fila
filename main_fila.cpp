//IMPLEMTAÇÃO DE FILA COM VETORES

#include <iostream>
#include "fila.cpp"

using namespace std;

int main(){
    fila fila1;
    int opcao;
    TipoItem item;
    cout << "PROGRAMA GERADOR DE FILAS" << endl;

    do{
        cout << "Digite 0 para encerrar o programa" << endl;
        cout << "Digite 1 para inserir um elemento" << endl;
        cout << "Digite 2 para remover um elemento" << endl;
        cout << "Digite 3 para imprimir a fila" << endl;
        cin >> opcao;

        if(opcao == 1){
            cout << "Digite o elemento a ser inserido na fila: " << endl;
            cin >> item;
            fila1.inserir(item);
        } else if(opcao == 2){
            item = fila1.remover();
            cout << "O elemento " << item << " da fila foi removido." << endl;
        } else if(opcao == 3){
            fila1.imprimir();
        }
    } while(opcao != 0);

    return 0;
}
