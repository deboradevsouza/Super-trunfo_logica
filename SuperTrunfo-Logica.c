#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Inserir o título do desafio - Nível novato:

    printf("Desafio de Cartas Super Trunfo - Países \n");
    printf("Você deverá cadastrar duas cartas! \n");


    // Definir o tipo e o nome das variáveis:
    char estado1[50];
    char codigo1[20];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
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
    float pibpercapita1 = pib1 / populacao1;
    float superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + (1 / densidadepopulacional1);
    
    // Definir o tipo e o nome das variáveis para a segunda carta:
    char estado2[50];
    char codigo2[20];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
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
    float pibpercapita2 = pib2 / populacao2;
    float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + (1 / densidadepopulacional2);

    // Definir o retorno ao usuário após o cadastro da carta feita pelo mesmo.
    
    printf("*** CARTA 1: *** \n \n");
    printf("Você cadastrou sua primeira carta: \n");
    printf("Código da carta criada: %s \n", codigo1);
    printf("Estado: %s - Cidade: %s \n", estado1, nome1);
    printf("População: %lu \n", populacao1);
    printf("Tamanho da área: %f km² \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Quantidade de pontos turísticos: %d \n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidadepopulacional1);
    printf("PIB per Capita: %.2f \n", pibpercapita1);
    printf("Super Poder de sua carta 1: %.2f \n \n \n", superpoder1);


    printf("*** CARTA 2: *** \n \n");
    printf("Você cadastrou sua segunda carta: \n");
    printf("Código da carta criada: %s \n", codigo2);
    printf("Estado: %s - Cidade: %s \n", estado2, nome2);
    printf("População: %lu \n", populacao2);
    printf("Tamanho da área: %f km² \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Quantidade de pontos turísticos: %d \n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f \n", pibpercapita2);
    printf("Super Poder de sua carta 2: %.2f \n \n \n", superpoder2);
    
/*
    printf("População: Carta 1 venceu (%d) \n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d) \n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d) \n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu  (%d) \n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 2 venceu (%d) \n", densidadepopulacional1 > densidadepopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d) \n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d) \n", superpoder1 > superpoder2);


// Mostrar para o usuário os dados inseridos no quesito escolhido, no caso, a população (nível novato):
    printf("Comparação de cartas pelo quesito População: \n");
    printf("Carta 1: \n");
    printf("População: %lu \n", populacao1);
    printf("Carta 2: \n");
    printf("População: %lu \n", populacao2);

// Implementar a lógica de comparação entre as cartas:
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu! \n", nome1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu! \n", nome2);
    }
*/

    //criando um menu interativo para o usuário escolher qual quesito deseja comparar:
    int opcao;
    printf(" *** Vamos comparar duas cartas! *** \n");
    printf("Escolha o quesito que deseja comparar: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de pontos turísticos \n");
    printf("5 - Densidade demográfica \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("População \n");
        break;
    case 2:
        printf("Área \n");
        break;
    case 3:
        printf("PIB \n");
        break;
    case 4:
        printf("Número de pontos turísticos \n");
        break;
    case 5:
        printf("Densidade demográfica \n");
        break;
    default:
        printf("Opção inválida! \n");
        break;
    }

    if (opcao == 1) {
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
    }

    if (opcao == 2) {
        if (area1 > area2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
    }

    if (opcao == 3) {
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
    }

    if (opcao == 4) {
        if (pontosturisticos1 > pontosturisticos2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (pontosturisticos2 > pontosturisticos1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
    }

    if (opcao == 5) {
        if (densidadepopulacional1 < densidadepopulacional2) {
            printf("Resultado: Carta 1 venceu! \n");
        } else if (densidadepopulacional2 < densidadepopulacional1) {
            printf("Resultado: Carta 2 venceu! \n");
        } else {
            printf("Empate! \n");
        }
    }
    
    return 0;
}   