#include <stdio.h>

int main() {
    float nota, frequencia;

    // Solicita a nota e a frequência do aluno
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    printf("Digite a frequencia do aluno: ");
    scanf("%f", &frequencia);

    // Verifica se o aluno está aprovado
    if (nota > 10 && frequencia > 75) {
        printf("O aluno está aprovado!\n");
    } else {
        printf("O aluno está reprovado.\n");
    }

    return 0;
}
