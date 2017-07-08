/*
   Wilson Moreira Tavares - 2014068334
   Problema "PALAVRMG"
   Acesso ao spoj via http://br.spoj.com/submit/PALAVRMG/
   #1 no roteiro 2 da wiki da maratona

   Estratégia pensada:
    Criar um vetor de caracteres auxiliar, o qual será ordenado e comparado
    com o vetor original, ambos com letras minúsculas, se ambos forem iguais,
    verifica-se se o vetor possui caracteres repetidos, caso não haja,
    a palavra está ordenada.

    Obs: Dois vetores de caracteres auxiliares foram criados, um contendo a
    palavra com letras minusculas usando a função tolower() e outro contendo
    a palavra com letras minusculas e ordenado atraves da função sort(),
    o vetor original foi mantido pois é necessário imprimir a palavra como foi
    digitada ao fim da execução.
 */

#include <bits/stdc++.h>
using namespace std;

void computa(char entrada[50])
{
        int tamanho, ordenada, semRepeticoes=1, i;
        char entradaAux[50], entradaMinuscula[50];

        strcpy(entradaAux, entrada);
        strcpy(entradaMinuscula, entrada);
        tamanho = strlen(entradaAux);

        for (i=0; i<tamanho; i++)
        {
                entradaAux[i] = tolower(entradaAux[i]);
                entradaMinuscula[i] = tolower(entradaMinuscula[i]);
        }

        sort(entradaAux, entradaAux+tamanho);

        if (strcmp(entradaMinuscula, entradaAux) == 0)
                ordenada = 1;
        else
                ordenada = 0;

        if (ordenada)
        {
                for (i=0; i<tamanho-1; i++)
                {
                        if (entradaAux[i] == entradaAux[i+1])
                        {
                                semRepeticoes = 0;
                                break;
                        }
                }
        }

        if (ordenada && semRepeticoes)
                printf("%s: O\n", entrada);
        else
                printf("%s: N\n", entrada);
}


int main()
{
        std::ios_base::sync_with_stdio(false);

        int numEntradas;
        char entrada[50];

        scanf("%d", &numEntradas);

        for (int i=0; i<numEntradas; i++)
        {
                scanf("%s", entrada);
                computa(entrada);
        }
}
