#include <stdio.h>
#include <stdlib.h>
/*Apresentar o total da soma de n n�meros inteiros do n�mero 1 at� n*/

int main() {
	
	int i, n, soma=0;
	
	printf("Digite o valor desejado: ");
	scanf("%d", &n);
	
	for(i = 1;i <= n; i++){
		soma = soma + i;
	}
	
	printf("%d\n", soma);
	
}
