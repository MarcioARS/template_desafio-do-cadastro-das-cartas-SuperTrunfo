#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado01, estado02;                                // letra respresentando o Estado 'A' até 'H'
  char codigo01[5], codigo02[5];                          // codigo da carta (estado + 01..04) ex: A01, B02
  char cidade01[50], cidade02[50];                        // nome da cidade da carta
  unsigned long populacao01, populacao02;                 // numero de habitantes da cidade
  float area01, area02;                                   // area da cidade em km2
  float pib01, pib02;                                     // PIB (Produto Interno Bruto) da cidade
  int turismo01, turismo02;                               // Numero de pontos turisticos da cidade
  float densidadePopulacional01, densidadePopulacional02; // Densidade Populacional  da cidade (populacao / area)
  float pibPerCapita01, pibPerCapita02;                   // PIB per Capita (PIB / populacao)
  float superPoder01, superPoder02;                       // Super poder que é  populacao + area + pib + turismo + pibPerCapita + 1 / densidadePopulacional
  int opcaoMenu;                                          // Escolha no menu de  comparação de atributos

  // Área para entrada de dados da carta 01
  printf("CADASTRO DE CARTAS DO SUPER TRUNFO\n\n");
  printf("CARTA 01 ---------------------------------------------------\n");
  printf("Que letra representa o Estado (A .. H)? \n");
  scanf("%c", &estado01);
  printf("Qual o codigo da carta (ESTADO + 01 .. 04)? \n");
  scanf(" %[^\n]", codigo01);
  printf("Qual o nome da Cidade? \n");
  scanf(" %[^\n]", cidade01);
  printf("Qual a populacao da cidade?\n");
  scanf("%lu", &populacao01);
  printf("Qual a area (km2) da cidade?\n");
  scanf("%f", &area01);
  printf("Qual o PIB (PRODUTO INTERNO BRUTO) da cidade?\n");
  scanf("%f", &pib01);
  printf("Quantos pontos turisticos tem a cidade?\n");
  scanf("%d", &turismo01);
  // calculos da densidade populacional e do PIB per capita (nível aventureiro)
  densidadePopulacional01 = populacao01 / area01;
  pibPerCapita01 = pib01 * 1000000000.0 / populacao01;
  superPoder01 = populacao01 + area01 + pib01 + turismo01 + pibPerCapita01 + 1 / densidadePopulacional01;

  // Área para exibição dos dados da carta01
  printf("\nDADOS CADASTRADOS - CARTA 01 ---------------------\n");
  printf("Estado: %c\n", estado01);
  printf("Codigo da carta: %s\n", codigo01);
  printf("Nome da Cidade: %s\n", cidade01);
  printf("Populacao: %lu habitantes\n", populacao01);
  printf("Area: %.2f km2\n", area01);
  printf("PIB: %.2f bilhoes de reais\n", pib01);
  printf("Numero de pontos turisticos: %d\n", turismo01);
  // Exibição da densidade populacional e do PIB per capita (nível aventureiro)
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional01);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita01);
  printf("Super Poder : %.2f\n\n", superPoder01);

  // Área para entrada de dados da carta 02
  printf("CARTA 02 ---------------------------------------------------\n");
  printf("Que letra representa o Estado (A .. H)? \n");
  scanf(" %c", &estado02);
  printf("Qual o codigo da carta (ESTADO + 01 .. 04)? \n");
  scanf(" %[^\n]", codigo02);
  printf("Qual o nome da Cidade? \n");
  scanf(" %[^\n]", cidade02);
  printf("Qual a populacao da cidade?\n");
  scanf("%lu", &populacao02);
  printf("Qual a area (km2) da cidade?\n");
  scanf("%f", &area02);
  printf("Qual o PIB (PRODUTO INTERNO BRUTO) da cidade?\n");
  scanf("%f", &pib02);
  printf("Quantos pontos turisticos tem a cidade?\n");
  scanf("%d", &turismo02);
  // calculos da densidade populacional e do PIB per capita (nível aventureiro)
  densidadePopulacional02 = populacao02 / area02;
  pibPerCapita02 = pib02 * 1000000000.0 / populacao02;
  superPoder02 = populacao02 + area02 + pib01 + turismo02 + pibPerCapita02 + 1 / densidadePopulacional02;

  // Área para exibição dos dados da carta02
  printf("\nDADOS CADASTRADOS - CARTA 02 ---------------------\n");
  printf("Estado: %c\n", estado02);
  printf("Codigo da carta: %s\n", codigo02);
  printf("Nome da Cidade: %s\n", cidade02);
  printf("Populacao: %lu habitantes\n", populacao02);
  printf("Area: %.2f km2\n", area02);
  printf("PIB: %.2f bilhoes de reais\n", pib02);
  printf("Numero de pontos turisticos: %d\n", turismo02);
  // Exibição da densidade populacional e do PIB per capita (nível aventureiro)
  printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional02);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita02);
  printf("Super Poder : %.2f\n\n", superPoder02);

 

  // TEMA 3: Dasafio - nível aventureiro
  // Menu para comparação de atributos das cartas

  
  printf("\n***  MENU PRINCIPAL ***\n");
  printf("Escolha um atributo para ser comparado (1 a 6):\n");
  printf("1. Nome da Cidade\n");
  printf("2. População\n");
  printf("3. Área\n");
  printf("4. PIB\n");
  printf("5. Número de pontos turísticos\n");
  printf("6. Densidade demográfica\n");
  printf("** OPÇÂO -->  ");
  scanf("%d", &opcaoMenu);

  printf("\n********** RESULTADO **********\n");
  switch (opcaoMenu)
  {
  case 1:
    printf("CARTA 01: (%c) %s - CARTA 02: (%c) %s\n", estado01, cidade01, estado02, cidade02);
    printf("ATRIBUTO COMPARADO: Nome da Cidade\n");
    break;
  case 2:
    printf("CARTA 01: (%c) %s - CARTA 02: (%c) %s\n", estado01, cidade01, estado02, cidade02);
    printf("ATRIBUTO COMPARADO: Populdacão\n");
    printf("Valor CARTA 01: %lu  -  Valor CARTA 02: %lu\n", populacao01, populacao02);
    if (populacao01 > populacao02)
    {
      printf("CARTA 01 venceu!\n");
    }
    else if (populacao01 < populacao02)
    {
      printf("CARTA 02 venceu!\n");
    }
    else
    {
      printf("Empatou!\n");
    }
    break;
  case 3:
    printf("CARTA 01: (%c) %s - CARTA 02: (%c) %s\n", estado01, cidade01, estado02, cidade02);
    printf("ATRIBUTO COMPARADO: Área\n");
    printf("Valor CARTA 01: %.2f  -  Valor CARTA 02: %.2f\n", area01, area02);
    if (area01 > area02)
    {
      printf("CARTA 01 venceu!\n");
    }
    else if (area01 < area02)
    {
      printf("CARTA 02 venceu!\n");
    }
    else
    {
      printf("Empatou!\n");
    }
    break;
  case 4:
    printf("CARTA 01: (%c) %s - CARTA 02: (%c) %s\n", estado01, cidade01, estado02, cidade02);
    printf("ATRIBUTO COMPARADO: PIB\n");
    printf("Valor CARTA 01: %.2f  -  Valor CARTA 02: %.2f\n", pib01, pib02);
    if (pib01 > pib02)
    {
      printf("CARTA 01 venceu!\n");
    }
    else if (pib01 < pib02)
    {
      printf("CARTA 02 venceu!\n");
    }
    else
    {
      printf("Empatou!\n");
    }
    break;
  case 5:
    printf("CARTA 01: (%c) %s - CARTA 02: (%c) %s\n", estado01, cidade01, estado02, cidade02);
    printf("ATRIBUTO COMPARADO: Pontos Turísticos\n");
    printf("Valor CARTA 01: %d  -  Valor CARTA 02: %d\n", turismo01, turismo02);
    if (turismo01 > turismo02)
    {
      printf("CARTA 01 venceu!\n");
    }
    else if (turismo01 < turismo02)
    {
      printf("CARTA 02 venceu!\n");
    }
    else
    {
      printf("Empatou!\n");
    }
    break;
  case 6:
    printf("CARTA 01: (%c) %s - CARTA 02: (%c) %s\n", estado01, cidade01, estado02, cidade02);
    printf("ATRIBUTO COMPARADO: Densidade Demográfica\n");
    printf("Valor CARTA 01: %.2f  -  Valor CARTA 02: %.2f\n", densidadePopulacional01, densidadePopulacional02);
    if (densidadePopulacional01 < densidadePopulacional02)
    {
      printf("CARTA 01 venceu!\n");
    }
    else if (densidadePopulacional01 > densidadePopulacional02)
    {
      printf("CARTA 02 venceu!\n");
    }
    else
    {
      printf("Empatou!\n");
    }
    break;
  default:
    printf("Opção indevida! Tente novamente!\n");
  }
  return 0;
}
