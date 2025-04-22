#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int resultado;

    resultado = soma(2, 3);
    printf("A soma é: %d\n", resultado);

    resultado = soma(0, 0);
    printf("A soma é: %d\n", resultado);

    resultado = soma(-5, 5);
    printf("A soma é: %d\n", resultado);

    resultado = soma(10, -3);
    printf("A soma é: %d\n", resultado);

    return 0;
}

