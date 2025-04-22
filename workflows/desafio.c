#include <stdio.h>

int main() {
    // Declaração das variáveis
    float A, B, C, soma;

    // Leitura dos valores A, B e C
    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    // Calculando a soma entre A e B
    soma = A + B;

    // Imprimindo a soma
    printf("A soma entre A e B é: %.2f\n", soma);

    // Verificando se a soma é menor que C
    if (soma < C) {
        printf("A soma é menor que C.\n");
    } else {
        printf("A soma não é menor que C.\n");
    }

    return 0;
}
