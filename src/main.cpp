#include <iostream>
//#include <clocale>
#include <fstream>
#include <queue>

#include "vertices.h"

//método getAdjacentes
void getAdjacentes(){
    //std::setlocale(LC_ALL, "Portuguese");
    requestNumVertices();
    setNumVertices();

    //registro das adjacências da matriz de adjacência
    int nv[numv][numv];
    for(int i=0; i < getNumVertices(); i++){
      for(int j=0; j < getNumVertices(); j++){
        std::cout << "Adjacência(v" << i << "v" << j << ")(0:não|1:sim):";
        std::cin >> nv[i][j];
      }
    }

    //printando a matriz de adjacência
    for(int i=0; i < getNumVertices(); i++){
      std::cout << "[";
      for(int j=0; j < getNumVertices(); j++){
        std::cout << " ";
        std::cout << nv[i][j];
        std::cout << " ";
      }
      std::cout << "]" << std::endl;
    }

    //inserindo a matriz de adjacência em um arquivo(matriz_adjacência.txt)
    std::ofstream matrizAdjFILE;
    matrizAdjFILE.open("matriz_adjacência.txt", std::ios::app);
    for(int i=0; i < getNumVertices(); i++){
      matrizAdjFILE << "[";
      for(int j=0; j < getNumVertices(); j++){
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
    for(int i=0; i < getNumVertices(); i++) {
      for(int j=0; j < getNumVertices(); j++){
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

    std::queue<int> fila;
    for(int i=0; i < getNumVertices(); i++){
      for(int j=0; j < getNumVertices(); j++){
        fila.push(nv[i][j]);
      }
    }

    while(!fila.empty()){
      std::cout << " " << fila.front();
      fila.pop();
    }
    std::cout << std::endl;
    //se a fila estiver vazia
    if(fila.empty()){
      std::cout << "A fila está vazia!" << std::endl;
    }
}

int main(){
    getAdjacentes();
    return 0;
}
