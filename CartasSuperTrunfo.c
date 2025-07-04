#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   char letradacarta1='a',letradacarta2='b'; //Letra que represeta o estado.
   int numerodacarta1=0, numerodacarta2=0;
   char nomecidade1 [50]="abcd", nomecidade2 [50]="dcba";
   int populaçao1=0, populaçao2=0;
   float area1=0, area2=0; 
   float PIB1=0, PIB2=0;
   int numerodepontosturisticos1=0, numerodepontosturisticos2=0;
  

    //Primeira carta
     
      printf("Digite uma letra de A à H\n");
      scanf("%c", &letradacarta1);

      printf("Digite um número de 01 a 04\n");
      scanf("%d", &numerodacarta1);
      
      printf("Digite o nome da primeira cidade\n");
      scanf("%s", &nomecidade1);

      printf("Digite o número de habitantes da primeira cidade\n");
      scanf("%d", &populaçao1);

      printf("Digite a área da primeira cidade em quilômetros quadrados\n");
      scanf("%f", &area1);

      printf("Digite o produto interno bruto da primeira ciadade\n");
      scanf("%f", &PIB1);
      
      printf("Digite o número de pontos turísticos da primeira cidade\n");
      scanf("%d", &numerodepontosturisticos1);
      
      //Segunda carta

      printf("Digite uma letra de A à H para a segunda carta\n");
      scanf(" %c", &letradacarta2);

      printf("Digite um número de 01 a 04\n");
      scanf("%d", &numerodacarta2);

      printf("Digite o nome da segunda cidade\n");
      scanf("%s", &nomecidade2);

      printf("Digite o número de habitantes da segunda cidade\n");
      scanf("%d", &populaçao2);

      printf("Digite a área da segunda cidade em quilômetros quadrados\n");
      scanf("%f", &area2);

      printf("Digite o produto interno bruto da segunda ciadade\n");
      scanf("%f", &PIB2);

      printf("Digite o número de pontos turísticos da primeira cidade\n\n\n");
      scanf("%d", &numerodepontosturisticos2);
      
      
      //carta1
      printf("Carta:%d\n",numerodacarta1);
      printf("Estado:%c\n",letradacarta1);
      printf("Código da Carta:%c%02d\n",letradacarta1,numerodacarta1);
      printf("Nome da Cidade:%s\n",nomecidade1);
      printf("População:%d\n",populaçao1);
      printf("Área:%.2f km²\n",area1);
      printf("PIB:R$ %.2f Bilhões\n",PIB1);
      printf("Números de Pontos Turísticos:%d\n\n\n",numerodepontosturisticos1);

     //carta2
      printf("Carta:%d\n",numerodacarta2);
      printf("Estado:%c\n",letradacarta2);
      printf("Código da Carta:%c%02d\n",letradacarta2,numerodacarta2);
      printf("Nome da Cidade:%s\n",nomecidade2);
      printf("População:%d\n",populaçao2);
      printf("Área:%.2f km²\n",area2);
      printf("PIB:R$ %.2f Bilhões\n",PIB2);
      printf("Números de Pontos Turísticos:%d\n",numerodepontosturisticos2);

      


    return 0;
}
