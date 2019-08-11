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
    
    //método ehCompleto e ehRegular
    bool ehCompleto=true;
    for(int i=0; i < getNumVertices(numv); i++) {
      for(int j=0; j < getNumVertices(numv); j++){
        if(nv[i][j] == 0){
          ehCompleto=false;
          break;
        }
        else if(nv[i][j] == 1){
          ehCompleto=true;
        }
      }
    }

    if(ehCompleto==true){
      std::cout << "O grafo é completo, ou seja, também é regular =)" << std::endl;
    }
    else if(ehCompleto==false){
      std::cout << "O grafo não é completo =(" << std::endl;
    }

}

int main(){
    getAdjacentes();
    return 0;
}
