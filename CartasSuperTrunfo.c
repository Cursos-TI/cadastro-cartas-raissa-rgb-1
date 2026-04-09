#include <stdio.h>

// Desafio Super Trunfo em c - Países - Nível Novato
// Estado: ES , Cidade: Vila Velha , Código E01.  Estado: ES , Cidade: Vitória , Código E02.

int main() {
 
  char estado, codigodacarta[20], cidade[20];
  int população, pontoturístico;
  float pib, área;

   printf (" Digite a inicial do estado: \n");
scanf (" %c" , &estado);

printf ("Digite o código da carta: \n");
scanf ("%s" , codigodacarta);

printf ("Digite sua cidade: \n");
scanf ("%s" , cidade);

printf ("Digite o número de habitantes: \n");
scanf ("%i" , &população);

printf ("Número aproximado de pontos turísticos: \n");
scanf ("%d" , &pontoturístico);

printf (" Qual o PIB dessa cidade? \n");
scanf ("%f" , &pib);

printf ("Digite a área: \n");
scanf("%f" , &área);


printf ("A inicial do estado é:%c \n", estado);
printf ("O código da carta é:%s \n", codigodacarta);
printf ("O nome da cidade é:%s \n", cidade);
printf ("Números de habitantes: %i \n" , população);
printf ("Número aproximado de pontos turísticos: %d \n" , pontoturístico);
printf ("PIB: %f \n" , pib);
printf ("A área é: %f \n" , área);



return 0;
} 
