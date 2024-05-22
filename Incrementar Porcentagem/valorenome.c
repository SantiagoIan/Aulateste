#include <stdio.h>

int main() {
    char nome[50];
    float valor, valor_corrigido;

    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite o valor: ");
    scanf("%f", &valor);
    
    if (valor > 5000) {
        valor_corrigido = valor * 1.10;
    } else {
        valor_corrigido = valor * 1.05;
    }

    printf("Nome: %s\n", nome);
    printf("Valor digitado: R$%.2f\n", valor);
    printf("Valor corrigido: R$%.2f\n", valor_corrigido);

    return 0;
}
