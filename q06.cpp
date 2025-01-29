#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int i, num, maior, menor, soma = 0;
	
	printf("Informe o 1º número: ");
	scanf("%d", &num);
	maior = menor = num;
	soma += num;
	
	for (i=2; i<=10; i++) {
		printf("Informe o %dº número: ", i);
		scanf("%d", &num);
		
		if (num > maior) {
			maior = num;
		}
		if (num < menor) {
			menor = num;
		}
		soma += num;
	}
	
	float media = soma / 10;
	
	printf("Maior valor: %d \n", maior);
	printf("Menor valor: %d \n", menor);
	printf("Média: %.2f \n", media);
	
	system("pause");
	return 0; 
}
