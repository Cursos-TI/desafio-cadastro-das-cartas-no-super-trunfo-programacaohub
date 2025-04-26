#include <stdio.h>

int main() {
    // Cidade 1
    char Estado1[3];
    char Codigo_carta1[50];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos1;

    // Cidade 2
    char Estado2[3];
    char Codigo_carta2[50];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos2;

    // ====== Cadastro cidade 1 ======
    printf("=== CARTA N1 ===\n");
    printf("Estado: ");
    scanf(" %2s", Estado1);
    while (getchar() != '\n');

    printf("Código da carta: ");
    scanf(" %49[^\n]", Codigo_carta1);
    while (getchar() != '\n');

    printf("Cidade: ");
    scanf(" %49[^\n]", Cidade1);

    printf("População: ");
    scanf("%d", &Populacao1);

    printf("Área (km²): ");
    scanf("%f", &Area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontos1);

    while (getchar() != '\n');

    // ====== Cadastro cidade 2 ======
    printf("\n=== CARTA N2 ===\n");
    printf("Estado: ");
    scanf(" %2s", Estado2);
    while (getchar() != '\n');

    printf("Código da carta: ");
    scanf(" %49[^\n]", Codigo_carta2);
    while (getchar() != '\n');

    printf("Cidade: ");
    scanf(" %49[^\n]", Cidade2);

    printf("População: ");
    scanf("%d", &Populacao2);

    printf("Área (km²): ");
    scanf("%f", &Area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontos2);

    // ====== Cálculo da densidade populacional ======
    float Densidade1 = Populacao1 / Area1;
    float Densidade2 = Populacao2 / Area2;

    printf("\n--- DENSIDADE POPULACIONAL ---\n");
    printf("%s: %.2f hab/km²\n", Cidade1, Densidade1);
    printf("%s: %.2f hab/km²\n", Cidade2, Densidade2);

    // ====== Cálculo do PIB per Capita =======
    float pib_per_capita1 = PIB1 / Populacao1;
    float pib_per_capita2 = PIB2 / Populacao2;

    printf("\n---PIB PER CAPITA-----\n");
    printf("%s: R$ %.2f hab/população\n", Cidade1, pib_per_capita1);
    printf("%s: R$ %.2f hab/população\n", Cidade2, pib_per_capita2);

    // Comparação de Cartas (verdadeiro ou falso, ou seja, 1 ou 0)
    printf("\n População Carta: %d", Populacao1 > Populacao2);
    printf("\n Área Total Carta: %d", Area1 > Area2);
    printf("\n PIB Total Carta: %d", PIB1 > PIB2);
    printf("\n Pontos Turísticos Carta: %d", Pontos1 > Pontos2);

    // Soma dos atributos
    printf("\n\n--- Super poder ---\n");
    printf("População total: %d\n", Populacao1 + Populacao2);
    printf("Área total: %.2f km²\n", Area1 + Area2);
    printf("PIB total: R$ %.2f\n", PIB1 + PIB2);
    printf("Total de pontos turísticos: %d\n", Pontos1 + Pontos2);

    return 0;
}