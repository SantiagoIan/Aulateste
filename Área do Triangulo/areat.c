#include <stdio.h>
#include <stdlib.h>

int main() {
    float base, altura, area;

    printf("Entre com a base do triângulo: ");
    scanf("%f", &base);

    printf("Entre com a altura do triângulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}
