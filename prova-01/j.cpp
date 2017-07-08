#include <bits/stdc++.h>
using namespace std;
int resultado=0;


void percorre(int matriz[6][6], int matrizAux[6][6], int posicaoX, int posicaoY)
{
    if (matriz[posicaoX][posicaoY]==0)
    {
        matrizAux[posicaoX][posicaoY]=1;
    }

    if (posicaoX==0)
    {
        if (posicaoY==0)
        {
            if (matrizAux[posicaoX+1][posicaoY]!=1 && matriz[posicaoX+1][posicaoY]==0)
                percorre(matriz, matrizAux, posicaoX+1, posicaoY);
            if (matrizAux[posicaoX][posicaoY+1]!=1 && matriz[posicaoX][posicaoY+1]==0)
                percorre(matriz, matrizAux, posicaoX, posicaoY+1);
        }
        else if (posicaoY==4)
        {
            if (matrizAux[posicaoX+1][posicaoY]!=1 && matriz[posicaoX+1][posicaoY]==0)
                percorre(matriz, matrizAux, posicaoX+1, posicaoY);
            if (matrizAux[posicaoX][posicaoY-1]!=1 && matriz[posicaoX][posicaoY=1]==0)
                percorre(matriz, matrizAux, posicaoX, posicaoY-1);
        }
        else if (posicaoY>0 && posicaoY<4)
        {
            if (matrizAux[posicaoX+1][posicaoY]!=1 && matriz[posicaoX+1][posicaoY]==0)
                percorre(matriz, matrizAux, posicaoX+1, posicaoY);
            if (matrizAux[posicaoX][posicaoY-1]!=1 && matriz[posicaoX][posicaoY-1]==0)
                percorre(matriz, matrizAux, posicaoX, posicaoY-1);
            if (matrizAux[posicaoX][posicaoY+1]!=1 && matriz[posicaoX][posicaoY+1]==0)
                percorre(matriz, matrizAux, posicaoX, posicaoY+1);
        }
    }
    else if (posicaoX==4)
    {
        if (posicaoY==0)
        {
            if (matrizAux[posicaoX-1][posicaoY]!=1 && matriz[posicaoX-1][posicaoY]==0)
                percorre(matriz, matrizAux, posicaoX-1, posicaoY);
            if (matrizAux[posicaoX][posicaoY+1]!=1 && matriz[posicaoX][posicaoY+1]==0)
                percorre(matriz, matrizAux, posicaoX, posicaoY+1);
        }
        else if (posicaoY==4)
        {
            resultado=1;
        }
        else if (posicaoY>0 && posicaoY<4)
        {
            if (matrizAux[posicaoX-1][posicaoY]!=1 && matriz[posicaoX-1][posicaoY]==0)
                percorre(matriz, matrizAux, posicaoX-1, posicaoY);
            if (matrizAux[posicaoX][posicaoY-1]!=1 && matriz[posicaoX][posicaoY-1]==0)
                percorre(matriz, matrizAux, posicaoX, posicaoY-1);
            if (matrizAux[posicaoX][posicaoY+1]!=1 && matriz[posicaoX][posicaoY+1]==0)
                percorre(matriz, matrizAux, posicaoX, posicaoY+1);
        }
    }
    else if (posicaoX>0 && posicaoX<4)
    {
        if (posicaoY==0)
        {
            if (matrizAux[posicaoX-1][posicaoY]!=1 && matriz[posicaoX-1][posicaoY]==0)
                percorre(matriz, matrizAux, posicaoX-1, posicaoY);
            if (matrizAux[posicaoX+1][posicaoY]!=1 && matriz[posicaoX+1][posicaoY]==0)
                percorre(matriz, matrizAux, posicaoX+1, posicaoY);
            if (matrizAux[posicaoX][posicaoY+1]!=1 && matriz[posicaoX][posicaoY+1]==0)
                percorre(matriz, matrizAux, posicaoX, posicaoY+1);
        }
        else if (posicaoY==4)
        {
            if (matrizAux[posicaoX-1][posicaoY]!=1 && matriz[posicaoX-1][posicaoY]==0)
                percorre(matriz, matrizAux, posicaoX-1, posicaoY);
            if (matrizAux[posicaoX+1][posicaoY]!=1 && matriz[posicaoX+1][posicaoY]==0)
                percorre(matriz, matrizAux, posicaoX+1, posicaoY);
            if (matrizAux[posicaoX][posicaoY-1]!=1 && matriz[posicaoX][posicaoY-1]==0)
                percorre(matriz, matrizAux, posicaoX, posicaoY-1);
        }
        else if (posicaoY>0 && posicaoY<4)
        {
            if (matrizAux[posicaoX-1][posicaoY]!=1 && matriz[posicaoX-1][posicaoY]==0)
                percorre(matriz, matrizAux, posicaoX-1, posicaoY);
            if (matrizAux[posicaoX+1][posicaoY]!=1 && matriz[posicaoX+1][posicaoY]==0)
                percorre(matriz, matrizAux, posicaoX+1, posicaoY);
            if (matrizAux[posicaoX][posicaoY-1]!=1 && matriz[posicaoX][posicaoY-1]==0)
                percorre(matriz, matrizAux, posicaoX, posicaoY-1);
            if (matrizAux[posicaoX][posicaoY+1]!=1 && matriz[posicaoX][posicaoY+1]==0)
                percorre(matriz, matrizAux, posicaoX, posicaoY+1);
        }
    }

/*
    if (posicaoY<4)
        percorre(matriz, posicaoX, posicaoY+1);
    if (posicaoY>0)
        percorre(matriz, posicaoX, posicaoY-1);
    if (posicaoX<4)
        percorre(matriz, posicaoX+1, posicaoY);
    if (posicaoX>0)
*/
}

void calcula()
{
    int matriz[6][6];
    int matrizAux[6][6];
    resultado=0;

    for (int count=0; count<5; count++)
        cin >> matriz[count][0]
        >> matriz[count][1] >> matriz[count][2]
        >> matriz[count][3] >> matriz[count][4];

    for (int count=0; count<5; count++)
        for (int count2=0; count2<5; count2++)
            matrizAux[count][count2]=0;

    percorre(matriz, matrizAux, 0, 0);
    if (resultado)
        cout << "COPS" << endl;
    else
        cout << "ROBBERS" << endl;
//    cout << matrizAux[0][0] << endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    int numCasosDeTeste;
    cin >> numCasosDeTeste;

    for (int count=0; count<numCasosDeTeste; count++)
        calcula();

//    return 0;
}
