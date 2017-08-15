#include <bits/stdc++.h>
using namespace std;
int result=0;


void walks(int matrix[6][6], int matrixAux[6][6], int posX, int posY)
{
    if (matrix[posX][posY]==0)
    {
        matrixAux[posX][posY]=1;
    }

    if (posX==0)
    {
        if (posY==0)
        {
            if (matrixAux[posX+1][posY]!=1 && matrix[posX+1][posY]==0)
                walks(matrix, matrixAux, posX+1, posY);
            if (matrixAux[posX][posY+1]!=1 && matrix[posX][posY+1]==0)
                walks(matrix, matrixAux, posX, posY+1);
        }
        else if (posY==4)
        {
            if (matrixAux[posX+1][posY]!=1 && matrix[posX+1][posY]==0)
                walks(matrix, matrixAux, posX+1, posY);
            if (matrixAux[posX][posY-1]!=1 && matrix[posX][posY=1]==0)
                walks(matrix, matrixAux, posX, posY-1);
        }
        else if (posY>0 && posY<4)
        {
            if (matrixAux[posX+1][posY]!=1 && matrix[posX+1][posY]==0)
                walks(matrix, matrixAux, posX+1, posY);
            if (matrixAux[posX][posY-1]!=1 && matrix[posX][posY-1]==0)
                walks(matrix, matrixAux, posX, posY-1);
            if (matrixAux[posX][posY+1]!=1 && matrix[posX][posY+1]==0)
                walks(matrix, matrixAux, posX, posY+1);
        }
    }
    else if (posX==4)
    {
        if (posY==0)
        {
            if (matrixAux[posX-1][posY]!=1 && matrix[posX-1][posY]==0)
                walks(matrix, matrixAux, posX-1, posY);
            if (matrixAux[posX][posY+1]!=1 && matrix[posX][posY+1]==0)
                walks(matrix, matrixAux, posX, posY+1);
        }
        else if (posY==4)
        {
            result=1;
        }
        else if (posY>0 && posY<4)
        {
            if (matrixAux[posX-1][posY]!=1 && matrix[posX-1][posY]==0)
                walks(matrix, matrixAux, posX-1, posY);
            if (matrixAux[posX][posY-1]!=1 && matrix[posX][posY-1]==0)
                walks(matrix, matrixAux, posX, posY-1);
            if (matrixAux[posX][posY+1]!=1 && matrix[posX][posY+1]==0)
                walks(matrix, matrixAux, posX, posY+1);
        }
    }
    else if (posX>0 && posX<4)
    {
        if (posY==0)
        {
            if (matrixAux[posX-1][posY]!=1 && matrix[posX-1][posY]==0)
                walks(matrix, matrixAux, posX-1, posY);
            if (matrixAux[posX+1][posY]!=1 && matrix[posX+1][posY]==0)
                walks(matrix, matrixAux, posX+1, posY);
            if (matrixAux[posX][posY+1]!=1 && matrix[posX][posY+1]==0)
                walks(matrix, matrixAux, posX, posY+1);
        }
        else if (posY==4)
        {
            if (matrixAux[posX-1][posY]!=1 && matrix[posX-1][posY]==0)
                walks(matrix, matrixAux, posX-1, posY);
            if (matrixAux[posX+1][posY]!=1 && matrix[posX+1][posY]==0)
                walks(matrix, matrixAux, posX+1, posY);
            if (matrixAux[posX][posY-1]!=1 && matrix[posX][posY-1]==0)
                walks(matrix, matrixAux, posX, posY-1);
        }
        else if (posY>0 && posY<4)
        {
            if (matrixAux[posX-1][posY]!=1 && matrix[posX-1][posY]==0)
                walks(matrix, matrixAux, posX-1, posY);
            if (matrixAux[posX+1][posY]!=1 && matrix[posX+1][posY]==0)
                walks(matrix, matrixAux, posX+1, posY);
            if (matrixAux[posX][posY-1]!=1 && matrix[posX][posY-1]==0)
                walks(matrix, matrixAux, posX, posY-1);
            if (matrixAux[posX][posY+1]!=1 && matrix[posX][posY+1]==0)
                walks(matrix, matrixAux, posX, posY+1);
        }
    }
}

void calc()
{
    int matrix[6][6];
    int matrixAux[6][6];
    result=0;

    for (int count=0; count<5; count++)
        cin >> matrix[count][0]
        >> matrix[count][1] >> matrix[count][2]
        >> matrix[count][3] >> matrix[count][4];

    for (int count=0; count<5; count++)
        for (int count2=0; count2<5; count2++)
            matrixAux[count][count2]=0;

    walks(matrix, matrixAux, 0, 0);
    if (result)
        cout << "COPS" << endl;
    else
        cout << "ROBBERS" << endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    int numberOfTestCases;
    cin >> numberOfTestCases;

    for (int count=0; count<numberOfTestCases; count++)
        calc();
}
