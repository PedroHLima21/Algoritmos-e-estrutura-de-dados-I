/*
 ============================================================================
 Name        : prj_tarefa2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define Pi 3.14
//Exercicio 1
void mostrarNumerosParesMultiplosDeTres(){
	int cont = 0;
	printf("Numeros pares multiplos de 3 até 1000:\n");
	for (int i = 2; i <= 1000; i += 2){
		if (i % 3 ==0){
			printf("%d ", i);
			cont++;
		}
	}
	printf("\nTotal de números pares multiplos de 3: %d\n\n", cont);
}
//Exercicio 2
void calcularSomaeMedia() {
		int Numero;
		int Soma = 0;

		printf("Digite 10 numeros inteiros:\n");
		fflush(stdout);
		for (int i = 0; i< 10; i++){
			scanf("%d", &Numero);
			Soma += Numero;
			//Soma = Soma+Numero;
	}

	double media = Soma / 10;
	printf("Soma: %d\n", Soma);
	printf("Média: %.2lf\n", media);
}
//Exercicio 3
void calcularAreaDosComodos() {
	double largura, comprimento, area;

	fflush(stdout);
	for (int i = 1; i <= 4; i++) {
		printf("Digite a largura do cômodo %d: ", i);
		scanf("%lf", &largura);

		printf("Digite o comprimento do cômodo %d: ", i);
		scanf("%lf", &comprimento);

		area = largura * comprimento;

		printf("Área do cômodo %d: %.2lf metros quadrados\n", i, area);
	}
}
//Exercicio 4
void CalcularPermetrodaAreaCirculo() {
	double Raio,Perimetro,Area;

	fflush(stdout);

	const double pi=3.14;
	printf("Digite o valor do raio do circulo:");
	scanf("%lf",&Raio);
	Perimetro = 2 * pi * Raio;
	Area= pi * Raio * Raio;
	printf("Perimetro do Circulo: %2lf",Perimetro);
	printf("Area do circulo: %2lf",Area);
	}
void CalcularPagamento(){
	int opcaoPagamento;
	double Valor;



	While (1); {
		printf("\n Opcoes de Pagamento:\n");
		printf("1- A Vista (com 10%% de desconto)\n");
		printf("2- Parcelado 2x (preço)\n");
		printf("3- Parcelado 3x até 10x (3%% de juros ao mês, compras acima de $300.00)\n");
		printf("Digite a opcao desejada (ou -999 para encerrar): ");
		fflush(stdout);

	}
}
int main(void){
	mostrarNumerosParesMultiplosDeTres();
	calcularSomaeMedia();
	calcularAreaDosComodos();
	CalcularPermetrodaAreaCirculo();

	return 0;
}
