#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    float compras[10], soma = 0, maior, menor, dif;
    int i;

    printf("Informe o valor das compras: \n");
    for (i = 0; i < 10; i++) {
        printf("%da Compra: ", i + 1);
        scanf("%f", &compras[i]);
        soma += compras[i];

        if (i == 0) { 
            maior = menor = compras[i];
        } else {
            if (compras[i] > maior) 
                maior = compras[i];
            if (compras[i] < menor) 
                menor = compras[i];
        }
    }

    dif = maior - menor;

    printf("Média das compras: %.2f \n", soma / 10);
    printf("Menor compra: %.2f \n", menor);
    printf("Maior compra: %.2f \n", maior);
    printf("Diferença entre a maior e a menor: %.2f\n", dif);

    system("pause");
    return 0;
}

