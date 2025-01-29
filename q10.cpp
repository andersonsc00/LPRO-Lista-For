#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");s
    int a, fatorial = 1;

    printf("Informe um número para calcular o fatorial: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("O fatorial não pode ser calculado para números negativos. \n");
        return 1;
    }

    for (int i=a; i>0; i--) {
        printf("%d", i);
        fatorial *= i;
        if (i > 1) {
            printf(" x ");
        }
    }

    printf(" = %d\n", fatorial);

    return 0;
}

