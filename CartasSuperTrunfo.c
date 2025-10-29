#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  long long populacao;
  double area;
  double pib;
  int np_turisticos;

  // Área para entrada de dados
  printf("Insira o valor da população do país:");
  scanf("%lld", &populacao);

  printf("Insira o valor da Área:");
  scanf("%lf", &area);

  printf("Insira o valor do PIB:");
  scanf("%lf", &pib);

  printf("Insira o numeros de pontos turisticos:");
  scanf("%d", &np_turisticos);

  
  // Área para exibição dos dados da cidade
  printf("\n--- Valores Registrados ---\n");
    printf("População: %lld\n", populacao);
    printf("Área (km²): %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", np_turisticos);
return 0;
} 
