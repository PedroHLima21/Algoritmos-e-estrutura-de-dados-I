/******************************************************************************
 
Autor: Pedro Henrique Ferraz Lima
Data: 27/05/2024

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int saoPares(int array[], int tamanho, int index){
    if(index == tamanho)
        return 1;
    if (array[index] % 2 != 0){
        return 0;
    }
        return saoPares(array, tamanho, index + 1);
}

int main(void){
    int arr[] = {2, 4, 6, 8, 10};
    int tamanho =  sizeof(arr) / sizeof(arr[0]);
    int index;
    
    int resultado = saoPares(arr, tamanho, 0);
    if(resultado == 1){
    
    printf("Todos os elementos são pares");
    }else{
        printf("Algum elemento não é par");
    }    
    return 0;
}
