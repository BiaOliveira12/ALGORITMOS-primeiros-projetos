#include <stdio.h>
#include <stdlib.h>
/*Apresentar o total da soma de n números inteiros do número 1 até n*/

int main() {
	
	int n, soma=0;
	
	printf("Digite o valor desejado: ");
	scanf("%d", &n);
	
	for(int i = 1;i <= n; i++){
		soma = soma + i;
	}
	
	printf("%d\n", soma);
	
}
