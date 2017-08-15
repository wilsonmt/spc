#include <bits/stdc++.h>
using namespace std;

void calc()
{
    vector<string> words[51];

    char input[3000];
    fgets(input, 3000, stdin);

    string word, output;
    int wordSize;

    char *token = std::strtok(input, " \n");
    while (token != NULL) {
        word = token;
        wordSize = strlen(token);
        words[wordSize].push_back(word);
        token = std::strtok(NULL, " \n");
    }

    for (int count=50; count>0; count--)
    {
        if (!words[count].empty())
        {
            for (int count2=0; count2<words[count].size(); count2++)
            {
                output.append(words[count][count2]);
                output.append(" ");
            }

        }
    }
    output = output.substr(0, output.size()-1);
    printf("%s", output.c_str());
    printf("\n");
}


int main()
{
    std::ios_base::sync_with_stdio(false);

    int numberOfTestCases;
    scanf("%d \n", &numberOfTestCases);

    for (int count=0; count<numberOfTestCases; count++)
        calc();

    return 0;
}
