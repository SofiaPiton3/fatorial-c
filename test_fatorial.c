#include <stdio.h>
#include <assert.h>
#include "function_fatorial.c"

int main(void) {
    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(6) == 720);

    printf("Todos os Testes Passaram!\n");
    printf("Criado por Sofia Araújo Piton");

    return 0;
}