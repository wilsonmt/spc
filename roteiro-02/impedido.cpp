/*
   Wilson Moreira Tavares - 2014068334
   Problema "IMPEDIDO"
   Acesso ao spoj via http://br.spoj.com/problems/IMPEDIDO
   #5 no roteiro 2 da wiki da maratona

   Estratégia pensada:
   Foram criados dois vetores, um contendo as distancias dos atacantes e outro
   contendo as distancias dos defensores para a linha de fundo.
   Para saber se um atacante esta impedido, compara sua distancia com as dos
   defensores. Se a distancia for maior ou igual a ao menos dois defensores
   o atacante esta em posicao regular. 
*/

#include <bits/stdc++.h>
using namespace std;

void calcula(int numAtacantes, int numDefensores)
{
    int atacantes[20], defensores[20];
    int count, count2, metros, impedido=0, numDefensoresFrente=0;

    for (count=0; count<numAtacantes; count++)
    {
        cin >> metros;
        atacantes[count] = metros;
    }
    sort(atacantes, atacantes+numAtacantes);

    for (count=0; count<numDefensores; count++)
    {
        cin >> metros;
        defensores[count] = metros;
    }
    sort(defensores, defensores+numDefensores);

    for (count=0; count<numAtacantes; count++)
    {
        if (impedido)
            break;

        impedido=numDefensoresFrente=0;

        for (count2=0; count2<numDefensores; count2++)
        {
            if (atacantes[count]>=defensores[count2])
                numDefensoresFrente++;
        }

        if (numDefensoresFrente<2)
            impedido=1;
        else
            impedido=0;
    }

    if (impedido)
        cout << "Y" << endl;
    else
        cout << "N" << endl;
}


int main()
{
    std::ios_base::sync_with_stdio(false);

    int numAtacantes=1, numDefensores=1, count;

    while(1)
    {
        cin >> numAtacantes >> numDefensores;

        if (numAtacantes==0 && numDefensores==0)
            break;
        else
            calcula(numAtacantes, numDefensores);
    }
    return 0;
}
