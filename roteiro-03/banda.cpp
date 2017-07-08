/*
   Wilson Moreira Tavares - 2014068334
   Problema "BANDA09"
   Acesso ao spoj via http://br.spoj.com/problems/BANDA09
   #7 no roteiro 3 da wiki da maratona

   Estratégia pensada:
   Foi usada a estrategia de força bruta, onde os dados foram inseridos em
   uma matriz. Todos os cruzamentos entre integrantes foi calculado como a soma
   entre todos os valores de matriz[integr1][integr2], matriz[integr1][integr3]
   e matriz[integr2][integr3]. A combinação do tipo com a maior soma foi
   armazenada em um vetor. No fim o vetor com os integrantes da melhor banda
   foi ordenado e seu conteudo impresso na tela.
*/

#include <bits/stdc++.h>
using namespace std;

void calcula(int numMusicos, int numRelacionamentos)
{
    int relacionamentos[1002][1002], musicos[5];
    int artista1, artista2, valor, combinacao, maiorCombinacao=-1;
    int count, count2, count3;

    for (count=0; count<=numMusicos; count++)
    {
        for (count2=0; count2<=numMusicos; count2++)
            relacionamentos[count][count2]=0;
    }

    for (count=0; count<numRelacionamentos; count++)
    {
        cin >> artista1 >> artista2 >> valor;
        relacionamentos[artista1][artista2]=valor;
        relacionamentos[artista2][artista1]=valor;
    }

    for(count=1; count<=numMusicos; count++)
    {
        for(count2=1; count2<=numMusicos; count2++)
        {
            for(count3=1; count3<=numMusicos; count3++)
            {
                if(count!=count2 && count!=count3 && count2!=count3)
                {
                    combinacao = relacionamentos[count][count2] +
                        relacionamentos[count][count3] +
                        relacionamentos[count2][count3];
                    if(combinacao > maiorCombinacao)
                    {
                        maiorCombinacao = combinacao;
                        musicos[0] = count;
                        musicos[1] = count2;
                        musicos[2] = count3;
                    }
                }
            }
        }
    }

    sort(musicos, musicos+3);
    cout << musicos[0] << " " << musicos[1] << " " << musicos[2] << endl;
}


int main()
{
    std::ios_base::sync_with_stdio(false);

    int numMusicos, numRelacionamentos;
    cin >> numMusicos >> numRelacionamentos;
    calcula(numMusicos, numRelacionamentos);

    return 0;
}
