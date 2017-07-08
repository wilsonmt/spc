/*
   Wilson Moreira Tavares - 2014068334
   Problema "ALIENSMG"
   Acesso ao spoj via http://br.spoj.com/problems/ALIENSMG
   #10 no roteiro 2 da wiki da maratona

   Estratégia pensada:
   Foi criado um vector de string. Esse vector é populado com todos os mDNA's
   ordenados, depois de todas as insercoes o vector e ordenado. Apos isso um
   for e feito, comparando os itens do vector e analisando quantos itens
   repetidos existem no vector. Ao fim o tamanho do vector menos o numero de
   itens iguais e imprimido na tela.
*/

#include <bits/stdc++.h>
using namespace std;

void calcula(int numIndividuos)
{
    vector<string> individuos;
    string mDNA;
    int count, iguais=0;

    for(count=0; count<numIndividuos; count++)
    {
        cin >> mDNA;
        sort(mDNA.begin(), mDNA.end());
        individuos.push_back(mDNA);
    }
    sort(individuos.begin(), individuos.end());

    for (count=1; count<individuos.size(); count++)
    {
        if (individuos[count]==individuos[count-1])
            iguais++;
    }

    cout << individuos.size()-iguais << endl;
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
