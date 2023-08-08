#include <stdio.h>
#include <stdlib.h>
/*Crie um algoritmo que pergunte ao usuario com qual poligono ele deve trabalhar. 
O programa deve calcular a area do poligono selecionado. 
Para o calculo correto da area o programa deve pedir ao usuario as entradas correspondentes ao poligono selecionado.*/

int main() {
	char continua;
	int i, menu;
	float nota[10], soma, maior=0, menor=11, media;
 
	
	for (i=1; i<=10; i++){
		printf("Digite a nota do aluno %i:", i);
		scanf("%f", &nota[i]);
		soma = soma + nota[i];
		media=soma/nota[i];
		if(nota[i]<menor){
				menor = nota[i];}
		if(nota[i]>maior){
				maior = nota[i];}
	
	}
	
	do{
	printf("\n[1]Menor nota\n");
	printf("[2]Maior nota\n");
	printf("[3]Media da turma\n");
	printf("[4]Somatoria das notas\n");
	scanf("%d", &menu);
	switch(menu){
		case 1:			
				printf("%f", menor);
			
			break;
		case 2:
				printf("%f", maior);
			
			break; 
		case 3:
			printf("%f", media);
			break;
		case 4:
			printf("%f", soma);
		
	}
	printf("\n\nContinua?\n");
	printf("[S]im\n");
	printf("[N]ao\n\n");
	continua = getche();
	system("cls");
  }while(continua == 'S'|| continua == 's');
  
  
	}
	
