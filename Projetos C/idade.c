#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int anos;
	
	printf("\nQuantos anos voce tem?\n");
	scanf("%d", &anos);
	
	if(anos < 30 ) printf("\nVoce eh muito jovem!\n");
	if(anos > 30 ) printf("\nVoce esta na flor da idade\n");
	return 0;
}
