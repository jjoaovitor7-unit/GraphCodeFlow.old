#ifndef EH_COMPLETO_EH_REGULAR
#define EH_COMPLETO_EH_REGULAR

#include "adjacentes.h"

void ehCompleto_ehRegular(int nRow=0, int nCol=0) {
    bool ehCompleto=true;
    for(int i=0; i < nRow; i++) {
      for(int j=0; j < nCol; j++) {
        if(mAdj[i][j]==0) {
          ehCompleto=false;
          break;
        }
        else if(mAdj[i][j]==1) {
          ehCompleto=true;
        }
        else{
          std::cout << "Algo está errado!" << std::endl;
          break;
        }
      }
    }

    //verificação
    if(ehCompleto==true) {
      std::cout << "O grafo é completo, ou seja, também é regular =)"
                << std::endl;
    }
    else if(ehCompleto==false) {
      std::cout << "O grafo não é completo =(" << std::endl;
    }
}

#endif
