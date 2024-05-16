#include <stdio.h>

int main() {
    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    printf("Valor anterior: %.2f\n", valor - 1);
    printf("Valor digitado: %.2f\n", valor);
    printf("Valor posterior: %.2f\n", valor + 1);

    printf("O dobro do valor digitado: %.2f\n", valor * 2);

    return 0;
}
