/*
   Wilson Moreira Tavares - 2014068334
   Problema "IREVIR"
   Acesso ao spoj via http://br.spoj.com/problems/IREVIR
   #1 no roteiro 5 da wiki da maratona

   Estratégia pensada:
   A estratégia pensada foi utilizar o algoritmo de busca em largura para
   verificar se há um caminho para todos os vértices a partir de um inicial,
   para verificar para todos os vértices, a busca em largura foi chamada
   para todos os nós.
*/

#include <bits/stdc++.h>
using namespace std;


void buscaEmLargura(int ** grafo, int inicial, int tam, int * visitados)
{
    for (int count=0; count<=tam; count++)
    {
        if (grafo[inicial][count]==1 && visitados[count]==0)
        {
            visitados[count]=1;
            buscaEmLargura(grafo, count, tam, visitados);
        }
    }
}


void calcula(int numVertices, int numArestas)
{
    int inicio, fim, tipoRua, resultado=1;
    int count, count2;

    int * visitados;
    visitados = (int*)malloc((numVertices+1)*sizeof(int));

    int ** grafo;
    grafo = (int**)malloc((numVertices+1)*sizeof(int*));

    for (count=0; count<numVertices; count++)
    {
        visitados[count]=0;
        grafo[count] = (int*)malloc((numVertices+1)*sizeof(int));
        for (count2=0; count2<numVertices+2; count2++)
            grafo[count][count2]=0;
    }

    for (count=0; count<numArestas; count++)
    {
        cin >> inicio >> fim >> tipoRua;
        inicio--;
        fim--;
        grafo[inicio][fim]=1;
        if (tipoRua==2)
            grafo[fim][inicio]=1;
    }

    for (count=0; count<numVertices; count++)
    {
        buscaEmLargura(grafo, count, numVertices, visitados);
        for (count2=0; count2<numVertices; count2++)
        {
            if(visitados[count2]==0)
            {
                resultado=0;
                break;
            }
            else
                visitados[count2]=0;
        }
    }

    cout << resultado << endl;
}


int main()
{
    std::ios_base::sync_with_stdio(false);

    int numVertices, numArestas;

    while(1)
    {
        cin >> numVertices >> numArestas;
        if (numVertices==0)
            break;
        else
            calcula(numVertices, numArestas);
    }

    return 0;
}
