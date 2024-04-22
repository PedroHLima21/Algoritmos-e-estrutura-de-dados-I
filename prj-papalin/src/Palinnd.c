/******************************************************************************

Autor: Pedro Henrique Ferraz Lima
Data: 22/04/2024
Name: File+Palindromo

*******************************************************************************/
#include <stdio.h>

int main(void){
    FILE *arquivo = fopen("exemplo.txt", "w");
    // Verifica se o arquivo foi aberto com sucesso para escrita
    if (arquivo != NULL) {
        int opcao = 1;
        do {
            char palavra[100];
            char resultado[100];
            printf("Digite uma palavra: ");
            fflush(stdout);
            scanf("%s", palavra);
            int tamanho = strlen(palavra);
            if (isPalindrome(palavra, 0, tamanho - 1)) { //Verificar se é um palíndromo
                sprintf(resultado, "A palavra %s é um palíndromo.\n", palavra);
                fprintf(arquivo, resultado);
            } else {
                sprintf(resultado, "A palavra %s é um palíndromo.\n", palavra);
                fprintf(arquivo, resultado);
            } else {
                sprintf(resultado, "A palavra %s não é um palíndromo.\n", palavra);
                fprintf(arquivo, resultado);
            }
            printf("Deseja continuar? sim=1, sair=0: ");
            fflush(stdout);
            scanf("%d", &opcao);
        }
    }
}
}
