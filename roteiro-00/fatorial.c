/*
  Wilson Moreira Tavares - 2014068334
  Problema "FATORIA2"
  Acesso ao spoj via http://br.spoj.com/submit/FATORIA2/
  #3 no roteiro 0 da wiki da maratona

  Estratégia pensada:
  	Usar um for para percorrer todo o espaço de cálculo e assim
	mutiplicar por todos os números menores do que o número escolhido.

	Uma opção pensada seria armazenar os valores do fatorial de 0 a 12,
	dessa forma um menor tempo de execução seria alcançado, mas não sei se
	essa prática seria considerada válida na disciplina, portanto decidi fazer
	no método "tradicional"
*/

#include <stdio.h>
int main()
{
	int input, result = 1;
	scanf("%d", &input);
	if (input != 0 && input != 1)
	{
		for (int i=input; i>=2; i--)
			result *= i;
	}

	printf("%d\n", result);
	return 0;
}
