#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);

    int pulo, numCanos, count, resultado=1;
    cin >> pulo >> numCanos;
    int canos[numCanos];

    for (count=0; count<numCanos; count++)
        cin >> canos[count];

    for (count=0; count<numCanos-1; count++)
    {
        if ((canos[count+1] > canos[count]+pulo) || (canos[count+1] < canos[count]-pulo))
        {
            resultado=0;
            break;
        }
    }

    if (resultado)
        cout << "YOU WIN" << endl;
    else
        cout << "GAME OVER" << endl;

    return 0;
}
