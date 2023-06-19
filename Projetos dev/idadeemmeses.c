#include <stdio.h>
#include <stdlib.h>

/*Meu primeiro programa*/
 
int main() {
	float anos, dias;
	printf("Digite sua idade em anos: ");
	scanf("%f", &anos);
	dias = anos *365;
	printf("Sua idade em dias: %.0f.", dias);
	return 0;
}
