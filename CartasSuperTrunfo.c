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
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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

    return 0;
}
