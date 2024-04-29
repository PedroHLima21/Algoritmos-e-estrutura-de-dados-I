/******************************************************************************
Nome: Pedro Henrique Ferraz Lima
Data: 29/04/2024
prj_array_exc2
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int soma = 0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma = soma + matriz[i][j];
        }
    }
    printf("A soma dos elementos da matriz é: %d", soma);
    return 0;
}
