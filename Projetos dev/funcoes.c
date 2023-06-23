#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float avista(float x){
	float resp;
	resp=x-x*0.1;
	return resp;
}
float duavez(float y){
	float resp;
	resp= y / 2;
	return resp;
}
float trevez(float z){
	float resp, jur;
	jur = 0.015*z;
	resp = jur + z / 3;
	return resp;
}
float quavez(float c){
	float resp, jur;
	jur = 0.025*c;
	resp = jur + c / 4;
}

int main() {
	float preco, precofinal;
	char continua;
	int opcao;
	
	
	do{
		
		printf("\n\n\n\nDigite o valor do produto: \n");
		scanf("%f", &preco);
		
		printf("[1] A Vista\n");
		printf("[2] Em 2 vezes\n");
		printf("[3] Em 3 vezes\n");
		printf("[4] Em 4 vezes\n\n");
		scanf(" %d", &opcao);
	switch(opcao){
	case 1:
		printf("\nOpcao 1: \n\n");
		precofinal=avista(preco);
		printf("\n\tParcela 1 de 1:  R$ %.2f\n", precofinal);
		printf("\tTotal a pagar: R$ %.2f\n", precofinal);
		break;
	case 2:
		printf("\nOpcao 2: \n\n");
		precofinal = duavez(preco);
		printf("\n\tParcela 1 de 2:  R$ %.2f\n", precofinal);
		printf("\tParcela 2 de 2:  R$ %.2f\n", precofinal);
		printf("\tTotal a pagar: R$ %.2f\n", preco);
		break;
	case 3:
		printf("\nOpcao 3: \n\n");
		precofinal = trevez(preco);
		printf("\n\tParcela 1 de 3:  R$ %.2f\n", precofinal);
		printf("\tParcela 2 de 3:  R$ %.2f\n", precofinal+precofinal*0.015);
		printf("\tParcela 3 de 3:  R$ %.2f\n", precofinal+precofinal*0.03);
		printf("\tTotal a pagar: R$ %.2f\n", preco);
		break;
	case 4:
		printf("\nOpcao 4: \n\n");
		precofinal = quavez(preco);
		printf("\n\tParcela 1 de 4:  R$ %.2f\n", precofinal);
		printf("\tParcela 2 de 4:  R$ %.2f\n", precofinal+(precofinal*0.025));
		printf("\tParcela 3 de 4:  R$ %.2f\n", precofinal+(precofinal*0.05));
		printf("\tParcela 4 de 4:  R$ %.2f\n", precofinal+(precofinal*0.075));
		printf("\tTotal a pagar: R$ %.2f\n", preco);
		break;
	default:
		printf("Opcao invalida!");
		break;
	}
	printf("\n\nDeseja continuar? (S/N)\n\n");
	continua = getche();
	}while((continua=='S')||(continua=='s'));
	return 0;
}
