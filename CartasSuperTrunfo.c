#include <stdio.h>
#include <string.h>

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

  int atributo;
  char vencedor[8];
  int carta1Atributo;
  int carta2Atributo;

  // Área para entrada de dados
  printf("***Inicio do programa***\n");
  printf("***Cadastre a Carta1***\n");
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

  printf("\n***Cadastre a Carta2***\n");
  printf("Estado: \n");
  scanf("%5s", estado2);
  printf("Código: \n");
  scanf("%5s", codigo2);
  printf("Nome Cidade: \n");
  scanf("%20s", nomeCidade2);
  printf("Insira o valor da população do país: \n");
  scanf("%d", &populacao2);
  printf("Insira o valor da Área: \n");
  scanf("%f", &area2);
  printf("Insira o valor do PIB: \n");
  scanf("%f", &pib2);
  printf("Insira o numeros de pontos turisticos: \n");
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

  printf("\nEscolha o 1º atributo para comparar: \n\n");
  printf("Digite 1 Para população: \n");
  printf("Digite 2 Para Área: \n");
  printf("Digite 3 para PIB: \n");
  printf("Digite 4 Para Pontos Turísticos: \n");
  printf("Digite 5 Para Densidade demográfica: \n");
  scanf("%d", &atributo);

  switch (atributo)
  {
  case 1:

    if (populacao > populacao2)
    {
      strcpy(vencedor, "Carta 1");
      carta1Atributo = populacao;
      carta2Atributo = populacao2;
    }
    else if (populacao < populacao2)
    {
      strcpy(vencedor, "Carta 2");
      carta1Atributo = populacao;
      carta2Atributo = populacao2;
    }
    else
    {
      strcpy(vencedor, "Empate");
      carta1Atributo = populacao;
      carta2Atributo = populacao2;
    }
    break;

  case 2:

    if (area > area2)
    {
      strcpy(vencedor, "Carta 1");
      carta1Atributo = area;
      carta2Atributo = area2;
    }
    else if (area < area2)
    {
      strcpy(vencedor, "Carta 2");
      carta1Atributo = area;
      carta2Atributo = area2;
    }
    else
    {
      strcpy(vencedor, "Empate");
      carta1Atributo = area;
      carta2Atributo = area2;
    }
    break;

  case 3:

    if (pib > pib2)
    {
      strcpy(vencedor, "Carta 1");
      carta1Atributo = pib;
      carta2Atributo = pib2;
    }
    else if (pib < pib2)
    {
      strcpy(vencedor, "Carta 2");
      carta1Atributo = pib;
      carta2Atributo = pib2;
    }
    else
    {
      strcpy(vencedor, "Empate");
      carta1Atributo = pib;
      carta2Atributo = pib2;
    }
    break;

  case 4:
    if (np_turisticos > np_turisticos2)
    {
      strcpy(vencedor, "Carta 1");
      carta1Atributo = np_turisticos;
      carta2Atributo = np_turisticos2;
    }
    else if (np_turisticos < np_turisticos2)
    {
      strcpy(vencedor, "Carta 2");
      carta1Atributo = np_turisticos;
      carta2Atributo = np_turisticos2;
    }
    else
    {
      strcpy(vencedor, "Empate");
      carta1Atributo = np_turisticos;
      carta2Atributo = np_turisticos2;
    }
    break;
  case 5:
    if (densidadePopulacional < densidadePopulacional2)
    {
      strcpy(vencedor, "Carta 1");
      carta1Atributo = densidadePopulacional;
      carta2Atributo = densidadePopulacional2;
    }
    else if (densidadePopulacional > densidadePopulacional2)
    {
      strcpy(vencedor, "Carta 2");
      carta1Atributo = densidadePopulacional;
      carta2Atributo = densidadePopulacional2;
    }
    else
    {
      strcpy(vencedor, "Empate");
      carta1Atributo = densidadePopulacional;
      carta2Atributo = densidadePopulacional2;
    }
    break;
  default:
    printf("Método de comparação não existe: \n");
    break;
  }

  // Área para exibição dos dados da cidade
  // === RESULTADOS ===
  printf("\n--- RESULTADOS ---\n");

  switch (atributo)
  {
  case 1:
    printf("\n CARTA 1\n");
    printf("Nome do pais: %s", estado);
    printf("População: %d", populacao);
    
    printf("\n\n CARTA 2\n");
    printf("Nome do pais: %s", estado2);
    printf("População: %d", populacao2);
    break;
  case 2:
    printf("\n CARTA 1\n");
    printf("Nome do pais: %s", estado);
    printf("Área: %f", area);

    printf("\n\n CARTA 2\n");
    printf("Nome do pais: %s", estado2);
    printf("Área: %f", area2);
    break;
  case 3:
    printf("\n CARTA 1\n");
    printf("Nome do pais: %s", estado);
    printf("PIB: %f", pib);

    printf("\n\n CARTA 2\n");
    printf("Nome do pais: %s", estado2);
    printf("PIB: %f", pib2);
    break;
  case 4:
    printf("\n CARTA 1\n");
    printf("Nome do pais: %s", estado);
    printf("Pontos turisticos: %d", np_turisticos);

    printf("\n\n CARTA 2\n");
    printf("Nome do pais: %s", estado2);
    printf("Pontos turisticos: %d", np_turisticos2);
    break;
  case 5:
    printf("\n CARTA 1\n");
    printf("Nome do pais: %s", estado);
    printf("Densidade demográfica: %f", densidadePopulacional);

    printf("\n\n CARTA 2\n");
    printf("Nome do pais: %s", estado2);
    printf("Densidade demográfica: %f", densidadePopulacional2);
    break;

  default:
    printf("Método de comparação não existe: \n");
    break;

     printf("\n\nVencedor: %s", vencedor);
  }

  printf("\nEscolha o 2º atributo para comparar: \n\n");
  printf("Digite 1 Para população: \n");
  printf("Digite 2 Para Área: \n");
  printf("Digite 3 para PIB: \n");
  printf("Digite 4 Para Pontos Turísticos: \n");
  printf("Digite 5 Para Densidade demográfica: \n");
  scanf("%d", &atributo);

  switch (atributo)
  {
  case 1:

    if (populacao > populacao2)
    {
      strcpy(vencedor, "Carta 1");
      carta1Atributo += populacao;
      carta2Atributo += populacao2;
    }
    else if (populacao < populacao2)
    {
      strcpy(vencedor, "Carta 2");
      carta1Atributo += populacao;
      carta2Atributo += populacao2;
    }
    else
    {
      strcpy(vencedor, "Empate");
      carta1Atributo += populacao;
      carta2Atributo += populacao2;
    }
    break;

  case 2:

    if (area > area2)
    {
      strcpy(vencedor, "Carta 1");
      carta1Atributo += area;
      carta2Atributo += area2;
    }
    else if (area < area2)
    {
      strcpy(vencedor, "Carta 2");
      carta1Atributo += area;
      carta2Atributo += area2;
    }
    else
    {
      strcpy(vencedor, "Empate");
      carta1Atributo += area;
      carta2Atributo += area2;
    }
    break;

  case 3:

    if (pib > pib2)
    {
      strcpy(vencedor, "Carta 1");
      carta1Atributo += pib;
      carta2Atributo += pib2;
    }
    else if (pib < pib2)
    {
      strcpy(vencedor, "Carta 2");
      carta1Atributo += pib;
      carta2Atributo += pib2;
    }
    else
    {
      strcpy(vencedor, "Empate");
      carta1Atributo += pib;
      carta2Atributo += pib2;
    }
    break;

  case 4:
    if (np_turisticos > np_turisticos2)
    {
      strcpy(vencedor, "Carta 1");
      carta1Atributo += np_turisticos;
      carta2Atributo += np_turisticos2;
    }
    else if (np_turisticos < np_turisticos2)
    {
      strcpy(vencedor, "Carta 2");
      carta1Atributo += np_turisticos;
      carta2Atributo += np_turisticos2;
    }
    else
    {
      strcpy(vencedor, "Empate");
      carta1Atributo += np_turisticos;
      carta2Atributo += np_turisticos2;
    }
    break;
  case 5:
    if (densidadePopulacional < densidadePopulacional2)
    {
      strcpy(vencedor, "Carta 1");
      carta1Atributo += densidadePopulacional;
      carta2Atributo += densidadePopulacional2;
    }
    else if (densidadePopulacional > densidadePopulacional2)
    {
      strcpy(vencedor, "Carta 2");
      carta1Atributo += densidadePopulacional;
      carta2Atributo += densidadePopulacional2;
    }
    else
    {
      strcpy(vencedor, "Empate");
      carta1Atributo += densidadePopulacional;
      carta2Atributo += densidadePopulacional2;
    }
    break;
  default:
    printf("Método de comparação não existe: \n");
    break;
  }

  // Área para exibição dos dados da cidade
  // === RESULTADOS ===
  printf("\n--- RESULTADOS ---\n");

  switch (atributo)
  {
  case 1:
    printf("\n CARTA 1\n");
    printf("Nome do pais: %s", estado);
    printf("População: %d", populacao);
    
    printf("\n\n CARTA 2\n");
    printf("Nome do pais: %s", estado2);
    printf("População: %d", populacao2);
    break;
  case 2:
    printf("\n CARTA 1\n");
    printf("Nome do pais: %s", estado);
    printf("Área: %f", area);

    printf("\n\n CARTA 2\n");
    printf("Nome do pais: %s", estado2);
    printf("Área: %f", area2);
    break;
  case 3:
    printf("\n CARTA 1\n");
    printf("Nome do pais: %s", estado);
    printf("PIB: %f", pib);

    printf("\n\n CARTA 2\n");
    printf("Nome do pais: %s", estado2);
    printf("PIB: %f", pib2);
    break;
  case 4:
    printf("\n CARTA 1\n");
    printf("Nome do pais: %s", estado);
    printf("Pontos turisticos: %d", np_turisticos);

    printf("\n\n CARTA 2\n");
    printf("Nome do pais: %s", estado2);
    printf("Pontos turisticos: %d", np_turisticos2);
    break;
  case 5:
    printf("\n CARTA 1\n");
    printf("Nome do pais: %s", estado);
    printf("Densidade demográfica: %f", densidadePopulacional);

    printf("\n\n CARTA 2\n");
    printf("Nome do pais: %s", estado2);
    printf("Densidade demográfica: %f", densidadePopulacional2);
    break;

  default:
    printf("Método de comparação não existe: \n");
    break;

     printf("\n\nVencedor: %s", vencedor);
  }

  if (carta1Atributo == carta2Atributo)
  {
     printf("\n\nVencedor: empate\n\n");
  }
  else if (carta1Atributo > carta2Atributo)
  {
    printf("\n\nVencedor: Carta1\n\n");
  }
  else
  {
    printf("\n\nVencedor: Carta2\n\n");
  }
  
  printf("\n\n***Fim do programa***\n");

  return 0;
}
