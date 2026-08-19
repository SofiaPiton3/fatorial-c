int fatorial(int n) {
    int resultado = 1;
    int i;
    for (i = 2; i <= n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}