/******************************************************************************

Nome: Pedro Henrique Ferraz Lima
Projeto: Calcular um trem aqui

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int somaDosDigitos(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + somaDosDigitos(n / 10);
}

int main(void) {
    int numero = 12345;
    int resultado = somaDosDigitos(numero);
    printf("A soma dos dígitos de %d é %d\n", numero, resultado);
    return 0;
}
