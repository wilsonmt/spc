#include <bits/stdc++.h>
using namespace std;

void calcula()
{
    vector<string> palavras[51];

    char entrada[3000];
    fgets(entrada, 3000, stdin);

    string palavra, saida;
    int tamPalavra;

    char *token = std::strtok(entrada, " \n");
    while (token != NULL) {
        palavra = token;
        tamPalavra = strlen(token);
        palavras[tamPalavra].push_back(palavra);
        token = std::strtok(NULL, " \n");
    }

    for (int count=50; count>0; count--)
    {
        if (!palavras[count].empty())
        {
            for (int count2=0; count2<palavras[count].size(); count2++)
            {
                saida.append(palavras[count][count2]);
                saida.append(" ");
            }

        }
    }
    saida = saida.substr(0, saida.size()-1);
    printf("%s", saida.c_str());
    printf("\n");
}


int main()
{
    std::ios_base::sync_with_stdio(false);

    int numCasosDeTeste;
    scanf("%d \n", &numCasosDeTeste);

    for (int count=0; count<numCasosDeTeste; count++)
        calcula();

    return 0;
}
