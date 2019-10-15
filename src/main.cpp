#include <iostream>
#include <clocale>
#include <vector>
#include <fstream>
#include <queue>

#include "vertices.h"
#include "adjacentes.h"
#include "ehCompleto_ehRegular.h"
#include "ehConexo.h"
#include "BFS.h"

int main() {
    std::setlocale(LC_ALL, "Portuguese");
    setNumVertices();

    int nRow=getNumVertices(), nCol=getNumVertices();
    getAdjacentes(nRow, nCol);
    printMatrizDeAdjacencia(nRow, nCol);
    inserindoArquivo(nRow, nCol);

    ehCompleto_ehRegular(nRow, nCol);
    ehConexo();
    BFS(nRow, nCol);

    system("pause");
    return 0;
}
