#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int i, filhos, somaFilhos = 0, salarios = 0;
    float salario, somaSalarios = 0, mediaSalario, maior = 0, mediaFilhos, percentual;

    for (i=0; i<10; i++) {
        printf("Pessoa %d: \n", i+1);
        printf("Informe o sal�rio: ");
        scanf("%f", &salario);
        printf("Informe a quantidade de filhos: ");
        scanf("%d", &filhos);

        somaSalarios += salario;
        somaFilhos += filhos;

        if (salario > maior) {
            maior = salario;
        }

        if (salario <= 500) {
            salarios++;
        }
    }

    mediaSalario = somaSalarios / 10;
    mediaFilhos = somaFilhos / 10;

    percentual = ((float) salarios / 10) * 100;

    printf("M�dia salarial: %.2f \n", mediaSalario);
    printf("M�dia do n�mero de filhos: %.2f \n", mediaFilhos);
    printf("Maior sal�rio: %.2f \n", maior);
    printf("Percentagem de pessoas com sal�rio at� R$550,00: %.1f \n", percentual);

    system("pause");
    return 0;
}
