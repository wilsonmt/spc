#include <bits/stdc++.h>
using namespace std;

void calcula(int numEntradas)
{
    map <long long int, int> entradas;
    long long int numSozinho, numInserido;

    for (int count=0; count<numEntradas; count++)
    {
        scanf("%lld", &numInserido);
        entradas[numInserido] += 1;
    }

    for (map<long long int, int>::iterator it=entradas.begin(); it!=entradas.end(); ++it)
    {
        if (((it->second)%2)!=0)
        {
            numSozinho=it->first;
            printf("%lld\n", numSozinho);
            break;
        }
    }
}

int main()
{
    int numEntradas;
    scanf("%d", &numEntradas);

    while(1)
    {
        if (numEntradas==0)
            break;
        else
            calcula(numEntradas);
        scanf("%d", &numEntradas);
    }

    return 0;
}
