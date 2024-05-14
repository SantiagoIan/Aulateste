#include <stdio.h>

int main() {
    float nota, frequencia;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    printf("Digite a frequencia do aluno: ");
    scanf("%f", &frequencia);

    if (nota > 10 && frequencia > 75) {
        printf("O aluno está aprovado!\n");
    } else {
        printf("O aluno está reprovado.\n");
    }

    return 0;
}
