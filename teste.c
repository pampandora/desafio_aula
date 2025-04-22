#include <stdio.h>
#include <assert.h>

// Declaração da função que queremos testar
int soma(int a, int b);

// Função de teste
void testar_soma() {
    assert(soma(2, 3) == 5);
    assert(soma(0, 0) == 0);
    assert(soma(-5, 5) == 0);
    assert(soma(10, -3) == 7);
    printf("Todos os testes passaram!\n");
}

// Função principal
int main() {
    testar_soma();
    return 0;
}
