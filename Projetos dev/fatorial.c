#include <stdio.h>
#include <stdlib.h>
/*Apresentar o total da soma de n n�meros inteiros do n�mero 1 at� n*/

int main() {
	
	int x=0;
	int fatorial=1;
	
	printf("Digite o valor para saber o fatorial: ");
	scanf("%d", &x);
	
	for(int i = x;i > 0; i--){
		fatorial=fatorial*i;
		
	}
	printf("O fatorial de %d eh igual a: %d",x,fatorial);
	
}
