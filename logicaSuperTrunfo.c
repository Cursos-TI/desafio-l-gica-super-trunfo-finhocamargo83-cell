#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[50], codigo1[10], nome1[50];
    unsigned long populacao1;
    long pib1;
    float area1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Variáveis da Carta 2
    char estado2[50], codigo2[10], nome2[50];
    unsigned long populacao2;
    long pib2;
    float area2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;

    int atributo;

    // --- Cadastro da Carta 1 ---
    printf("--- Insira os dados da Carta 1 ---\n");
    printf("Estado: "); scanf(" %[^\n]", estado1);
    printf("Codigo: "); scanf(" %[^\n]", codigo1);
    printf("Nome: "); scanf(" %[^\n]", nome1);
    printf("Populacao: "); scanf("%lu", &populacao1);
    printf("Area (km2): "); scanf("%f", &area1);
    printf("PIB (milhoes de R$): "); scanf("%ld", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &pontos_turisticos1);

    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (float)pib1 / populacao1;
    super_poder1 = (float)populacao1 + area1 + (float)pib1 +
                   pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);

    // --- Cadastro da Carta 2 ---
    printf("\n--- Insira os dados da Carta 2 ---\n");
    printf("Estado: "); scanf(" %[^\n]", estado2);
    printf("Codigo: "); scanf(" %[^\n]", codigo2);
    printf("Nome: "); scanf(" %[^\n]", nome2);
    printf("Populacao: "); scanf("%lu", &populacao2);
    printf("Area (km2): "); scanf("%f", &area2);
    printf("PIB (milhoes de R$): "); scanf("%ld", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (float)pib2 / populacao2;
    super_poder2 = (float)populacao2 + area2 + (float)pib2 +
                   pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // --- Escolha do atributo ---
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n");
    printf("5 - Densidade\n6 - PIB per Capita\n7 - Super Poder\n");
    printf("Opcao: ");
    scanf("%d", &atributo);

    // --- Comparação ---
    printf("\n--- Resultado da Comparacao ---\n");

    if (atributo == 1) { // Populacao
        if (populacao1 > populacao2) printf("Carta 1 venceu!\n");
        else if (populacao1 < populacao2) printf("Carta 2 venceu!\n");
        else printf("Empate!\n");
    }
    else if (atributo == 2) { // Area
        if (area1 > area2) printf("Carta 1 venceu!\n");
        else if (area1 < area2) printf("Carta 2 venceu!\n");
        else printf("Empate!\n");
    }
    else if (atributo == 3) { // PIB
        if (pib1 > pib2) printf("Carta 1 venceu!\n");
        else if (pib1 < pib2) printf("Carta 2 venceu!\n");
        else printf("Empate!\n");
    }
    else if (atributo == 4) { // Pontos Turísticos
        if (pontos_turisticos1 > pontos_turisticos2) printf("Carta 1 venceu!\n");
        else if (pontos_turisticos1 < pontos_turisticos2) printf("Carta 2 venceu!\n");
        else printf("Empate!\n");
    }
    else if (atributo == 5) { // Densidade (menor vence)
        if (densidade1 < densidade2) printf("Carta 1 venceu!\n");
        else if (densidade1 > densidade2) printf("Carta 2 venceu!\n");
        else printf("Empate!\n");
    }
    else if (atributo == 6) { // PIB per Capita
        if (pib_per_capita1 > pib_per_capita2) printf("Carta 1 venceu!\n");
        else if (pib_per_capita1 < pib_per_capita2) printf("Carta 2 venceu!\n");
        else printf("Empate!\n");
    }
    else if (atributo == 7) { // Super Poder
        if (super_poder1 > super_poder2) printf("Carta 1 venceu!\n");
        else if (super_poder1 < super_poder2) printf("Carta 2 venceu!\n");
        else printf("Empate!\n");
    }
    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}

