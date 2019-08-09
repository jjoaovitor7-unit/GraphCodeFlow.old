#include <iostream>

//pedir o número (quantidade) de vértices (texto)
void requestNumVertices(){
    std::cout << "Número de Vértices:";
}

//pedir o número (quantidade) de arestas (texto)
void requestNumArestas(){
    std::cout << "Número de Arestas:";
}

//pedir o número (quantidade) de adjacentes (texto)
void requestNumAdjacentes(){
    std::cout << "Número de Adjacentes:";
}

//pegar o número (quantidade) de vértices
int getNumVertices(int numv){
    return numv;
}

//pegar o número (quantidade) de arestas
int getNumArestas(int numar){
    return numar;
}

//pegar o número (quantidade) de adjacentes
int getNumAdjacentes(int numad){
    return numad;
}

int main(){
    requestNumVertices();
    int numav;
    std::cin >> numv;
    getNumVertices(numv);

    requestNumArestas();
    int numar;
    std::cin >> numar;
    getNumArestas(numar);

    requestNumAdjacentes();
    int numad;
    std::cin >> numad;
    getNumAdjacentes(numad);

    return 0;
}
