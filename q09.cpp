#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n, valor, positivos = 0, negativos = 0;
    float soma = 0, media, percPositivos, percNegativos;

    printf("Informe a quantidade de números: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Entrada inválida. \n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &valor);

        soma += valor;

        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
    }

    media = soma / n;

    percPositivos = ((float)positivos / n) * 100;
    percNegativos = ((float)negativos / n) * 100;

    printf("Média aritmética: %.2f\n", media);
    printf("Quantidade de valores positivos: %d\n", positivos);
    printf("Quantidade de valores negativos: %d\n", negativos);
    printf("Percentual de valores positivos: %.1f%\n", percPositivos);
    printf("Percentual de valores negativos: %.1f%\n", percNegativos);

    return 0;
}

