/*
   Wilson Moreira Tavares - 2014068334
   Problema "BRACELMG"
   Acesso ao spoj via http://br.spoj.com/problems/BRACELMG
   #2 no roteiro 2 da wiki da maratona

   Estratégia pensada:
   Para verificar se a sequencia proibida esta no bracelete verifica-se se há
   casamento de cadeias de caracteres da sequencia proibida no bracelete.
   Como o bracelete é circular, nem sempre a estratégia citada acima funcionará,
   para tal, concatenar a strings do bracelete com ela mesma é uma medida que
   cobre todo o escopo de busca.
   Para verificar os casos em que a sequencia proibida está invertida no
   bracelete, a string original e a concatenada do bracelete são invertidas
   através da função reverse e passam pelo mesmo processo descrito anteriormente
*/

#include <bits/stdc++.h>
using namespace std;

bool procuraSubstring(string padrao, string texto)
{
    if (texto.find(padrao) != string::npos)
        return 1;
    else
        return 0;
}

bool verificaBracelete(string sequenciaProibida, string bracelete)
{
    bool braceleteProibido;

    braceleteProibido = procuraSubstring(sequenciaProibida, bracelete);
    if (braceleteProibido)
        return 1;

    string braceleteDuplicado = bracelete+bracelete;
    braceleteProibido = procuraSubstring(sequenciaProibida, braceleteDuplicado);
    if (braceleteProibido)
        return 1;

    reverse(bracelete.begin(), bracelete.end());
    braceleteProibido = procuraSubstring(sequenciaProibida, bracelete);
    if (braceleteProibido)
        return 1;

    reverse(braceleteDuplicado.begin(), braceleteDuplicado.end());
    braceleteProibido = procuraSubstring(sequenciaProibida, braceleteDuplicado);
    if (braceleteProibido)
        return 1;

    return 0;
}


int main()
{
    std::ios_base::sync_with_stdio(false);

    int numCasosDeTeste, resultado;
    string sequenciaProibida, bracelete;
    cin >> numCasosDeTeste;

    for (int count=0; count<numCasosDeTeste; count++)
    {
        cin >> sequenciaProibida >> bracelete;
        resultado = verificaBracelete(sequenciaProibida, bracelete);

        if (resultado)
            cout << "S" << '\n';
        else
            cout << "N" << '\n';
    }
}
