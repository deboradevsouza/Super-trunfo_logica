#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Inserir o título do desafio - Nível novato:

    printf("Desafio de Cartas Super Trunfo - Países \n");
    printf("Você deverá cadastrar duas cartas! \n");


    // Definir o tipo e o nome das variáveis:
    char estado1[50], codigo1[20], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosturisticos1;

    // Definir o que sairá em cada printf e scanf para a primeira carta:
    printf("Cadastre sua primeira carta: \n");

    printf("Escreva a sigla do Estado (sem utilizar espaço): \n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Escreva o nome da cidade (sem utilizar espaço): \n");
    scanf("%s", nome1);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    float densidadepopulacional1 = populacao1 / area1;
    
    // Definir o tipo e o nome das variáveis para a segunda carta:
    char estado2[50], codigo2[20], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosturisticos2;

    // Definir o que sairá em cada printf e scanf para a segunda carta:
    printf("Cadastre sua segunda carta: \n");

    printf("Escreva a sigla do Estado (sem utilizar espaço): \n");
    scanf("%s", estado2);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Escreva o nome da cidade (sem utilizar espaço): \n");
    scanf("%s", nome2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    float densidadepopulacional2 = populacao2 / area2;

    //criando um menu interativo para o usuário escolher qual quesito deseja comparar:
    int opcao1, opcao2;

    printf(" *** Vamos comparar cartas! *** \n");
    printf("Escolha o quesito que deseja comparar: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de pontos turísticos \n");
    printf("5 - Densidade demográfica \n");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        printf("Você escolheu o quesito população \n");
        printf("População da carta 1: %lu \n", populacao1);
        printf("População da carta 2: %lu \n", populacao2); 
        printf("Portanto, \n");
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
        break;
    case 2:
        printf("Você escolheu o quesito área \n");
        printf("Área da carta 1: %f \n", area1);
        printf("Área da carta 2: %f \n", area2); 
        printf("Portanto, \n");
        if (area1 > area2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
        break;
    case 3:
        printf("Você escolheu o quesito PIB \n");
        printf("PIB da carta 1: %f \n", pib1);
        printf("PIB da carta 2: %f \n", pib2); 
        printf("Portanto, \n");
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
        break;
    case 4:
        printf("Você escolheu o quesito número de pontos turísticos \n");
        printf("Pontos turísticos da carta 1: %d \n", pontosturisticos1);
        printf("Pontos turísticos da carta 2: %d \n", pontosturisticos2); 
        printf("Portanto, \n");
        if (pontosturisticos1 > pontosturisticos2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (pontosturisticos2 > pontosturisticos1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
        break;
    case 5:
        printf("Você escolheu o quesito densidade demográfica \n");
        printf("densidade demográfica da carta 1: %f \n", densidadepopulacional1);
        printf("densidade demográfica da carta 2: %f \n", densidadepopulacional2); 
        printf("Portanto, \n");
        if (densidadepopulacional1 < densidadepopulacional2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (densidadepopulacional2 < densidadepopulacional1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
        break;
    default:
        printf("Opção inválida! \n");
        break;
    }

    printf("Escolha o segundo quesito que deseja comparar: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de pontos turísticos \n");
    printf("5 - Densidade demográfica \n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Você já escolheu esse quesito! \n");
    } else {
        switch (opcao2)
    {
    case 1:
        printf("Você escolheu o quesito população \n");
        printf("População da carta 1: %lu \n", populacao1);
        printf("População da carta 2: %lu \n", populacao2); 
        printf("Portanto, \n");
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
        break;
    case 2:
        printf("Você escolheu o quesito área \n");
        printf("Você escolheu o quesito área \n");
        printf("Área da carta 1: %f \n", area1);
        printf("Área da carta 2: %f \n", area2); 
        printf("Portanto, \n");
        if (area1 > area2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
        break;
    case 3:
        printf("Você escolheu o quesito PIB \n");
        printf("PIB da carta 1: %f \n", pib1);
        printf("PIB da carta 2: %f \n", pib2); 
        printf("Portanto, \n");
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
        break;
    case 4:
        printf("Você escolheu o quesito número de pontos turísticos \n");
        printf("Pontos turísticos da carta 1: %d \n", pontosturisticos1);
        printf("Pontos turísticos da carta 2: %d \n", pontosturisticos2); 
        printf("Portanto, \n");
        if (pontosturisticos1 > pontosturisticos2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (pontosturisticos2 > pontosturisticos1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
        break;
    case 5:
        printf("Você escolheu o quesito densidade demográfica \n");
        printf("densidade demográfica da carta 1: %f \n", densidadepopulacional1);
        printf("densidade demográfica da carta 2: %f \n", densidadepopulacional2); 
        printf("Portanto, \n");
        if (densidadepopulacional1 < densidadepopulacional2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (densidadepopulacional2 < densidadepopulacional1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
        break;
    default:
        printf("Opção inválida! \n");
        break;
    }
    }

    
    return 0;
}   