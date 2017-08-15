#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);

    int jump, numPipes, count, result=1;
    cin >> jump >> numPipes;
    int pipes[numPipes];

    for (count=0; count<numPipes; count++)
        cin >> pipes[count];

    for (count=0; count<numPipes-1; count++)
    {
        if ((pipes[count+1] > pipes[count]+jump) || (pipes[count+1] < pipes[count]-jump))
        {
            result=0;
            break;
        }
    }

    if (result)
        cout << "YOU WIN" << endl;
    else
        cout << "GAME OVER" << endl;

    return 0;
}
