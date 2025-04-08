#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1, estado2;
    char cod_cidade1[5], cod_cidade2[5];
    char nome_cidade1[50], nome_cidade2[50], cidadeVencedora[50];
    unsigned long int populacao1, populacao2;
    float area_km1, area_km2;
    float PIB1, PIB2;
    int ponto_turistico1, ponto_turistico2;
    float densidade_populacional1, densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)


    //Cadastrando a carta 1
    printf("Digite a letra do estado da carta 1:\n");
    scanf(" %c", &estado1);

    printf("Digite o código (A01, A02 etc...):\n");
    scanf(" %s", &cod_cidade1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &nome_cidade1, cidadeVencedora);

    printf("Digite o tamanho da população:\n");
    scanf(" %lu", &populacao1);

    printf("Digite o tamanho da área desse estado:\n");
    scanf(" %f", &area_km1);

    printf("Digite o PIB desse estado:\n");
    scanf(" %f", &PIB1); 

    printf("Quantos pontos turísticos possui:\n");
    scanf(" %d", &ponto_turistico1);

    //Calculando mais características da carta 1

    densidade_populacional1 = (float) populacao1 / area_km1;
    PIB_per_capita1 = (float) populacao1 / PIB1;

    //Cadastrando a carta 2
    printf("Digite a letra do estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código (B01, B02 etc...):\n");
    scanf(" %s", &cod_cidade2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &nome_cidade2, cidadeVencedora);

    printf("Digite o tamanho da população:\n");
    scanf(" %lu", &populacao2);

    printf("Digite o tamanho área desse estado:\n");
    scanf(" %f", &area_km2);

    printf("Digite o PIB desse estado:\n");
    scanf(" %f", &PIB2);

    printf("Quantos pontos turísticos possui:\n");
    scanf(" %d", &ponto_turistico2);

    //Calculando mais características da carta 2

    densidade_populacional2 = (float) populacao2 / area_km2;
    PIB_per_capita2 = (float) populacao2 / PIB2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populacao1 > populacao2){
        printf("Cidade 1 tem maior população.\n");
    } else {
        printf("Cidade 2 tem maior população.\n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("Carta 1 - %s: %lu", nome_cidade1, populacao1);
    printf("Carta 2 - %s: %lu", nome_cidade2, populacao2);

    if(populacao1 > populacao2){
        printf("Carta 1 (%s) venceu!", nome_cidade1);
    } else {
        printf("Carta 2 (%s) venceu!", nome_cidade2);
    }

    return 0;
}
