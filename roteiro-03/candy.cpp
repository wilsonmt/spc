/*
   Wilson Moreira Tavares - 2014068334
   Problema "CANDY"
   Acesso ao spoj via http://br.spoj.com/problems/CANDY
   #4 no roteiro 3 da wiki da maratona

   Estratégia pensada:
   Para solucionar o problema a estratégia pensada foi a de verificar a
   diferença entre o valor dos sacos e o valor que eles devem ter. Para
   calcular o valor que os sacos devem ter foi feita uma média aritmética
   do valor contido em todos os sacos, que deveria possuir valor inteiro.
   Com esse dado calculado, o número de movimentos foi obtido da diferença
   de todos os pacotes com o número médio que deram valor positivo, poderia
   também ter sido calculada a soma total absoluta dividido por 2 ou
   simplesmente a soma absoluta dos valores negativos.
*/

#include <bits/stdc++.h>
using namespace std;

void calcula(int numPacotes)
{
    int pacotes[numPacotes+2], valor, soma=0, count, movimentos=0, movimentosAux;
    for(count=0; count<numPacotes; count++)
    {
        cin >> valor;
        pacotes[count] = valor;
        soma+=valor;
    }

    if (soma%numPacotes != 0)
        movimentos =-1;
    else
    {
        int numCadaPacote = soma/numPacotes;
        for (count=0; count<numPacotes; count++)
        {
            movimentosAux = (pacotes[count]-numCadaPacote);
            if (movimentosAux>0)
                movimentos+=movimentosAux;
        }
    }

    cout << movimentos << endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    int numPacotes;
    cin >> numPacotes;

    while(numPacotes != -1)
    {
        calcula(numPacotes);
        cin >> numPacotes;
    }

    return 0;
}
