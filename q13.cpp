#include <stdio.h>
#include <stdlib.h>

int main () {
    int cont, ent = 0, par, soma = 0;
    scanf("%d", &cont);

    for (int i=0; i<cont; i++) {
        scanf("%d", &ent);

        for (int i=0; i<10; i++) {
            par = ent + i;
            if(par % 2 == 0) {
                soma += par;
            }
        }

        printf("Resultado: %d \n", soma);
        soma = 0;
    }

    return 0;
}
