#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int menu, menu1, menu2, menu3, menu4;
    char estado[50], estado1[50];
    char codigo[10], codigo1[10];
    char nome[50], nome1[50];
    int populacao, populacao1;
    float area, area1;
    float pib, pib1;
    int numero_de_pontos_turisticos, numero_de_pontos_turisticos1;
    float densidade_populacional, densidade_populacional1;
    float pib_per_capita, pib_per_capita1;
    float superpoder, superpoder1;
    


    ///* Desafio 1: Criação de cartas com informações de estados
    printf("\n");

    printf("*** Super Trunfo ***\n");

    printf("\n");

    printf("*** Carta 1 ***\n");
    printf("\n");
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

    printf("\n");

    printf("*** Carta 1 ***\n");// Exibe as informações coletadas do estado
    printf("\n");

    printf("Estado: %s\n", estado);// Exibe o nome do estado
    printf("Código: %s\n", codigo);// Exibe o código do estado
    printf("Nome da cidade: %s\n", nome);// Exibe o nome da cidade
    printf("População: %d\n", populacao);// Exibe a população do estado
    printf("Área: %.2f\n", area);// Exibe a área do estado
    printf("PIB: %.2f bilhões\n", pib);// Exibe o PIB do estado
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);// Exibe o número de pontos turísticos do estado

    // Calcula a densidade populacional
    densidade_populacional = (float)populacao / area;

    // Calcula o PIB per capita
    pib_per_capita = (float)pib / populacao;

    // Exibe a densidade populacional e o PIB per capita
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);// Exibe a densidade populacional
    printf("PIB per Capita: %.4f\n", pib_per_capita);// Exibe o PIB per capita

    superpoder = (float)populacao + area + pib + pib_per_capita + (1 / densidade_populacional) + numero_de_pontos_turisticos;// Calcula o superpoder do estado
    printf("Superpoder: %.2f\n", superpoder);// Exibe o superpoder do estado

    printf("\n");
     // Adiciona uma linha em branco

    // Repetindo o processo para a segunda carta

    printf("*** Carta 2 ***\n");
    printf("\n");
    printf("Digite o estado: \n"); // Solicita ao usuário o nome do estado
    // O nome do estado deve ser uma string, então usamos %s no scanf
    scanf("%s", estado1);

    printf("Digite o código do estado: \n");// Solicita ao usuário o código do estado
    // O código do estado deve ser uma string curta, então usamos %s no scanf
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");// Solicita ao usuário o nome da cidade
    // O nome da cidade deve ser uma string, então usamos %s no scanf
    scanf("%s", nome1);

    printf("Digite a população do estado: \n"); // Solicita ao usuário a população do estado
    // A população é um número inteiro, então usamos %d no scanf
    scanf("%d", &populacao1);

    printf("Digite a área km²: \n");//    Solicita ao usuário a área do estado
    // A área é um número de ponto flutuante, então usamos %f no scanf
    scanf("%f", &area1);

    printf("Digite o PIB do estado: \n");// Solicita ao usuário o PIB do estado
    // O PIB é um número de ponto flutuante, então usamos %f no scanf
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos do estado: \n");// Solicita ao usuário o número de pontos turísticos do estado
    // O número de pontos turísticos é um número inteiro, então usamos %d no scanf
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("\n");

    printf("*** Carta 2 ***\n");// Exibe as informações coletadas do estado
    printf("\n");

    printf("Estado: %s\n", estado1);// Exibe o nome do estado
    printf("Código: %s\n", codigo1);// Exibe o código do estado
    printf("Nome da cidade: %s\n", nome1);// Exibe o nome da cidade
    printf("População: %d\n", populacao1);// Exibe a população do estado
    printf("Área: %.2f\n", area1);// Exibe a área do estado
    printf("PIB: %.2f bilhões\n", pib1);// Exibe o PIB do estado
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);// Exibe o número de pontos turísticos do estado

    // Calcula a densidade populacional
    densidade_populacional1 = (float)populacao1 / area1;

    // Calcula o PIB per capita
    pib_per_capita1 = (float)pib1 / populacao1;

    // Exibe a densidade populacional e o PIB per capita
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);// Exibe a densidade populacional
    printf("PIB per Capita: %.4f\n", pib_per_capita1);// Exibe o PIB per capita

    superpoder1 = (float)populacao1 + area1 + pib1 + pib_per_capita1 + (1 / densidade_populacional1) + numero_de_pontos_turisticos1;// Calcula o superpoder do estado
    printf("Superpoder: %.2f\n", superpoder1);// Exibe o superpoder do estado

        printf("\n");
        // Solicita ao usuário a escolha do primeiro atributo
        printf("Escolha o primeiro atributo para a comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("Digite sua escolha: ");
        scanf("%d", &menu);

            printf("\n");

            if (menu < 1 || menu > 5) {
            printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção entre 1 e 5.\n");
            }    

            printf("\n");
            // Solicita ao usuário a escolha do segundo atributo
            printf("Escolha o segundo atributo para comparação (diferente do primeiro):\n");
            if (menu != 1) {printf("1. População\n"); }
            if (menu != 2) {printf("2. Área\n"); }
            if (menu != 3) {printf("3. PIB\n"); }
            if (menu != 4) {printf("4. Pontos Turísticos\n"); }
            if (menu != 5) {printf("5. Densidade Populacional\n"); }
            printf("Digite sua Segunda Escolha: "); 
            scanf("%d", &menu1);

            printf("\n");

            if (menu1 < 1 || menu1 > 5 || menu1 == menu) {
                printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção entre 1 e 5.\n");
            }
            // Solicita ao usuário a escolha do terceiro atributo
            printf("Escolha o segundo atributo para comparação (diferente do primeiro):\n");
            if (menu1 != 1 && menu != 1) {printf("1. População\n"); }
            if (menu1 != 2 && menu != 2) {printf("2. Área\n"); }
            if (menu1 != 3 && menu != 3) {printf("3. PIB\n"); }
            if (menu1 != 4 && menu != 4) {printf("4. Pontos Turísticos\n"); }
            if (menu1 != 5 && menu != 5) {printf("5. Densidade Populacional\n"); }
            printf("Digite sua Segunda Escolha: "); 
            scanf("%d", &menu2);

            printf("\n");

            if (menu2 < 1 || menu2 > 5 || menu2 == menu || menu2 == menu1) {
                printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção entre 1 e 5.\n");
            }
            printf("Escolha o segundo atributo para comparação (diferente do primeiro):\n");
            if (menu2 != 1 && menu1 != 1 && menu != 1) {printf("1. População\n"); }
            if (menu2 != 2 && menu1 != 2 && menu != 2) {printf("2. Área\n"); }
            if (menu2 != 3 && menu1 != 3 && menu != 3) {printf("3. PIB\n"); }
            if (menu2 != 4 && menu1 != 4 && menu != 4) {printf("4. Pontos Turísticos\n"); }
            if (menu2 != 5 && menu1 != 5 && menu != 5) {printf("5. Densidade Populacional\n"); }
            printf("Digite sua Segunda Escolha: "); 
            scanf("%d", &menu3);

            printf("\n");
            
            if (menu3 < 1 || menu3 > 5 || menu3 == menu || menu3 == menu1 || menu3 == menu2) {
                printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção entre 1 e 5.\n");
            }
            printf("Escolha o segundo atributo para comparação (diferente do primeiro):\n");
            if (menu3 != 1 && menu2 != 1 && menu1 != 1 && menu != 1) {printf("1. População\n"); }
            if (menu3 != 2 && menu2 != 2 && menu1 != 2 && menu != 2) {printf("2. Área\n"); }
            if (menu3 != 3 && menu2 != 3 && menu1 != 3 && menu != 3) {printf("3. PIB\n"); }
            if (menu3 != 4 && menu2 != 4 && menu1 != 4 && menu != 4) {printf("4. Pontos Turísticos\n"); }
            if (menu3 != 5 && menu2 != 5 && menu1 != 5 && menu != 5) {printf("5. Densidade Populacional\n"); }
            printf("Digite sua Segunda Escolha: "); 
            scanf("%d", &menu4);

            printf("\n");            

            if (menu4 < 1 || menu4 > 5 || menu4 == menu || menu4 == menu1 || menu4 == menu2 || menu4 == menu3) {
                printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção entre 1 e 5.\n");
            }            

    switch (menu) {//menu para primeiro atributo
        case 1:
            printf("Comparação dos Estados: %s e o %s\n", estado, estado1);
            printf("\n");
            printf("Você escolheu comparar a População.\n");
            printf("O Estado %s tem a População: %d\n", estado, populacao);
            printf("O Estado %s tem a População: %d\n", estado1, populacao1);
            break;
        case 2:
            printf("Comparação dos Estados: %s e o %s\n", estado, estado1);
            printf("\n");
            printf("Você escolheu comparar a Área.\n");
            printf("O Estado %s tem a Área: %.2f\n", estado, area);
            printf("O Estado %s tem a Área: %.2f\n", estado1, area1);
            break;
        case 3:
            printf("Comparação dos Estados: %s e o %s\n", estado, estado1);
            printf("\n");
            printf("Você escolheu comparar o PIB.\n");
            printf("O Estado %s tem o PIB: %.2f\n", estado, pib);
            printf("O Estado %s tem o PIB: %.2f\n", estado1, pib1);
            break;
        case 4:
            printf("Comparação dos Estados: %s e o %s\n", estado, estado1);
            printf("\n");
            printf("Você escolheu comparar os Pontos Turísticos.\n");
            printf("O Estado %s tem os Pontos Turísticos: %d\n", estado, numero_de_pontos_turisticos);
            printf("O Estado %s tem os Pontos Turísticos: %d\n", estado1, numero_de_pontos_turisticos1);
            break;
        case 5:
            printf("Comparação dos Estados: %s e o %s\n", estado, estado1);
            printf("\n");
            printf("Você escolheu comparar a Densidade Populacional.\n");
            printf("O Estado %s tem a Densidade Populacional: %.2f\n", estado, densidade_populacional);
            printf("O Estado %s tem a Densidade Populacional: %.2f\n", estado1, densidade_populacional1);
            break;
        default:
            printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção entre 1 e 5.\n");
            break;
    }
            printf("\n");

    switch (menu1) { // menu para o segundo atributo
        case 1:
            printf("Você escolheu comparar a População.\n");
            printf("O Estado %s tem a População: %d\n", estado, populacao);
            printf("O Estado %s tem a População: %d\n", estado1, populacao1);
            break;
        case 2:
            printf("Você escolheu comparar a Área.\n");
            printf("O Estado %s tem a Área: %.2f\n", estado, area);
            printf("O Estado %s tem a Área: %.2f\n", estado1, area1);
            break;
        case 3:     
            printf("Você escolheu comparar o PIB.\n");
            printf("O Estado %s tem o PIB: %.2f\n", estado, pib);
            printf("O Estado %s tem o PIB: %.2f\n", estado1, pib1);
            break;
        case 4:       
            printf("Você escolheu comparar os Pontos Turísticos.\n");
            printf("O Estado %s tem os Pontos Turísticos: %d\n", estado, numero_de_pontos_turisticos);
            printf("O Estado %s tem os Pontos Turísticos: %d\n", estado1, numero_de_pontos_turisticos1);
            break;
        case 5:
            printf("Você escolheu comparar a Densidade Populacional.\n");
            printf("O Estado %s tem a Densidade Populacional: %.2f\n", estado, densidade_populacional);
            printf("O Estado %s tem a Densidade Populacional: %.2f\n", estado1, densidade_populacional1);
            break;
        default:
            printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção entre 1 e 5.\n");
            break;
        }
                printf("\n");

        switch (menu2) { // menu para o segundo atributo
        case 1:
            printf("Você escolheu comparar a População.\n");
            printf("O Estado %s tem a População: %d\n", estado, populacao);
            printf("O Estado %s tem a População: %d\n", estado1, populacao1);
            break;
        case 2:
            printf("Você escolheu comparar a Área.\n");
            printf("O Estado %s tem a Área: %.2f\n", estado, area);
            printf("O Estado %s tem a Área: %.2f\n", estado1, area1);
            break;
        case 3:     
            printf("Você escolheu comparar o PIB.\n");
            printf("O Estado %s tem o PIB: %.2f\n", estado, pib);
            printf("O Estado %s tem o PIB: %.2f\n", estado1, pib1);
            break;
        case 4:       
            printf("Você escolheu comparar os Pontos Turísticos.\n");
            printf("O Estado %s tem os Pontos Turísticos: %d\n", estado, numero_de_pontos_turisticos);
            printf("O Estado %s tem os Pontos Turísticos: %d\n", estado1, numero_de_pontos_turisticos1);
            break;
        case 5:
            printf("Você escolheu comparar a Densidade Populacional.\n");
            printf("O Estado %s tem a Densidade Populacional: %.2f\n", estado, densidade_populacional);
            printf("O Estado %s tem a Densidade Populacional: %.2f\n", estado1, densidade_populacional1);
            break;
        default:
            printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção entre 1 e 5.\n");
            break;
        }
        printf("\n");

        switch (menu3) { // menu para o segundo atributo
        case 1:
            printf("Você escolheu comparar a População.\n");
            printf("O Estado %s tem a População: %d\n", estado, populacao);
            printf("O Estado %s tem a População: %d\n", estado1, populacao1);
            break;
        case 2:
            printf("Você escolheu comparar a Área.\n");
            printf("O Estado %s tem a Área: %.2f\n", estado, area);
            printf("O Estado %s tem a Área: %.2f\n", estado1, area1);
            break;
        case 3:     
            printf("Você escolheu comparar o PIB.\n");
            printf("O Estado %s tem o PIB: %.2f\n", estado, pib);
            printf("O Estado %s tem o PIB: %.2f\n", estado1, pib1);
            break;
        case 4:       
            printf("Você escolheu comparar os Pontos Turísticos.\n");
            printf("O Estado %s tem os Pontos Turísticos: %d\n", estado, numero_de_pontos_turisticos);
            printf("O Estado %s tem os Pontos Turísticos: %d\n", estado1, numero_de_pontos_turisticos1);
            break;
        case 5:
            printf("Você escolheu comparar a Densidade Populacional.\n");
            printf("O Estado %s tem a Densidade Populacional: %.2f\n", estado, densidade_populacional);
            printf("O Estado %s tem a Densidade Populacional: %.2f\n", estado1, densidade_populacional1);
            break;
        default:
            printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção entre 1 e 5.\n");
            break;
        }
        printf("\n");

        switch (menu4) { // menu para o segundo atributo
        case 1:
            printf("Você escolheu comparar a População.\n");
            printf("O Estado %s tem a População: %d\n", estado, populacao);
            printf("O Estado %s tem a População: %d\n", estado1, populacao1);
            break;
        case 2:
            printf("Você escolheu comparar a Área.\n");
            printf("O Estado %s tem a Área: %.2f\n", estado, area);
            printf("O Estado %s tem a Área: %.2f\n", estado1, area1);
            break;
        case 3:     
            printf("Você escolheu comparar o PIB.\n");
            printf("O Estado %s tem o PIB: %.2f\n", estado, pib);
            printf("O Estado %s tem o PIB: %.2f\n", estado1, pib1);
            break;
        case 4:       
            printf("Você escolheu comparar os Pontos Turísticos.\n");
            printf("O Estado %s tem os Pontos Turísticos: %d\n", estado, numero_de_pontos_turisticos);
            printf("O Estado %s tem os Pontos Turísticos: %d\n", estado1, numero_de_pontos_turisticos1);
            break;
        case 5:
            printf("Você escolheu comparar a Densidade Populacional.\n");
            printf("O Estado %s tem a Densidade Populacional: %.2f\n", estado, densidade_populacional);
            printf("O Estado %s tem a Densidade Populacional: %.2f\n", estado1, densidade_populacional1);
            break;
        default:
            printf("Opção inválida! Por favor, execute o programa novamente e escolha uma opção entre 1 e 5.\n");
            break;
        }
            printf("\n");

        if (menu == 1 && menu1 == 1 && menu2 == 1 && menu3 == 1 && menu4 == 1) {// menu para comparar a população
            if (populacao > populacao1) {
                printf("A Carta 1 Vençeu na População\n");
            } else if (populacao < populacao1) {
                printf("A Carta 2 Vençeu na População\n");
            } else {
                printf("As cartas têm a mesma População.\n");
            }
        } else if (menu == 2 && menu1 == 2 && menu2 == 2 && menu3 == 2 && menu4 == 2) {
            if (area > area1) {
                printf("A Carta 1 Vençeu na Área\n");
            } else if (area < area1) {
                printf("A Carta 2 Vençeu na Área\n");
            } else {
                printf("As Cartas têm a mesma Área.\n");
            }
        } else if (menu == 3 && menu1 == 3 && menu2 == 3 && menu3 == 3 && menu4 == 3) {
            if (pib > pib1) {
                printf("A Carta 1 Vençeu no PIB\n");
            } else if (pib < pib1) {
                printf("A Carta 2 Vençeu no PIB\n");
            } else {
                printf("As cartas têm o mesmo PIB.\n");
            }
        } else if (menu == 4 && menu1 == 4 && menu2 == 4 && menu3 == 4 && menu4 == 4) {
            if (numero_de_pontos_turisticos > numero_de_pontos_turisticos1) {
                printf("A Carta 1 Vençeu nos Pontos Turísticos\n");
            } else if (numero_de_pontos_turisticos < numero_de_pontos_turisticos1) {
                printf("A Carta 2 Vençeu nos Pontos Turísticos\n");
            } else {
                printf("As cartas têm o mesmo número de Pontos Turísticos.\n");
            }
        } else if (menu == 5 && menu1 == 5 && menu2 == 5 && menu3 == 5 && menu4 == 5) {
            if (densidade_populacional < densidade_populacional1) {
                printf("A Carta 1 Vençeu na Densidade Populacional\n");
            } else if (densidade_populacional > densidade_populacional1) {
                printf("A Carta 2 Vençeu na Densidade Populacional\n");
            } else {
                printf("As cartas têm a mesma Densidade Populacional.\n");
            }
        }
            printf("\n");

            if (menu != menu1 && menu != menu2 && menu1 != menu2 && menu3 != menu4) {// Se os atributos escolhidos forem diferentes, calcular a soma dos atributos
                float soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0;

                // Calcula a soma dos atributos escolhidos para a Carta 1
                if (menu == 1) soma1 += populacao;
                if (menu == 2) soma1 += area;
                if (menu == 3) soma1 += pib;
                if (menu == 4) soma1 += numero_de_pontos_turisticos;
                if (menu == 5) soma1 += (1 / densidade_populacional);

                if (menu1 == 1) soma1 += populacao;
                if (menu1 == 2) soma1 += area;
                if (menu1 == 3) soma1 += pib;
                if (menu1 == 4) soma1 += numero_de_pontos_turisticos;
                if (menu1 == 5) soma1 += (1 / densidade_populacional);

                if (menu2 == 1) soma1 += populacao;
                if (menu2 == 2) soma1 += area;
                if (menu2 == 3) soma1 += pib;
                if (menu2 == 4) soma1 += numero_de_pontos_turisticos;
                if (menu2 == 5) soma1 += (1 / densidade_populacional);

                if (menu3 == 1) soma1 += populacao;
                if (menu3 == 2) soma1 += area;
                if (menu3 == 3) soma1 += pib;
                if (menu3 == 4) soma1 += numero_de_pontos_turisticos;
                if (menu3 == 5) soma1 += (1 / densidade_populacional);

                if (menu4 == 1) soma1 += populacao;
                if (menu4 == 2) soma1 += area;
                if (menu4 == 3) soma1 += pib;
                if (menu4 == 4) soma1 += numero_de_pontos_turisticos;
                if (menu4 == 5) soma1 += (1 / densidade_populacional);

                // Calcula a soma dos atributos escolhidos para a Carta 2
                if (menu == 1) soma2 += populacao1;
                if (menu == 2) soma2 += area1;
                if (menu == 3) soma2 += pib1;
                if (menu == 4) soma2 += numero_de_pontos_turisticos1;
                if (menu == 5) soma2 += (1 / densidade_populacional1);

                if (menu1 == 1) soma2 += populacao1;
                if (menu1 == 2) soma2 += area1;
                if (menu1 == 3) soma2 += pib1;
                if (menu1 == 4) soma2 += numero_de_pontos_turisticos1;
                if (menu1 == 5) soma2 += (1 / densidade_populacional1);

                if (menu2 == 1) soma2 += populacao1;
                if (menu2 == 2) soma2 += area1;
                if (menu2 == 3) soma2 += pib1;
                if (menu2 == 4) soma2 += numero_de_pontos_turisticos1;
                if (menu2 == 5) soma2 += (1 / densidade_populacional1);

                if (menu3 == 1) soma2 += populacao1;
                if (menu3 == 2) soma2 += area1;
                if (menu3 == 3) soma2 += pib1;
                if (menu3 == 4) soma2 += numero_de_pontos_turisticos1;
                if (menu3 == 5) soma2 += (1 / densidade_populacional1);

                if (menu4 == 1) soma2 += populacao1;
                if (menu4 == 2) soma2 += area1;
                if (menu4 == 3) soma2 += pib1;
                if (menu4 == 4) soma2 += numero_de_pontos_turisticos1;
                if (menu4 == 5) soma2 += (1 / densidade_populacional1);

                printf("Soma dos atributos da Carta 1: %.2f\n", soma1);
                printf("Soma dos atributos da Carta 2: %.2f\n", soma2);
            

                printf("\n");

                // Determina o vencedor com base na soma dos atributos
                if (soma1 > soma2 && soma1 > soma3 && soma1 > soma4 && soma1 > soma5) {
                    printf("A Carta 1 é a vencedora!\n");
                } else if (soma2 > soma1 && soma2 > soma3 && soma2 > soma4 && soma2 > soma5) {
                    printf("A Carta 2 é a vencedora!\n");
                } else {
                    printf("Empate!\n");
                }
            }
       

    return 0;

   }