#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    scanf("%d", &n);
    int soma1, soma2, soma3;

    if (n<=0 || n>46) {
        return 1;
    }

    soma1 = 0;
    soma2 = 1;

    for (int i=0; i<n; i++) {
        if(i==0) {
            printf("%d", soma1);
        } else {
            soma3 = soma2 + soma1;
            printf("% d", soma3);
            soma2 = soma1;
            soma1 = soma3;
        }
    }

    return 1;
}
