#ifndef EH_CONEXO_H
#define EH_CONEXO_H

bool ehConexo() {
    char ehConexo;
    std::cout << "Conexo(S/N):";
    std::cin >> ehConexo;

    //verificação
    if(ehConexo=='S' || ehConexo=='s'){
      std::cout << "O grafo é conexo!" << std::endl;
      return true;
    }
    else if(ehConexo=='N' || ehConexo=='n'){
      std::cout << "O grafo não é conexo!" << std::endl;
      return false;
    }
    else{
      std::cout << "Apenas é aceito \'S\' ou \'N\'" << std::endl;
      return false;
    }
}

#endif
