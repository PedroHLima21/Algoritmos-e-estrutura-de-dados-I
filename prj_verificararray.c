/******************************************************************************

Nome: Pedro Henrique Ferraz Lima
Data: 27/05/24

*******************************************************************************/

#include <stdio.h>

int esta0rdenado(int array[], int tamanho) {
    if (tamanho <= 1){
        return 1;
    }
    if (array[tamanho - 1] < array[tamanho - 2]){
        return 0;
    }
    return esta0rdenado (array,tamanho - 1);
}


int main(){
    int arr[] = {1,2,3, 5, 4};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    int resultado = esta0rdenado(arr, tamanho);
    if(resultado == 1){
        printf("O elemento está presente no array.");
    }else{
        printf("O elemento não está presente no array.");
    }
    return 0;
    }


