/*
  Wilson Moreira Tavares - 2014068334
  Problema "SOMA"
  SPOJ: http://br.spoj.com/problems/SOMA/
  #2 no roteiro 0 da wiki da maratona

  Estratégia pensada:
    Ler os n inteiros através de um for e adicioná-los
    a uma variável de soma criada.
*/

#include<stdio.h>
int main()
{
  int reps, number, sum=0;
  scanf ("%d", &reps);

  for (int i=0; i<reps; i++)
  {
    scanf("%d", &number);
    sum += number;
  }

  printf("%d\n", sum);

  return 0;
}
