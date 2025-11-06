#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Carta1
  long long populacao;
  double area;
  double pib;
  int np_turisticos;
  double densidadePopulacional;
  double pibPerCapita;

  //Carta2
  long long populacao2;
  double area2;
  double pib2;
  int np_turisticos2;
  double densidadePopulacional2;
  double pibPerCapita2;


  // Área para entrada de dados
  printf("***Inicio do programa***\n");
  printf("***Carta1***\n");
  printf("Insira o valor da população do país:");
  scanf("%lld", &populacao);

  printf("Insira o valor da Área:");
  scanf("%lf", &area);

  printf("Insira o valor do PIB:");
  scanf("%lf", &pib);

  printf("Insira o numeros de pontos turisticos:");
  scanf("%d", &np_turisticos);

  //Aventureiro
  densidadePopulacional = populacao / area;
  pibPerCapita = pib / populacao;

  printf("\n***Carta2***\n");
  printf("Insira o valor da população do país:");
  scanf("%lld", &populacao2);

  printf("Insira o valor da Área:");
  scanf("%lf", &area2);

  printf("Insira o valor do PIB:");
  scanf("%lf", &pib2);

  printf("Insira o numeros de pontos turisticos:");
  scanf("%d", &np_turisticos2);

  //Aventureiro
  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;

  
  // Área para exibição dos dados da cidade
  printf("\n--- Valores Carta1 ---\n");
  printf("População: %lld\n", populacao);
  printf("Área (km²): %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos Turísticos: %d\n", np_turisticos);

  //Aventureiro
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

  printf("\n\n--- Valores Carta2 ---\n");
  printf("População: %lld\n", populacao2);
  printf("Área (km²): %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", np_turisticos2);

  //Aventureiro
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
  printf("\n***Fim do programa***\n");

return 0;
} 
