#include <stdio.h>
#include <assert.h>

void testar(){
  //função de teste simples
  assert(soma(2, 3) == 5);
    assert(soma(0, 0) == 0);
    assert(soma(-5, 5) == 0);
    assert(soma(10, -3) == 7);
    printf("Todos os testes passaram!\n");
}

int main(){
  testar();
  return 0;
}
