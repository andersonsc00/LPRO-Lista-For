#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int x, y, resto;
    printf("Informe quantos números serão contados: ");
    scanf("%d", &y);

    printf("Informe o número de colunas: ");
    scanf("%d", &x);

    for (int i=0; i<=y; i++) {
        resto = (i % x);
        printf("%d", i);

        if (resto == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
    }

    system("pause");
    return 0;
}
