#include <stdio.h>
#include <stdlib.h>

/* Numero e função */

int main() {
	float resultado,num1, num2;
	char opcao, continua;
	
	do{
		printf("\n\nDigite o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	printf("Escolha uma das opcoes abaixo: \n");
	printf("[a] adicao\n");
	printf("[s] subtracao\n");
	printf("[m] multiplicacao\n");
	printf("[d] divisao\n");
	
	printf("Informe a operacao desejada: ");
	scanf(" %c",&opcao);
	/*Sempre que for %c no scanf, dar um espaço entre o aspas e o %c*/
	
	switch(opcao){
		case 'a':
		case 'A':
			resultado = num1 + num2;
			printf("A soma dos numeros informados eh igual a: %.2f", resultado);
			break;
		case 's':
		case 'S':
			resultado = num1 - num2;
			printf("A subtracao dos numeros informados eh igual a: %.2f", resultado);
			break;
		case 'm':
		case 'M':
			resultado = num1 * num2;
			printf("A multiplicacao dos numeros informados eh igual a: %.2f", resultado);
		 	break;
		case 'd':
		case 'D':
			if(num2 == 0){
				printf("Nao foi possivel completar a divisao");
			}else{
				
			resultado = num1 / num2;
			printf("A divisao dos numeros informados eh igual a: %.2f", resultado);
			}
			break;
		default:
			printf("Operacao invalida");
		system("cls");	
	}
	printf("\n\nContinua?\n");
	printf("[C]continua\n");
	printf("[N]nao continua\n\n");
	continua = getche();
	}while((continua == 'c') || (continua == 'C'));
	
}
	
