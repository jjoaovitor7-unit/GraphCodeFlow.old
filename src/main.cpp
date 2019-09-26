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

    //registro das adjacências na matriz mAdj
    int mAdj[getNumVertices()][getNumVertices()]={};
    for(int i=0; i < getNumVertices(); i++){
      for(int j=0; j < getNumVertices(); j++){
        std::cout << "Adjacência(v" << i << "v" << j << ")(0:não|1:sim):";
        std::cin >> mAdj[i][j];
      }
    }

    //printando a matriz de adjacência
    for(int i=0; i < getNumVertices(); i++){
      std::cout << "[";
      for(int j=0; j < getNumVertices(); j++){
        std::cout << " ";
        std::cout << mAdj[i][j];
        std::cout << " ";
      }
      std::cout << "]" << std::endl;
    }

    //inserindo a matriz de adjacência no arquivo matriz_adjacência.txt
    std::ofstream mAdjFILE;
    mAdjFILE.open("matriz_adjacência.txt", std::ios::app);
    for(int i=0; i < getNumVertices(); i++){
      mAdjFILE << "[";
      for(int j=0; j < getNumVertices(); j++){
        mAdjFILE << " ";
        mAdjFILE << mAdj[i][j];
        mAdjFILE << " ";
      }
      mAdjFILE << "]";
      mAdjFILE << std::endl;
    }
    mAdjFILE << "-----" << std::endl;
    mAdjFILE.close();

    //método ehCompleto e ehRegular
    bool ehCompleto=true;
    for(int i=0; i < getNumVertices(); i++) {
      for(int j=0; j < getNumVertices(); j++){
        if(mAdj[i][j]==0){
          ehCompleto=false;
          break;
        }
        else if(mAdj[i][j]==1){
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

    if(ehConexo=='S' || ehConexo=='s'){
      std::cout << "O grafo é conexo!" << std::endl;
    }
    else if(ehConexo=='N' || ehConexo=='n'){
      std::cout << "O grafo não é conexo!" << std::endl;
    }
    else{
      std::cout << "Apenas é aceito \'S\' ou \'N\'" << std::endl;
    }

    std::queue<int> fila;
    bool adjVisitada[getNumVertices()][getNumVertices()]={};
    //visitando as adjacências da matriz mAdj e adicionado-as na matriz
    //adjVisitada
    for(int i=0; i < getNumVertices(); i++){
      for(int j=0; j < getNumVertices(); j++){
        std::cout << "Visitando Adjacência[" << i << " " << j << "]"
        << std::endl;
        fila.push(mAdj[i][j]);
        adjVisitada[i][j]=true;
      }
    }

    //retirando elemento da fila (realizando a busca)
    for(int i=getNumVertices(); i>=0; i--){
      for(int j=getNumVertices(); j>=0; j--){
        if(adjVisitada[i][j]==true && fila.empty()==false){
          std::cout << "Retirando elemento " << fila.back() << " da fila."
          << std::endl;
          fila.pop();
        }
        else if(fila.empty()==true){
          std::cout << "A fila está vazia!" << std::endl;
          break;
        }
      }
    }
}

int main(){
    getAdjacentes();
    return 0;
}
