#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado2;   
     char codigo1[10], codigo2[10];
     char cidade1[50], cidade2[50]; 
     int populacao1, populacao2;      
     float area1, area2;        
     float pib1, pib2;         
     int pontosturisticos1, pontosturisticos2;
     float densidadepopulacional1, densidadepopulacional2;
     float pibpercapita1, pibpercapita2;


  // Área para entrada de dados

 printf("digite os dados da carta 1, carta 2:\n\n");
    
     printf("estado (uma letra):\n");
    scanf("  %c" , &estado1);

     printf("codigo da carta 1:\n");
     scanf("%s" , codigo1);

     printf("nome da cidade:\n");
     scanf("  %[^\n]", cidade1);

     printf("população:\n");
     scanf("%d",&populacao1);

     printf("area (km²):\n");
     scanf("%f", &area1);

     printf("pib (em bilhoes de reais):\n");
    scanf("%f", &pib1);

     printf("numero de pontos turisticos:\n");
     scanf("%d", &pontosturisticos1);
     
     printf("\ndigite os dados da carta 2:\n\n");

     printf("estado (uma letra):\n");
     scanf("  %c" , &estado2);

     printf("codigo da carta 2:\n");
     scanf("%s" , codigo2);

     printf("nome da cidade:\n");
     scanf("  %[^\n]", cidade2);

     printf("população:\n");
     scanf("%d",&populacao2);

     printf("area (km²):\n");
     scanf("%f", &area2);

     printf("pib (em bilhoes de reais):\n");
     scanf("%f", &pib2);

     printf("numero de pontos turisticos:\n");
     scanf("%d", &pontosturisticos2);


    //calculos

     float densidade1 = populacao1 / area1;
     float pipercapita1 = (pib1*1000000000) / populacao1;


     float densidade2 = populacao2 / area2;
     float pipercapita2 = (pib2*1000000000) / populacao2; 



  // Área para exibição dos dados da cidade

printf("\n--- Dados da carta 1 ---\n");
     printf("Estado: %c\n", estado1);
     printf("Codigo: %s\n", codigo1);
     printf("Cidade: %s\n", cidade1);
     printf("Populacao: %d\n", populacao1);
     printf("Area: %.2f km²\n", area1);
     printf("PIB: %.2f\n", pib1);
     printf("Pontos turisticos: %d\n", pontosturisticos1);
     printf("densidade populacional: %.2f hab/km²\n", densidade1);
     printf("pib per capita: %.2f reais\n", pibpercapita1);
    
     
     
     
     printf("\n--- Dados da carta 2 ---\n");
     printf("Estado: %c\n", estado2);
     printf("Codigo: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("Populacao: %d\n", populacao2);
     printf("Area: %.2f km²\n", area2);
     printf("PIB: %.2f\n", pib2);
     printf("Pontos turisticos: %d\n", pontosturisticos2);
     printf("densidade populacional: %.2f hab/km²\n", densidade2);
     printf("pib per capita: %.2f reais\n", pibpercapita2);
     


return 0;
} 
