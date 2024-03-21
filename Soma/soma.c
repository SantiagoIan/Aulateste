#include <stdio.h>

int main()
{
	int soma, valor1, valor2;

	printf("Digite um valor:");
	scanf("%d", &valor1);

	printf("\nDigite outro valor:");
	scanf("%d", &valor2);

	soma=valor1+valor2;

	printf("\na soma dos valores digitados sao: %d", soma);
	return 0;
}
