#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char ch;
	
	printf("\nDigite uma letra de 'a' ' 'z''\n");
	scanf("%c", &ch);
	
	if(ch >= 'a')
		if (ch <= 'z') printf("\nVoce digitou uma letra minuscula.\n");
		
	if(ch>= 'A')
		if(ch <= 'Z') printf("\nVoce digitou uma letra maiuscula.\n");
	return 0;
}
