/*
  Wilson Moreira Tavares - 2014068334
  Problema "QUADRAD2"
  Acesso ao spoj via http://br.spoj.com/submit/QUADRAD2/
  #1 no roteiro 0 da wiki da maratona

  Estratégia pensada:
    Multiplicar um número por ele mesmo, obtendo o quadrado.
*/

#include<stdio.h>

int main()
{
  int number;
  scanf ("%d", &number);
  number *= number;
  printf("%d\n", number);

  return 0;
}
