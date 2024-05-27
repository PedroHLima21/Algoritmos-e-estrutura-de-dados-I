/******************************************************************************
 
Autor: Pedro Henrique Ferraz Lima
Data: 27/05/2024

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int elementoPresente(int array[], int elemento, int tamanho) {
	if (tamanho < 0)
		return 0;
	if (array[tamanho] == elemento)
		return 1;
	return elementoPresente(array, elemento, tamanho - 1);
}

int main(void) {
	int arr[] = {1, 2, 3, 5, 4};
	int tamanho = sizeof(arr) / sizeof(arr[0]);

	int resultado = elementoPresente(arr, 3, tamanho);
	if(resultado == 1){
		printf("O elemento está presente no array.");
	}else{
		printf("O elemento não está presente no array.");
	}
	return 0;
}
