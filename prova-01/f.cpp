#include <bits/stdc++.h>
using namespace std;


void calcula()
{
    string jogador1, jogador2, escolhaJogador1, escolhaJogador2;
    int numeroJogador1, numeroJogador2, soma, par;

    cin >> jogador1 >> escolhaJogador1 >> jogador2 >> escolhaJogador2;
    cin >> numeroJogador1 >> numeroJogador2;

    soma = numeroJogador1+numeroJogador2;
    if (soma%2==0)
        par=1;
    else
        par=0;

    if (par)
    {
        if (escolhaJogador1=="PAR")
            cout << jogador1 << endl;
        else
            cout << jogador2 << endl;
    }
    else if (!par)
    {
        if (escolhaJogador1=="IMPAR")
            cout << jogador1 << endl;
        else
            cout << jogador2 << endl;
    }

}


int main()
{
    std::ios_base::sync_with_stdio(false);

    int numCasosTeste;
    cin >> numCasosTeste;

    for (int count=0; count<numCasosTeste; count++)
        calcula();

    return 0;
}
