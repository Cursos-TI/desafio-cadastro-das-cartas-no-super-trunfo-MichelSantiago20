#include <stdio.h>

int main() {
    char estado[50], estado1[50];// Declaração de uma string para armazenar o nome do estado
    char codigo[10], codigo1[10];// Declaração de uma string para armazenar o código do estado
    char nome[50], nome1[50];
    int populacao, populacao1;
    float area, area1;
    float pib, pib1;
    int numero_de_pontos_turisticos, numero_de_pontos_turisticos1;
    float densidade_populacional, densidade_populacional1;
    float pib_per_capita, pib_per_capita1;

    ///* Desafio 1: Criação de cartas com informações de estados

    printf("***Carta 1***\n");

    printf("Digite o estado: \n"); // Solicita ao usuário o nome do estado
    // O nome do estado deve ser uma string, então usamos %s no scanf
    scanf("%s", estado);

    printf("Digite o código do estado: \n");// Solicita ao usuário o código do estado
    // O código do estado deve ser uma string curta, então usamos %s no scanf
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");// Solicita ao usuário o nome da cidade
    // O nome da cidade deve ser uma string, então usamos %s no scanf
    scanf("%s", nome);

    printf("Digite a população do estado: \n"); // Solicita ao usuário a população do estado
    // A população é um número inteiro, então usamos %d no scanf
    scanf("%d", &populacao);

    printf("Digite a área km²: \n");//    Solicita ao usuário a área do estado
    // A área é um número de ponto flutuante, então usamos %f no scanf
    scanf("%f", &area);

    printf("Digite o PIB do estado: \n");// Solicita ao usuário o PIB do estado
    // O PIB é um número de ponto flutuante, então usamos %f no scanf
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos do estado: \n");// Solicita ao usuário o número de pontos turísticos do estado
    // O número de pontos turísticos é um número inteiro, então usamos %d no scanf
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Carta 1\n");// Exibe as informações coletadas do estado
    printf("Estado: %s\n", estado);// Exibe o nome do estado
    printf("Código: %s\n", codigo);// Exibe o código do estado
    printf("Nome da cidade: %s\n", nome);// Exibe o nome da cidade
    printf("População: %d\n", populacao);// Exibe a população do estado
    printf("Área: %.2f\n", area);// Exibe a área do estado
    printf("PIB: %.2f\n", pib);// Exibe o PIB do estado
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);// Exibe o número de pontos turísticos do estado

    // Calcula a densidade populacional
    densidade_populacional = (float)populacao / area;

    // Calcula o PIB per capita
    pib_per_capita = (float)pib / populacao;

    // Exibe a densidade populacional e o PIB per capita
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);// Exibe a densidade populacional
    printf("PIB per Capita: %.4f\n", pib_per_capita);// Exibe o PIB per capita


    // Repetindo o processo para a segunda carta

    printf("***Carta 2***\n");

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o código do estado: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite a população do estado: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos do estado: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);

    densidade_populacional1 = (float)populacao1 / area1;

    pib_per_capita1 = (float)pib1 / populacao1;

    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.4f\n", pib_per_capita1);


    return 0;
}