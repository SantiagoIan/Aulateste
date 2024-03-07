#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	printf ("Olá, Mundo!\n"); /* Imprime oque esta escrito */ 
	/* (\n) usado para quebra de linha na linguagem c */
	
	int soma,valor1,valor2;
	
	
	printf("Digite um valor:");
	scanf ("%d", &valor1);
	
		printf("\nDigite outro valor:");
	scanf ("%d", &valor2);
	
	soma=valor1+valor2;
	
	printf("\na soma dos valores digitados sao: %d", soma);
	return 0;
}
