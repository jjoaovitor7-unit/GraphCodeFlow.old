#ifndef BFS_H
#define BFS_H

#include "vertices.h"
#include "adjacentes.h"

std::queue<int> fila;
//Busca em Largura|Breadth-First Search (BFS)
void BFS(int nRow=0, int nCol=0) {
    bool adjVisitada[getNumVertices()][getNumVertices()]={};
    //visitando as adjacências da matriz mAdj e adicionado-as na matriz
    //adjVisitada
    for(int i=0; i < nRow; i++) {
      for(int j=0; j < nCol; j++) {
        std::cout << "Visitando Adjacência[" << i << " " << j << "]"
        << std::endl;
        fila.push(mAdj[i][j]);
        adjVisitada[i][j]=true;
      }
    }

    //retirando elemento da fila (realizando a busca)
    for(int i=nRow; i >= 0; i--) {
      for(int j=nCol; j >= 0; j--) {
        if(adjVisitada[i][j]==true && fila.empty()==false) {
          std::cout << "Retirando elemento " << fila.back() << " da fila."
          << std::endl;
          fila.pop();
        }
        else if(fila.empty()==true) {
          std::cout << "A fila está vazia!" << std::endl;
          break;
        }
      }
    }
}

#endif
