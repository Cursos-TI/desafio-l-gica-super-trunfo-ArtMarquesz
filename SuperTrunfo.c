#include <stdio.h>
#include <string.h>

// Definição da estrutura da carta
struct Carta {
    char estado[50];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1 = {"SP", "C01", "São Paulo", 12300000, 1521.0, 2300000.0, 20};
    struct Carta carta2 = {"RJ", "C02", "Rio de Janeiro", 6000000, 1182.3, 1500000.0, 15};

    // Cálculo da densidade populacional e PIB per capita para carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Cálculo da densidade populacional e PIB per capita para carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Atributo de comparação escolhido: População
    printf("Comparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s (%s):\n", carta1.nomeCidade, carta1.estado);
    printf("  População: %d\n", carta1.populacao);
    printf("  Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("  PIB per capita: R$ %.2f\n\n", carta1.pibPerCapita);

    printf("Carta 2 - %s (%s):\n", carta2.nomeCidade, carta2.estado);
    printf("  População: %d\n", carta2.populacao);
    printf("  Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("  PIB per capita: R$ %.2f\n\n", carta2.pibPerCapita);

    // Comparação e exibição do resultado
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

