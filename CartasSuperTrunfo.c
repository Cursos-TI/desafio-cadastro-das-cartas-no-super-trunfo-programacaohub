#include <stdio.h>

int main () {
    // Cidade 1 // Estrutura que presenta a primeira cidadde da carta 1.
    char Estado1[3]; // No campo estado, codigo da carta e cidade usei um char para armazenar letras.
    char Codigo_carta1[50]; 
    char Cidade1[50];
    int Populacao1; // No campo População e pontos turisticos usei int para declarar valores.
    float Area1; // No campo Area e PIB usei float para armazenar numeros com virgulas e pontos.
    float PIB1;
    int Pontos1;

    // Cidade 2 // Estrutura que presenta a segunda cidadde da carta 2
    char Estado2[3]; 
    char Codigo_carta2[50];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos2;

    // ====== Cadastro cidade 1 ======
    printf("=== CARTA N1 ===\n"); // no Campo Carta 1 e 2 não é necessario scanf para digitar valor, é apenas informativo.
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


    return 0;
}
