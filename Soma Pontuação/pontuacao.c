#include <stdio.h>

int main() {
	int soma, n1, n2;
	printf("Digite a primeira pontuação:");
	scanf ("%d", &n1);
	printf("Digite a segunda pontuação:");
	scanf ("%d", &n2);
	soma= n1+n2;
	if (soma >= 3500){
		printf("O aluno foi aprovado");
	} else if (soma >= 2000 ){
		printf("O aluno terá que fazer substitutiva.");
	} else {
		printf ("O aluno foi reprovado");
	}

	return 0;
}
