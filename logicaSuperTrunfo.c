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
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area_km1, area_km2;
    float PIB1, PIB2;
    int ponto_turistico1, ponto_turistico2;
    float densidade_populacional1, densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2;

    //Definindo variáveis que irá armazenar os resultados
    char nomeAtributo1 [100], nomeAtributo2 [100];
    int escolhaJogador1, escolhaJogador2;
    int atributoEscolhido1, atributoEscolhido2;
    char carta1_Atributo1 [100], carta2_Atributo1 [100];
    char carta1_Atributo2 [100], carta2_Atributo2 [100];
    

    
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
    scanf(" %s", &nome_cidade1);

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
    scanf(" %s", &nome_cidade2);

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

    //Colocando o menu interativo para o usuário escolher qual atributo será comparado

    printf("------Escolha qual atributo você quer comparar-------\n");
    printf("1. População\n");
    printf("2. área do estado\n");
    printf("3. PIB\n");
    printf("4. Ponto Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");

    printf("Sua Escolha: ");
    scanf("%d", &escolhaJogador1);

    printf("----------------------------\n");


    //Colocando a lógica toda no Switch e utilizando sprintf para armazenar os resultados com uma variável feita
    //pra armazenar e utilizar no bloco de resultados, separando a parte lógica da parte de saída de dados.
    switch (escolhaJogador1)
    {
    case 1:
        sprintf(nomeAtributo1, "Você escolheu: População!\n");
        sprintf(carta1_Atributo1, "Carta 1 (%s): %lu\n", nome_cidade1, populacao1);
        sprintf(carta2_Atributo1, "Carta 2 (%s): %lu\n", nome_cidade2, populacao2);

        atributoEscolhido1 = populacao1 > populacao2 ? 1 : 0;
    case 2:
        sprintf(nomeAtributo1, "Você escolheu: Área do Estado!\n");
        sprintf(carta1_Atributo1, "Carta 1 (%s): %.2f km²\n", nome_cidade1, area_km1);
        sprintf(carta2_Atributo1, "Carta 2 (%s): %.2f km²\n", nome_cidade2, area_km2);

        atributoEscolhido1 = area_km1 > area_km2 ? 1 : 0;
        break;
    case 3:
        sprintf(nomeAtributo1, "Você escolheu: PIB!\n");
        sprintf(carta1_Atributo1, "Carta 1 (%s): %.2f km²\n", nome_cidade1, PIB1);
        sprintf(carta2_Atributo1, "Carta 2 (%s): %.2f km²\n", nome_cidade2, PIB2);

        atributoEscolhido1 = PIB1 > PIB2 ? 1 : 0;
        break;
    case 4:
        sprintf(nomeAtributo1, "Você escolheu: Pontos Turísticos!\n");
        sprintf(carta1_Atributo1, "Carta 1 (%s): %d\n", nome_cidade1, ponto_turistico1);
        sprintf(carta2_Atributo1, "Carta 2 (%s): %d\n", nome_cidade2, ponto_turistico2);

        atributoEscolhido1 = ponto_turistico1 > ponto_turistico2 ? 1 : 0;
        break;
    case 5:
        sprintf(nomeAtributo1, "Você escolheu: Densidade Populacional\n");
        sprintf(carta1_Atributo1, "Carta 1 (%s): %.2f\n", nome_cidade1, densidade_populacional1);
        sprintf(carta2_Atributo1, "Carta 2 (%s): %.2f\n", nome_cidade2, densidade_populacional2);

        atributoEscolhido1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        break;
     case 6:
        sprintf(nomeAtributo1, "Você escolheu: PIB per Capita\n");
        sprintf(carta1_Atributo1, "Carta 1 (%s): %.2f\n", nome_cidade1,PIB_per_capita1);
        sprintf(carta2_Atributo1, "Carta 2 (%s): %.2f\n", nome_cidade2, PIB_per_capita2);

        atributoEscolhido1 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;
        break;
    default:
        sprintf(nomeAtributo1, "Opção inválida - Tente novamente!\n");
        break;
    }

    ////////Implementando um segundo menu para o segundoa tributo e ums egundo switch //////////

    printf("------Escolha o segundo atributo que quer comparar-------\n");
    printf("1. População\n");
    printf("2. área do estado\n");
    printf("3. PIB\n");
    printf("4. Ponto Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");

    printf("Sua Escolha: ");
    scanf("%d", &escolhaJogador2);

    printf("----------------------------\n");

    if (escolhaJogador1 == escolhaJogador2) 
    {
        printf("Você escolheu o mesmo atributo!");
    } else {
        switch (escolhaJogador2)
        {
        case 1:
            sprintf(nomeAtributo2, "Você escolheu: População!\n");
            sprintf(carta1_Atributo2, "Carta 1 (%s): %lu\n", nome_cidade1, populacao1);
             sprintf(carta2_Atributo2, "Carta 2 (%s): %lu\n", nome_cidade2, populacao2);

            atributoEscolhido2 = populacao1 > populacao2 ? 1 : 0;
        case 2:
            sprintf(nomeAtributo2, "Você escolheu: Área do Estado!\n");
            sprintf(carta1_Atributo2, "Carta 1 (%s): %.2f km²\n", nome_cidade1, area_km1);
            sprintf(carta2_Atributo2, "Carta 2 (%s): %.2f km²\n", nome_cidade2, area_km2);

            atributoEscolhido2 = area_km1 > area_km2 ? 1 : 0;
            break;
        case 3:
            sprintf(nomeAtributo2, "Você escolheu: PIB!\n");
            sprintf(carta1_Atributo2, "Carta 1 (%s): %.2f km²\n", nome_cidade1, PIB1);
            sprintf(carta2_Atributo2, "Carta 2 (%s): %.2f km²\n", nome_cidade2, PIB2);

            atributoEscolhido2 = PIB1 > PIB2 ? 1 : 0;
            break;
        case 4:
            sprintf(nomeAtributo2, "Você escolheu: Pontos Turísticos!\n");
            sprintf(carta1_Atributo2, "Carta 1 (%s): %d\n", nome_cidade1, ponto_turistico1);
            sprintf(carta2_Atributo2, "Carta 2 (%s): %d\n", nome_cidade2, ponto_turistico2);

            atributoEscolhido2 = ponto_turistico1 > ponto_turistico2 ? 1 : 0;
            break;
        case 5:
            sprintf(nomeAtributo2, "Você escolheu: Densidade Populacional\n");
            sprintf(carta1_Atributo2, "Carta 1 (%s): %.2f\n", nome_cidade1, densidade_populacional1);
            sprintf(carta2_Atributo2, "Carta 2 (%s): %.2f\n", nome_cidade2, densidade_populacional2);

            atributoEscolhido2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
            break;
        case 6:
            sprintf(nomeAtributo2, "Você escolheu: PIB per Capita\n");
            sprintf(carta1_Atributo2, "Carta 1 (%s): %.2f\n", nome_cidade1,PIB_per_capita1);
            sprintf(carta2_Atributo2, "Carta 2 (%s): %.2f\n", nome_cidade2, PIB_per_capita2);

            atributoEscolhido2 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;
            break;
        default:
            sprintf(nomeAtributo2, "Opção inválida - Tente novamente!\n");
            break;
        }
    }



    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //Exibindo os reusltado

    printf("%s", nomeAtributo1);
    printf("%s", carta1_Atributo1);
    printf("%s", carta2_Atributo1);

    printf("--------------------------\n");

    printf("%s", nomeAtributo2);
    printf("%s", carta1_Atributo2);
    printf("%s", carta2_Atributo2);

    if (atributoEscolhido1 && atributoEscolhido2)
    {
        printf("Parabéns, você venceu!\n");
    } else if (atributoEscolhido1 != atributoEscolhido2) {
        printf("Empate!\n");
    } else {
        printf("Infelizmente, você perdeu!\n");
    }

    return 0;
}
