#include <bits/stdc++.h>
using namespace std;

void calc(int numOfInputs)
{
    map <long long int, int> inputs;
    long long int aloneNumber, insertedNumber;

    for (int count=0; count<numOfInputs; count++)
    {
        scanf("%lld", &insertedNumber);
        inputs[insertedNumber] += 1;
    }

    for (map<long long int, int>::iterator it=inputs.begin(); it!=inputs.end(); ++it)
    {
        if (((it->second)%2)!=0)
        {
            aloneNumber=it->first;
            printf("%lld\n", aloneNumber);
            break;
        }
    }
}

int main()
{
    int numOfInputs;
    scanf("%d", &numOfInputs);

    while(1)
    {
        if (numOfInputs==0)
            break;
        else
            calc(numOfInputs);
        scanf("%d", &numOfInputs);
    }

    return 0;
}
