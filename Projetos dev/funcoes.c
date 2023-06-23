#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Exercício sobre funções */

float precocomjuros;

float avista(float x) {
    float resp;
    resp = x - x * 0.1;
    return resp;
}

float duasvezes(float x) {
    float resp;
    resp = x / 2;
    return resp;
}

float tresvezes(float x) {
    float resp;
    resp = (x * 1.045) / 3;
    precocomjuros = x * 1.045;
    return resp;
}

float quatrovezes(float x) {
    float resp;
    resp = (x * 1.1) / 4;
    precocomjuros = x * 1.1;
    return resp;
}

int main() {
    float preco, precofinal;
    char continua;
    int opcao;

    do {
        system("cls");
        printf("\n\nDigite o valor do produto: \n");
        scanf("%f", &preco);
        printf("\n\n\n[1] A Vista\n");
        printf("[2] Em 2 vezes\n");
        printf("[3] Em 3 vezes\n");
        printf("[4] Em 4 vezes\n\n");
        scanf(" %d", &opcao);

        switch (opcao) {
            case 1:
                precofinal = avista(preco);
                printf("\nParcela 1 de 1:  R$ %.2f", precofinal);
                printf("\nTotal a se Pagar: R$ %.2f", precofinal);
                break;
            case 2:
                precofinal = duasvezes(preco);
                printf("\nParcela 1 de 2: R$ %.2f", precofinal);
                printf("\nParcela 2 de 2: R$ %.2f", precofinal);
                printf("\nTotal a se Pagar: R$ %.2f", preco);
                break;
            case 3:
                precofinal = tresvezes(preco);
                printf("\nParcela 1 de 3: R$ %.2f", precofinal);
                printf("\nParcela 2 de 3: R$ %.2f", precofinal);
                printf("\nParcela 3 de 3: R$ %.2f", precofinal);
                printf("\nTotal a se Pagar: R$ %.2f", precocomjuros);
                break;
            case 4:
                precofinal = quatrovezes(preco);
                printf("\nParcela 1 de 4: R$ %.2f", precofinal);
                printf("\nParcela 2 de 4: R$ %.2f", precofinal);
                printf("\nParcela 3 de 4: R$ %.2f", precofinal);
                printf("\nParcela 4 de 4: R$ %.2f", precofinal);
                printf("\nTotal a se Pagar: R$ %.2f", precocomjuros);
                break;
            default:
                printf("Numero de Parcelas Indisponível");
                break;
        }

        printf("\n\nContinua?\n\n");
        printf("[S]im\n");
        printf("[N]ao\n");
        continua = getch();
    } while ((continua == 'S') || (continua == 's'));

    return 0;
}
