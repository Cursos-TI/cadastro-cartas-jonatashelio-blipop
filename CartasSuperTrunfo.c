#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    //declarar variaveis da carta 1
    char    estado1;
    char    codCarta1[10];
    char    cidade1[50];
    int     populacao1;
    float   area1;
    float   pib1;
    int     turisticos1;

    //declarar variaveis da carta 2
    char    estado2;
    char    codCarta2[10];
    char    cidade2[50];
    int     populacao2;
    float   area2;
    float   pib2;
    int     turisticos2;

    //entrada de dados carta - 1
    printf("Cadastro Carta 1 \n\n");

    printf("Digite o estado (A-H)");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01, B03)");
    scanf("%s", codCarta1);

    printf("Digite a cidade: ");
    scanf(" ");
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a area (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos turisticos:");
    scanf("%d", &turisticos1);

    //entrada de dados carta - 2
    printf("\n Cadastro Carta 2 \n\n");

    printf("Digite o estado (A-H)");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01, B03)");
    scanf("%s", codCarta2);

    printf("Digite a cidade: ");
    scanf(" ");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos turisticos:");
    scanf("%d", &turisticos2);
    
    //saida dos dados carta - 1
    printf("\n CARTA 1 \n");
    printf("\nEstado: %c\n", estado1);
    printf("CodCarta: %s\n", codCarta1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %f \n", area1);
    printf("PIB: R$ %f \n", pib1);
    printf("Pontos turisticos: %d\n\n", turisticos1);

    //saida dos dados carta - 2
    printf("\n CARTA 2 \n");
    printf("\nEstado: %c\n", estado2);
    printf("CodCarta: %s\n", codCarta2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %f \n", area2);
    printf("PIB: R$ %f \n", pib2);
    printf("Pontos turisticos: %d\n\n", turisticos2);

    return 0;
}
