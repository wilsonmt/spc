/*
   Wilson Moreira Tavares - 2014068334
   Problema "POPULAR"
   Acesso ao spoj via http://br.spoj.com/problems/POPULAR
   #1 no roteiro 3 da wiki da maratona

   Estratégia pensada:
   Foi criada uma matriz para armazenar o numero de votos de cada aluno,
   essa matriz foi acrescida de votos de acordo com as entradas e no fim
   o maior valor da matriz foi impresso na tela.
*/

#include <bits/stdc++.h>
using namespace std;

void calcula(int numIndividuos)
{
    int votos[101], count, count2, nota, maior=-1;

    for (count=0; count<numIndividuos; count++)
        votos[count]=0;

    for (count=0; count<numIndividuos; count++)
    {
        for(count2=0; count2<numIndividuos; count2++)
        {
            cin >> nota;
            if (nota)
                votos[count2]++;
        }
    }

    for (count=0; count<numIndividuos; count++)
    {
        if (votos[count]>maior)
            maior=votos[count];
    }

    cout << maior << endl;
}


int main()
{
    std::ios_base::sync_with_stdio(false);

    int numIndividuos;

    while(1)
    {
        cin >> numIndividuos;
        if (numIndividuos==0)
            break;
        else
            calcula(numIndividuos);
    }

    return 0;
}
