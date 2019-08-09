#include <iostream>
#include <string>

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
    //pedir o número (quantidade) de vértices (texto)
    requestNumVertices();

    int numv;

    //pegar o número (quantidade) de vértices
    std::cin >> numv;
    getNumVertices(numv);

    //pedir o número (quantidade) de arestas (texto)
    requestNumArestas();

    int numar;

    //pegar o número (quantidade) de vértices
    std::cin >> numar;
    getNumArestas(numar);

    //pedir o número (quantidade) de adjacentes (texto)
    requestNumAdjacentes();

    int numad;

    //pegar o número (quantidade) de adjacentes
    std::cin >> numad;
    getNumAdjacentes(numad);

    //registro dos vértices
    std::string vetorv[getNumVertices(numv)];
    for(int i=0; i < getNumVertices(numv); i++){
      std::cout << "Vértice " << i << ":";
      std::cin >> vetorv[i];
    }

    //printando vetor de vértices
    std::cout << "Vértices - [";
    for(int i=0; i < getNumVertices(numv); i++){
      std::cout << vetorv[i] << ", ";
    }
    std::cout << "]" << std::endl;

    //registro das arestas
    std::string vetorar[getNumArestas(numar)];
    for(int i=0; i < getNumArestas(numar); i++){
      std::cout << "Aresta " << i << ":";
      std::cin >> vetorar[i];
    }

    //printando vetor de arestas
    std::cout << "Arestas - [";
    for(int i=0; i < getNumArestas(numar); i++){
      std::cout << vetorar[i] << ", ";
    }
    std::cout << "]" << std::endl;

    //registro dos adjacentes
    std::string vetorad[getNumAdjacentes(numad)];
    for(int i=0; i < getNumAdjacentes(numad); i++){
      std::cout << "Adjacente " << i << ":";
      std::cin >> vetorad[i];
    }

    //printando vetor de adjacentes
    std::cout << "Adjacentes - [";
    for(int i=0; i < getNumAdjacentes(numad); i++){
      std::cout << vetorad[i];
    }
    std::cout << "]" << std::endl;

    return 0;
}
