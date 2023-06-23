#include <stdio.h>
#include <stdlib.h>
/*Crie um algoritmo que pergunte ao usuario com qual poligono ele deve trabalhar. 
O programa deve calcular a area do poligono selecionado. 
Para o calculo correto da area o programa deve pedir ao usuario as entradas correspondentes ao poligono selecionado.*/

int main() {
	char T, C,R, Q, opcao, continua;
	float base, altura, area, pi, raio, comprimento, lado;
	
	do{
		printf("\n\nCom qual poligono iremos trabalhar: \n");
	printf("[T]riangulo\n");
	printf("[C]irculo\n");
	printf("[R]etangulo\n");
	printf("[Q]uadrado\n");
	
	scanf(" %c",&opcao);
	
	pi=3.14;
	
	switch(opcao){
		case'T':
		case't':
			printf("Digite o valor da base do triangulo: \n");
			scanf("%f", &base);
			printf("Digite a altura do triangulo: \n");
			scanf("%f", &altura);
			
			area=base*altura/2;
			
			printf("O valor da area eh: %.1f", area);
			break;
		
		case 'C':
		case 'c':
			printf("Digite o valor do raio do circulo: \n");
			scanf("%f", &raio);
			
			area=pi*pow(raio,2);
			
			printf("O valor da area eh: %.2f", area);
			break;
		
		case 'R':
		case 'r':
			printf("Digite o comprimento do retangulo : \n");
			scanf("%f", &comprimento);
			printf("Digite a altura do retangulo: \n");
			scanf("%f", &altura);
			
			area=comprimento*altura;
			
			printf("O valor da area do retangulo eh: %.2f", area);
			break;
			
		case 'Q':
		case 'q':
			printf("Digite o valor do lado do quadrado: \n");
			scanf("%f", &lado);
			
			area=lado*lado;
			
			printf("O valor da area do quadrado eh: %.1f", area);
			break;
			
			
			
		default:
			printf("Opcao invalida!");
		
	}
	printf("\n\nContinua?\n");
	printf("[S]im\n");
	printf("[N]ao\n\n");
	continua = getche();
	}while((continua == 's') || (continua == 'S'));
}
