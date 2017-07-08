/*
   Wilson Moreira Tavares - 2014068334
   Problema "PEDAGIO"
   Acesso ao spoj via http://br.spoj.com/problems/PEDAGIO
   #4 no roteiro 5 da wiki da maratona

   Estratégia pensada:

*/

#include <bits/stdc++.h>
using namespace std;


void buscaEmLargura(int grafo[51][51], int inicial,
    int tam, int * visitados, int numPedagiosPagos, int numPedagios)
{
    if (numPedagiosPagos<visitados[inicial])
        visitados[inicial]=numPedagiosPagos;
    numPedagiosPagos++;

    if (numPedagiosPagos<=numPedagios)
    {
        for (int count=0; count<=tam; count++)
        {
            if (grafo[inicial][count]==1)
                buscaEmLargura(grafo, count, tam, visitados,
                    numPedagiosPagos, numPedagios);
        }
    }
}


void calcula(int numVertices, int numArestas,
    int cidadeInicial, int numPedagios, int instancia)
{
    int inicio, fim, resultado=1;
    int count, count2;

    int * visitados;
    visitados = (int*)malloc((numVertices+1)*sizeof(int));

    int grafo[51][51];

    for (count=0; count<numVertices; count++)
    {
        visitados[count]=-1;
        for (count2=0; count2<numVertices+2; count2++)
            grafo[count][count2]=0;
    }

    for (count=0; count<numArestas; count++)
    {
        scanf("%d %d\n", &inicio, &fim);
        grafo[inicio-1][fim-1]=1;
        grafo[fim-1][inicio-1]=1;
    }

//    buscaEmLargura(grafo, cidadeInicial-1, numVertices,
//        visitados, 0, numPedagios);

    visitados[inicio]=0;
    for(count2=0; count2<numVertices; count2++)
    {
        if (grafo[inicio][count2]==1)
            visitados[count2]==1;
    }

    for (count=1; count<numPedagios; count++)
    {
        if (visitados[count]>0)
        {
            for (count2=0; count2<numVertices; count2++)
            {
                for (int count3=0; count3<numVertices; count3++)
                {
                    if (grafo[count2][count3]==1)
                        visitados[count2]

                }
            }
        }
    }

    printf("Teste %d\n", instancia);
    for (count=0; count<numVertices; count++)
    {
        if (visitados[count]<=numPedagios && visitados[count]!=0)
            printf("%d ", count+1);
    }
    printf("\n\n");

    free(visitados);
}


int main()
{
    int numVertices, numArestas, cidadeInicial, numPedagios, instancia=0;

    while(1)
    {
        instancia++;
        scanf("%d %d %d %d\n", &numVertices,
            &numArestas, &cidadeInicial, &numPedagios);
        if (numVertices==0 && numArestas==0
            && cidadeInicial==0 && numPedagios==0)
            break;
        else
            calcula(numVertices, numArestas,
                cidadeInicial, numPedagios, instancia);
    }
    return 0;
}
