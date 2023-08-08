#include <stdio.h>
#include <stdlib.h>
/*programa que apresente no final a soma dos valores múltiplos de
3 menores que 1000.*/

int main() {
	int soma, i;
	 
	for(i=1; i<1000;i++){
		if(i%3==0){
			soma=soma+i;
			
		}
	}
	printf("A soma eh igual a: %d\n",soma);
}
