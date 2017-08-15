#include <bits/stdc++.h>
using namespace std;


void calc()
{
    string player1, player2, choicePlayer1, choicePlayer2;
    int numberPlayer1, numberPlayer2, sum, pair;

    cin >> player1 >> choicePlayer1 >> player2 >> choicePlayer2;
    cin >> numberPlayer1 >> numberPlayer2;

    sum = numberPlayer1+numberPlayer2;
    if (sum%2==0)
        pair=1;
    else
        pair=0;

    if (pair)
    {
        if (choicePlayer1=="PAR")
            cout << player1 << endl;
        else
            cout << player2 << endl;
    }
    else if (!pair)
    {
        if (choicePlayer1=="IMPAR")
            cout << player1 << endl;
        else
            cout << player2 << endl;
    }

}


int main()
{
    std::ios_base::sync_with_stdio(false);

    int numberOfTestCases;
    cin >> numberOfTestCases;

    for (int count=0; count<numberOfTestCases; count++)
        calc();

    return 0;
}
