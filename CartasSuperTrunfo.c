#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado[50];
    char codigo[10];
    char capital[50];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;

    printf("Carta 1\n");
    printf("Digite o estado: \n");// Solicita ao usuário o nome do estado
    // O nome do estado deve ser uma string, então usamos %s no scanf
    scanf("%s", estado);

    printf("Digite o código de estado: \n");// Solicita ao usuário o código do estado
    // O código do estado deve ser uma string curta, então usamos %s no scanf
    scanf("%s", codigo);

    printf("Digite o nome da capital: \n");// Solicita ao usuário o nome do estado
    // O nome do estado deve ser uma string, então usamos %s no scanf
    scanf("%s", capital);

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

    printf("Carta 2\d");

    char estado1[50];
    char codigo1[10];
    char capital1[50];
    int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o código do estado: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da capital: \n");
    scanf("%s", capital1);

    printf("Digite a população do estado: \n");
    scanf("%d", &populacao1);

    printf("Digite a área do estado em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos do estado: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("Carta 1\n");// Exibe as informações coletadas do estado
    
    printf("Estado: %s\n", estado);// Exibe o nome do estado
    printf("Código: %s\n", codigo);// Exibe o código do estado
    printf("Nome: %s\n", capital);// Exibe o nome do estado
    printf("População: %d\n", populacao);// Exibe a população do estado
    printf("Área: %.2f\n", area);// Exibe a área do estado
    printf("PIB: %.2f\n", pib);// Exibe o PIB do estado
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);// Exibe o número de pontos turísticos do estado

    printf("Carta 2\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", capital1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);








    return 0;
}
