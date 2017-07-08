/*
   Wilson Moreira Tavares - 2014068334
   Problema "PLACAR"
   Acesso ao spoj via http://br.spoj.com/problems/PLACAR
   #6 no roteiro 2 da wiki da maratona

   Estratégia pensada:
   Foi criada uma estrutura do tipo vector que armazena uma string e um inteiro,
   esses valores sao relativos ao nome e nota do aluno. A medida que o algoritmo
   vai inserindo itens no vector ele verifica qual e a menor nota.
   Ao fim da insercao de itens, todos os alunos com notas maiores que a menor
   sao retirados da lista, ficando somente os que possuem menor nota.
   A lista e ordenada por ordem alfabetica inversa, sendo o seu primeiro item o
   aluno que deve ser reprovado.
*/


#include <bits/stdc++.h>
using namespace std;


bool comparaMenorNota(const pair<int, string>& primeiro,
    const pair<int, string>& segundo)
{
     return primeiro.first < segundo.first;
}

bool comparaAlfabeto(const pair<int, string>& primeiro,
    const pair<int, string>& segundo)
{
     return primeiro.second > segundo.second;
}

void calculaReprovado(int instancia, int numEntradas)
{
    string aluno;
    int nota;
    int menorNota=10, count;

    vector<pair<int, string> > entradas;
    vector<pair<int, string> > entradasFinal;

    for (count=0; count<numEntradas; count++)
    {
        cin >> aluno >> nota;
        if (nota <= menorNota)
        {
            menorNota = nota;
            entradas.push_back(make_pair(nota, aluno));
        }
    }
    sort(entradas.begin(), entradas.end(), comparaMenorNota);

    for(count=0; count<entradas.size(); count++)
    {
        if (entradas[count].first <= menorNota)
            entradasFinal.push_back(make_pair(entradas[count].first,
                entradas[count].second));
    }
    sort(entradasFinal.begin(), entradasFinal.end(), comparaAlfabeto);

    cout << "Instancia " << instancia << endl << entradasFinal[0].second << endl;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    int instancia=0, numEntradas;

    while (cin >> numEntradas)
    {
        instancia++;
        calculaReprovado(instancia, numEntradas);
    }

    return 0;
}
