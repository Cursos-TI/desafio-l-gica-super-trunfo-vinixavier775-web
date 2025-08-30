#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //Variaveis da primeira cidade
    char nome[15] = "São Paulo";
    int populacao = 123250000;
    float area = 1521.11; //Em KM²
    float pib = 699.28; //Bilhões de Reais
    int numerodepontosturisticos = 50, opcao;
    float densidadepopulacional = (float)populacao/area;

    //Variaveis da segunda cidade
    char nome2[15] = "Rio de Janeiro";
    int populacao2 =67480000;
    float area2 = 1200.25; //Em KM²
    float pib2 = 300.50; //Bilhões de Reais
    int numerodepontosturisticos2 = 30;
    float densidadepopulacional2 = (float)populacao2/area2;
    srand(time(0));

    //Exibição do resultado
    printf("Super trunfo\n");
    printf("Escolha o atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
         case 1:
        printf("São Paulo população: %d | Rio de Janeiro população: %d\n", populacao, populacao2);

        if(populacao > populacao2) {
            printf("São Paulo venceu!\n");
        } else if (populacao == populacao2) {
            printf("Populações iguais! Empate.\n");
        } else {
            printf("Rio de Janeiro venceu!\n");
        }
        break;
        case 2:
        printf("São Paulo área: %.2f | Rio de Janeiro área: %.2f\n", area, area2);

        if(area > area2) {
            printf("São Paulo venceu!\n");
        } else if (area == area2) {
            printf("Áreas iguais! Empate.\n");
        } else {
            printf("Rio de Janeiro venceu!\n");
        }
        break;
        case 3:
        printf("São Paulo PIB: %.2F | Rio de Janeiro PIB: %.2F\n", pib, pib2);

        if(pib > pib2) {
            printf("São Paulo venceu!\n");
        } else if (pib == pib2) {
            printf("PIB iguais! Empate.\n");
        } else {
            printf("Rio de Janeiro venceu!\n");
        }
        break;
        case 4:
        printf("São Paulo número de pontos turísticos: %d | Rio de Janeiro número de pontos tirísticos: %d\n", numerodepontosturisticos, numerodepontosturisticos2);

        if(numerodepontosturisticos > numerodepontosturisticos2) {
            printf("São Paulo venceu!\n");
        } else if (numerodepontosturisticos == numerodepontosturisticos2) {
            printf("Número turísticos iguais! Empate.\n");
        } else {
            printf("Rio de Janeiro venceu!\n");
        }
        break;
        case 5:
        printf("São Paulo densidade populacional: %.2f | Rio de Janeiro densidade populacional: %.2f\n", densidadepopulacional, densidadepopulacional2);

        if(densidadepopulacional < densidadepopulacional2) {
            printf("São Paulo venceu!\n");
        } else if (densidadepopulacional == densidadepopulacional2) {
            printf("Densidade populacional iguais! Empate.\n");
        } else {
            printf("Rio de Janeiro venceu!\n");
        }
        break;
        default:
        printf("Opção inválida\n");
        break;
    }
    
    return 0;
}