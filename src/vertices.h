#ifndef VERTICES_H
#define VERTICES_H

//pedir o número (quantidade) de vértices (texto)
void requestNumVertices(){
    std::cout << "Número de Vértices:";
}

int numv=0;
void setNumVertices(){
    std::cin >> numv;
}

//retorna o número (quantidade) de vértices
int getNumVertices(){
    return numv;
}

#endif
