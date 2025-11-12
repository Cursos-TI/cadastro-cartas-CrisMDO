#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta1
  char estado[5];
  char codigo[5];
  char nomeCidade[20];
  int populacao;
  float area;
  float pib;
  int np_turisticos;
  float densidadePopulacional;
  float pibPerCapita;
  float superPoder;

  // Carta2
  char estado2[5];
  char codigo2[5];
  char nomeCidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int np_turisticos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float superPoder2;

  // Área para entrada de dados
  printf("***Inicio do programa***\n");
  printf("***Carta1***\n");
  printf("Estado:");
  scanf("%5s", estado);
  printf("Código:");
  scanf("%5s", codigo);
  printf("Nome Cidade:");
  scanf("%20s", nomeCidade);
  printf("Insira o valor da população do país:");
  scanf("%d", &populacao);
  printf("Insira o valor da Área:");
  scanf("%lf", &area);
  printf("Insira o valor do PIB:");
  scanf("%lf", &pib);
  printf("Insira o numeros de pontos turisticos:");
  scanf("%d", &np_turisticos);

  // Aventureiro
  densidadePopulacional = populacao / area;
  pibPerCapita = pib / populacao;

  // Mestre
  float inverso_densidade = 0.0;
  if (densidadePopulacional != 0)
  {
    inverso_densidade = 1.0 / densidadePopulacional;
  }

  superPoder = populacao + area + pib + np_turisticos + pibPerCapita + inverso_densidade;

  printf("\n***Carta2***\n");
  printf("Estado:");
  scanf("%5s", estado2);
  printf("Código:");
  scanf("%5s", codigo2);
  printf("Nome Cidade:");
  scanf("%20s", nomeCidade2);
  printf("Insira o valor da população do país:");
  scanf("%d", &populacao2);
  printf("Insira o valor da Área:");
  scanf("%f", &area2);
  printf("Insira o valor do PIB:");
  scanf("%f", &pib2);
  printf("Insira o numeros de pontos turisticos:");
  scanf("%d", &np_turisticos2);

  // Aventureiro
  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;

  // Mestre
  float inverso_densidade2 = 0.0;
  if (densidadePopulacional2 != 0)
  {
    inverso_densidade2 = 1.0 / densidadePopulacional2;
  }

  superPoder2 = populacao2 + area2 + pib2 + np_turisticos2 + pibPerCapita2 + inverso_densidade2;

  // Área para exibição dos dados da cidade
  // === RESULTADOS ===
    printf("\n--- Comparação de Cartas ---\n");

    // População
    int venceu_pop = populacao > populacao2;
    printf("População: Carta %d venceu (%d)\n", venceu_pop ? 1 : 2, venceu_pop);

    // Área
    int venceu_area = area > area2;
    printf("Área: Carta %d venceu (%d)\n", venceu_area ? 1 : 2, venceu_area);

    // PIB
    int venceu_pib = pib > pib2;
    printf("PIB: Carta %d venceu (%d)\n", venceu_pib ? 1 : 2, venceu_pib);

    // Pontos turísticos
    int venceu_turismo = np_turisticos > np_turisticos2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", venceu_turismo ? 1 : 2, venceu_turismo);

    // Densidade populacional (menor vence)
    int venceu_densidade = densidadePopulacional < densidadePopulacional2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", venceu_densidade ? 1 : 2, venceu_densidade);

    // PIB per capita
    int venceu_percapita = pibPerCapita > pibPerCapita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", venceu_percapita ? 1 : 2, venceu_percapita);

    // Super Poder
    int venceu_super = superPoder > superPoder2;
    printf("Super Poder: Carta %d venceu (%d)\n", venceu_super ? 1 : 2, venceu_super);

    printf("\n***Fim do programa***\n");
  /*printf("\n--- Valores Carta1 ---\n");
  printf("População: %lld\n", populacao);
  printf("Área (km²): %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos Turísticos: %d\n", np_turisticos);

  // Aventureiro
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

  // Mestre
  printf("Super Poder: %.2f\n", superPoder);

  printf("\n\n--- Valores Carta2 ---\n");
  printf("População: %lld\n", populacao2);
  printf("Área (km²): %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", np_turisticos2);

  // Aventureiro
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
  printf("\n***Fim do programa***\n");

  // Mestre
  printf("Super Poder: %.2f\n", superPoder2);*/

  return 0;
}
