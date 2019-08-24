#include <iostream>
//#include <clocale>
#include <fstream>

#include "requestNumVertices.h"

//retorna o número (quantidade) de vértices
int getNumVertices(int numv){
    return numv;
}

//método getAdjacentes
void getAdjacentes(){
    //std::setlocale(LC_ALL, "Portuguese");
    requestNumVertices();

    //pegar o número (quantidade) de vértices e colocar na variável numv
    int numv;
    std::cin >> numv;
    getNumVertices(numv);

    //registro das adjacências da matriz de adjacência
    int nv[numv][numv];
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
      std::cout << "]" << std::endl;
    }

    //inserindo a matriz de adjacência em um arquivo(matriz_adjacência.txt)
    std::ofstream matrizAdjFILE;
    matrizAdjFILE.open("matriz_adjacência.txt", std::ios::app);
    for(int i=0; i < getNumVertices(numv); i++){
      matrizAdjFILE << "[";
      for(int j=0; j < getNumVertices(numv); j++){
        matrizAdjFILE << " ";
        matrizAdjFILE << nv[i][j];
        matrizAdjFILE << " ";
      }
      matrizAdjFILE << "]";
      matrizAdjFILE << std::endl;
    }
    matrizAdjFILE << "-----" << std::endl;
    matrizAdjFILE.close();

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
        else{
          std::cout << "Algo está errado!" << std::endl;
          break;
        }
      }
    }

    if(ehCompleto==true){
      std::cout << "O grafo é completo, ou seja, também é regular =)"
                << std::endl;
    }
    else if(ehCompleto==false){
      std::cout << "O grafo não é completo =(" << std::endl;
    }

    //método ehConexo
    char ehConexo;
    std::cout << "Conexo(S/N):";
    std::cin >> ehConexo;
}

int main(){
    getAdjacentes();
    return 0;
}
