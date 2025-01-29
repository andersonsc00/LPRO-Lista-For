#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char codigo;
	float valor, tVista = 0, tPrazo = 0;
	int i;
	
	printf("Códigos e formas de pagamento: \n");
	printf("V - À vista \n");
	printf("P - A prazo \n");
	for (i=0; i<10; i++) {
		printf("Transação %d - ", i+1);
		printf("Código: ");
		scanf("%c", &codigo);
		printf("Valor: ");
		scanf("%f",  valor);
		
		if (codigo == 'V' || codigo == 'v') {
			tVista += valor;
		} else if (codigo == 'P' || codigo == 'p') {
			tPrazo += valor;
		} else {
			printf("Entrada inválida \n");
		}
	}
	
	printf("Valor das compras à vista: %.2f \n", tVista);
	printf("Valor das compras a prazo: %.2f \n", tPrazo);
	printf("Valor total das compras realizadas: %.2f \n", tVista + tPrazo);
	
	system("pause");
	return 0;
}
