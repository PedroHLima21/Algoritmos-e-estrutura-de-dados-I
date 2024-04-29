/******************************************************************************
Nome: Pedro Henrique Ferraz Lima
Data: 29/04/2024
prj_array_exc1
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numeros [5];
    int soma = 0;
    
    printf("Digite 5 números inteiros:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma = soma + numeros[i];
    }
    
    double media = (double) soma / 5;
    
    printf("Soma: %d\n", soma);
    printf("Media: %.2lf\n", media);
    
    return 0;
}
