#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

     char estado1[20], estado2[20];
     char codigo_carta1[10], codigo_carta2[10];
     char nome_cidade1[30], nome_cidade2[30];
     int populacao1, populacao2;
     float area1, area2;
     float pib1, pib2;
     int ponto_turistico1, ponto_turistico2;
     float densidade_populacional1, densidade_populacional2;
     float pib_percapita1, pib_percapita2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Entrada de dados da carta 1:

     printf("Super Trunfo\n\n");

     printf("Dados da Carta 1:\n");

     printf("Digite o estado: ");
     fgets(estado1, 20, stdin);

     printf("Digite o código da carta: ");
     fgets(codigo_carta1, 10, stdin);

     printf("Digite o nome da cidade: ");
     fgets(nome_cidade1, 30, stdin);

     printf("Digite a população: ");
     scanf("%d", &populacao1);

     printf("Digite a área: ");
     scanf("%f", &area1);

     printf("Digite o PIB: ");
     scanf("%f", &pib1);

     printf("Digite a quantidade de pontos turísticos: ");
     scanf("%d", &ponto_turistico1);

     //Entrada de dados da carta 2:

     printf("\nDados da Carta 2:\n");

     getchar();

     printf("Digite o estado: ");
     fgets(estado2, 20, stdin);

     printf("Digite o código da carta: ");
     fgets(codigo_carta2, 10, stdin);

     printf("Digite o nome da cidade: ");
     fgets(nome_cidade2, 30, stdin);

     printf("Digite a população: ");
     scanf("%d", &populacao2);

     printf("Digite a área: ");
     scanf("%f", &area2);

     printf("Digite o PIB: ");
     scanf("%f", &pib2);

     printf("Digite a quantidade de pontos turísticos: ");
     scanf("%d", &ponto_turistico2);

     //Cálculo de densidade populacional e renda per capita das duas cartas.

        densidade_populacional1 = populacao1 / area1;
        densidade_populacional2 = populacao2 / area2;

        pib_percapita1 = pib1 / populacao1;
        pib_percapita2 = pib2 / populacao2;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     printf("\n\nCarta 1: \n");

     printf("Estado: %s", estado1);
     printf("Código: %s", codigo_carta1);
     printf("Cidade: %s", nome_cidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", ponto_turistico1);
     printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);
     printf("PIB per capita: %.2f reais\n", pib_percapita1);

     printf("\n\nCarta 2: \n");

     printf("Estado: %s", estado2);
     printf("Código: %s", codigo_carta2);
     printf("Cidade: %s", nome_cidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
     printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
     printf("PIB per capita: %.2f reais\n", pib_percapita2);

     return 0;
}
