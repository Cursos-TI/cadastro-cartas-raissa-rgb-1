include <stdio.h>

int main(){
  /*
  Soma (*)
  Subtração(-)
  Multiplicação (*)
  Divisão (/)
  */
  
  int numero1, numero2;
  int soma,subtracao, multiplicacao, divisao;
 
 printf("Entre com o numero 1: \n");
 scanf("%d", &numero);
 printf("Entre com o numero 2: \n");
 scanf("&d", &numero2);
 
  //operação soma
  soma = numero1 + numero2;
  
  //operação subtração
  subtracao = numero1 - numero2;
  
  //operação multiplicação
  multiplicacao = numero1 * numero2;
  
  
  //operação divisão
  divisao = numero1 / numero2;
  
  printf("A soma e: %d \n", soma);
  printf("A subtracao e: %d \n, subtracao");
  printf("A multipicacao e: %d \n, multiplicacao");
  prinft("A divisao e: %d \n, divisao");
  
  
  
  
}     