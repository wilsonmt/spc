/*
  Wilson Moreira Tavares - 2014068334
  Problema "PRIMO"
  Acesso ao spoj via http://br.spoj.com/submit/PRIMO/
  #6 no roteiro 0 da wiki da maratona

  Estratégia pensada:
	  Calcular o resto da divisão do número por todos os outros números menores
		do que ele e maiores do que 2 (que é considerado primo), se algum desses
		restos encontrados for zero significa que o número é primo.
*/
#include <stdio.h>
int main()
{
	int numero, resultado = 1, i;
	scanf("%d", &numero);

	if(numero<=2)
		resultado=1;
	else
	{
		for (i=2; i<numero; i++	)
		{
			if (numero%i == 0)
			{
				resultado = 0;
				break;
			}
		}
	}
	if (resultado == 0)
		printf("nao\n");
	else
		printf("sim\n");
}
