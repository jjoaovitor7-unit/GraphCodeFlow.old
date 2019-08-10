#include <iostream>

//pedir o número (quantidade) de vértices (texto)
void requestNumVertices(){
    std::cout << "Número de Vértices:";
}

//pegar o número (quantidade) de vértices
int getNumVertices(int numv){
    return numv;
}

//fazer a matriz de adjacência
void getAdjacentes(){
    //pedir o número (quantidade) de vértices (texto)
    requestNumVertices();

    int numv;
    //pegar o número (quantidade) de vértices
    std::cin >> numv;
    getNumVertices(numv);

    int nv[numv][numv];
    //registro das adjacências da matriz de adjacência
    for(int i=0; i < getNumVertices(numv); i++){
      for(int j=0; j < getNumVertices(numv); j++){
        std::cout << "Adjacência(v" << i << "v" << j << ")(0:não|1:sim):";
        std::cin >> nv[i][j];
      }
    }

    //printando a matriz de adjacência
    for(int i=0; i < getNumVertices(numv); i++){
      std::cout << "[";
      for(int j=0; j < getNumVertices(numv); j++){
        std::cout << " ";
        std::cout << nv[i][j];
        std::cout << " ";
      }
      std::cout << "]";
      std::cout << std::endl;
    }

}

int main(){
    getAdjacentes();
    return 0;
}
