Algoritmo "16-05"
//Faça um algoritmo  que leia um numero inteiro...
//e imprima os n primeiros numeros primos

Var
    n, i, j, d: inteiro

Inicio
      escreva("Digite n: ")
      leia(n)

      para i de 1 ate n faça
           para j de 1 ate n faça
             se(i%j=0)entao
             d<-d+1
             fimse
           fimpara
           se (d<=2)entao
            escreva(i)
           fimse
           d<-0
      fimpara



Fimalgoritmo