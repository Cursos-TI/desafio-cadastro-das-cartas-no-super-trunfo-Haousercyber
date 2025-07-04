#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   char letradacarta1='a'; //Letra que represeta o estado.
   int numerodacarta1=0;
   char nomecidade1 [50]="abcd";
   int populaçao1=0;
   float area1=0; 
   float PIB1 =0;
   int numerodepontosturisticos1=0;
  


      printf("Digite uma letra de A à H\n");
      scanf("%c",&letradacarta1);

      printf("Digite um número de 01 a 04\n");
      scanf("%d",&numerodacarta1);
      
      printf("Digite o nome primeira da cidade\n");
      scanf("%s",&nomecidade1);

      printf("Digite o número de habitantes da primeira cidade\n");
      scanf("%d",&populaçao1);

      printf("Digite a área da primeira cidade em quilômetros quadrados\n");
      scanf("%f",&area1);

      printf("Digite o produto interno bruto da primeira ciadade\n");
      scanf("%f",&PIB1);
      
      printf("Digite o número de pontos turísticos da primeira cidade\n");
      scanf("%d",&numerodepontosturisticos1);
      
      
      
      printf("Carta:%d\n",numerodacarta1);
      printf("Estado:%c\n",letradacarta1);
      printf("Código da Carta:%c%02d\n",letradacarta1,numerodacarta1);
      printf("Nome da Cidade:%s\n",nomecidade1);
      printf("População:%d\n",populaçao1);
      printf("Área:%.2f km²\n",area1);
      printf("PIB:R$ %.2f Bilhões\n",PIB1);
      printf("Números de Pontos Turísticos:%d\n",numerodepontosturisticos1);

      


    return 0;
}
