#ifndef ADJACENTES_H
#define ADJACENTES_H

#include "vertices.h"

std::vector < std::vector<int> > mAdj;
void getAdjacentes(int nRow=0, int nCol=0) {
    mAdj.resize(nCol, std::vector<int>(nRow));

    //registro das adjacências na matriz mAdj
    for(int i=0; i < nRow; i++) {
      for(int j=0; j < nCol; j++) {
        std::cout << "Adjacência(v" << i << "v" << j << ")(0:não|1:sim):";
        std::cin >> mAdj[i][j];
      }
    }
}

void printMatrizDeAdjacencia(int nRow=0, int nCol=0) {
    //printando a matriz de adjacência mAdj
    for(int i=0; i < nRow; i++) {
      std::cout << "[";
      for(int j=0; j < nCol; j++) {
        std::cout << " ";
        std::cout << mAdj[i][j];
        std::cout << " ";
      }
      std::cout << "]" << std::endl;
    }
}

void inserindoArquivo(int nRow=0, int nCol=0) {
    //inserindo a matriz de adjacência no arquivo matriz_adj.txt
    std::ofstream mAdjFILE;
    mAdjFILE.open("matriz_adj.txt", std::ios::app);
    for(int i=0; i < nRow; i++) {
      mAdjFILE << "[";
      for(int j=0; j < nCol; j++) {
        mAdjFILE << " ";
        mAdjFILE << mAdj[i][j];
        mAdjFILE << " ";
      }
      mAdjFILE << "]";
      mAdjFILE << std::endl;
    }
    mAdjFILE << "-----" << std::endl;
    mAdjFILE.close();
}

#endif
