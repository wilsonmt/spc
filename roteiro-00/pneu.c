/*
  Wilson Moreira Tavares - 2014068334
  Problema "JPNEU"
  Acesso ao spoj via http://br.spoj.com/submit/JPNEU/
  #7 no roteiro 0 da wiki da maratona

  Estratégia pensada:
  	Calcular a diferença entre pressão desejada
		e pressão lida e imprimí-la na tela.
*/

#include <stdio.h>
int main()
{
	int pressaoDesejada, pressaoLida, resultado;
	scanf("%d", &pressaoDesejada);
	scanf("%d", &pressaoLida);

	resultado = pressaoDesejada - pressaoLida;
	printf("%d\n", resultado);
}
