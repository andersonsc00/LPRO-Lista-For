#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int num, i;
	
	printf("Informe um número: ");
	scanf("%d", &num);
	
	printf("Tabuada do %d \n", num);
	
	for (i=1; i<=10; i++) {
		printf("%d x %d = %d \n", num, i, num*i);
	}
	system("pause");
	return 0;
}
