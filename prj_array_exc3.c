/******************************************************************************
Nome: Pedro Henrique Ferraz Lima
Data: 29/04/2024
prj_array_exc3
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int matriz[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
    
    int soma = 0;
    int contador = 0;
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0;k < 2; k++){
            soma = soma + matriz [i][j][k];
            contador++;
        }
    }
}

    double media=(double)soma/contador;
    printf("A média é de: %.2lf", media);
    return 0;
}
