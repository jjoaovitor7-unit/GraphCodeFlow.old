#ifndef VERTICES_H
#define VERTICES_H

int numVertices=0;
//seta o número de vértices
void setNumVertices(){
    std::cout << "Número de Vértices:";
    std::cin >> numVertices;
}

//retorn o número de vértices
int getNumVertices(){
    return numVertices;
}

#endif
